#include <SFML/Graphics.hpp>
#include <cmath>
#include "test.h"

void other()
{
    // Create the main window
    sf::RenderWindow window(sf::VideoMode(800, 600), "Circular Movement");

    // Create a red circle shape
    sf::CircleShape circle(50.f);
    circle.setFillColor(sf::Color::Red);
    circle.setOutlineThickness(10.f);
    circle.setOutlineColor(sf::Color::Blue);

    // Initial position of the circle
    sf::Vector2f position(400.f, 300.f);

    // Radius of the circular path
    float radius = 200.f;

    // Center of the circular path
    sf::Vector2f center(400.f, 300.f);
    bool movingUp = false;
    bool movingDown = false;
    bool movingLeft = false;
    bool movingRight = false;

    // Rotation angle
    float angle = 0.f;
    const float angleSpeed = 0.9f; // Controls how fast the circle moves

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
                            // Check for WASD key presses
            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::W)
                movingUp = true;
            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::S)
                movingDown = true;
            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::A)
                movingLeft = true;
            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::D)
                movingRight = true;
            
            // Check for WASD key releases
            if (event.type == sf::Event::KeyReleased && event.key.code == sf::Keyboard::W)
                movingUp = false;
            if (event.type == sf::Event::KeyReleased && event.key.code == sf::Keyboard::S)
                movingDown = false;
            if (event.type == sf::Event::KeyReleased && event.key.code == sf::Keyboard::A)
                movingLeft = false;
            if (event.type == sf::Event::KeyReleased && event.key.code == sf::Keyboard::D)
                movingRight = false;
        }

        // Clear screen
       // window.clear();
                // Move the circle horizontally

        // Calculate new position using polar coordinates
        
        float x = 400;
        float y = 300;
       if (movingLeft) {
            x -= center.x + std::cos(angle) * radius;
        } else if (movingRight) {
            x += center.x + std::cos(angle) * radius;
        }

        // Move the circle vertically
        if (movingUp) {
            y -= center.y + std::cos(angle) * radius;
        } else if (movingDown) {
            y += center.y + std::cos(angle) * radius;
        }

        // Update circle position
        circle.setPosition(x, y);

        // Update rotation angle
        angle += angleSpeed;

        // Draw the circle
        window.draw(circle);

        // Display the rendered frame
        window.display();
    }


}
