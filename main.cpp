#include <SFML/Graphics.hpp>
#include <iostream>
#include "test.h"
#include <stdlib.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>
#include <thread>
// save: g++ main.cpp test.cpp -o sfml-app -lsfml-graphics -lsfml-window -lsfml-system
//cowsay -f dragon "lol
void button(){



	
}


int main() {  

	other();
	using namespace std;
	
    // Initialize SFML
    sf::RenderWindow window(sf::VideoMode(500, 400), "/usr/share/fonts/truetype/freefont/FreeSansBold.ttf");
   
 	sf::RectangleShape cube(sf::Vector2f(50, 100));  // Reduced size for better visibility
    cube.setFillColor(sf::Color::Green);
    // Create circle shape
    sf::CircleShape shape(50.f);  // Reduced size for better visibility
    shape.setFillColor(sf::Color::Green);
    sf::CircleShape shape2(50.f);  // Reduced size for better visibility
    shape2.setFillColor(sf::Color::Blue);
    sf::CircleShape shape3(20.f);  // Reduced size for better visibility
    shape3.setFillColor(sf::Color::Blue);
    sf::CircleShape shape4(20.f);  // Reduced size for better visibility
    shape4.setFillColor(sf::Color::Blue);

    // Load font
    sf::Font font;
    if (!font.loadFromFile("/usr/share/fonts/truetype/freefont/FreeSansBold.ttf")) {
        std::cerr << "Failed to load font!" << std::endl;
        return 1;
    }

    // Create text object
    sf::Text text;
    text.setFont(font);
    text.setString("Press WASD to move the circle");
    text.setCharacterSize(24);
    text.setFillColor(sf::Color::Red);

    // Initial position of the circle
    float initialX = 0;
    float initialY = 250;  // Set initial Y-position to the middle of the screen
    float wX = 0;
    float wY = 209;
	sf::Texture cursorTexture;
	cursorTexture.loadFromFile("/home/elev/shared.jpeg");
	sf::Sprite cursorSprite;
	cursorSprite.setTexture(cursorTexture);
	window.setMouseCursorVisible(false);

    // Flags to track movement directions
    bool movingUp = false;
    bool movingDown = false;
    bool movingLeft = false;
    bool movingRight = false;
    bool Rotate= false;
    bool click=false;
    bool autoc=false;
    bool wup=false;
    bool wdown=false;
    bool wright=false;
    bool wleft=false;
    bool boo=false;
    bool aaa=false;
    
    int tall = 0;
    int rando1= rand() % 100;
    int rando2= rand() % 200;
    int rando3= rand() % 400;
    int rando4= rand() % 600;
    int ting=1;
    int noe=4;
    // Main loop
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
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
            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::R)
                Rotate = true;
            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Up)
                wup=true;
            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Down)
               wdown=true;
            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Left)
               wleft=true;
            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Right)
               wright=true;
                                                                          
            if (event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
                click = true;

            
            // Check for WASD key releases
            if (event.type == sf::Event::KeyReleased && event.key.code == sf::Keyboard::W)
                movingUp = false;
            if (event.type == sf::Event::KeyReleased && event.key.code == sf::Keyboard::S)
                movingDown = false;
            if (event.type == sf::Event::KeyReleased && event.key.code == sf::Keyboard::A)
                movingLeft = false;
            if (event.type == sf::Event::KeyReleased && event.key.code == sf::Keyboard::D)
                movingRight = false;
            if (event.type == sf::Event::KeyReleased && event.key.code == sf::Keyboard::R)
                Rotate = false;       
            if (event.type == sf::Event::KeyReleased && event.key.code == sf::Keyboard::Z)
                autoc = false;
                
            if (event.type == sf::Event::KeyReleased && event.key.code == sf::Keyboard::Up)
                wup=false;
            if (event.type == sf::Event::KeyReleased && event.key.code == sf::Keyboard::Down)
               wdown=false;
            if (event.type == sf::Event::KeyReleased && event.key.code == sf::Keyboard::Left)
               wleft=false;
            if (event.type == sf::Event::KeyReleased && event.key.code == sf::Keyboard::Right)
               wright=false;                      
                
            if (event.type == sf::Event::MouseButtonReleased && event.mouseButton.button == sf::Mouse::Left)
                click = false;         
        }

        // Clear screen
        window.clear();

        // Move the circle horizontally
        if (movingLeft) {
            initialX -= 1;
           
        } else if (movingRight) {
            initialX += 1;
        }
        if (Rotate) {
        	tall = tall +1;
            shape.setRotation(tall);
            }
         else
         {
         tall = tall -1;
         	shape.setRotation(tall);
         }
         if (click){
        noe= noe+1;
        sf::CircleShape noe(20.f);  // Reduced size for better visibility
    	noe.setFillColor(sf::Color::Blue);
    	rando3= rand() % 400;
    	rando4= rand() % 600;
    	noe.setPosition(rando3, rando4);
    	window.draw(noe);
		
         	
         }

        if (autoc) {

		
			
        

 
            }
        // Move the circle vertically
        if (movingUp) {
            initialY -= 1;
        } else if (movingDown) {
            initialY += 1;
        }
        
        if (wup) {
            wY -= 3;
        } else if (wdown) {
        
            wY += 3;
        }
        if (wleft) {
            wX -= 3;
        } else if (wright) {
        
            wX += 3;
        }

        if (initialX==200){
        	if (initialY==20){
        		text.setString("yay");	
        	}
        	 
        }
        else{
        	 text.setString("Press WASD to move the circle");
        }
        
        // Add a small vertical offset to prevent getting stuck
    	if (shape.getGlobalBounds( ).intersects( shape2.getGlobalBounds() ) ) 
    	{
    		shape2.setPosition(rando1, rando2);
    		rando1= rand() % 100;
    		rando2= rand() % 100;
    	}
    		if (cube.getGlobalBounds( ).intersects( cursorSprite.getGlobalBounds() ) ) 
    	{
    	if (event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left){

			shape2.setPosition(rando1, rando2);

	    	rando1= rand() % 100;
			rando2= rand() % 100;
			if (boo==false){

				boo=true;
			}
			else{
				boo=false;
				
			}

			
	    	
	    	if (aaa==false){
	    		aaa=true;
	    	}
	    	else{
	    		aaa=false;
	    	}	}
	    	
	
    	if (boo){
    	button();
    	
    	
    		
    	}
    	
    	

    	};
    	
    	if(aaa){
    	//ustabil code:
    //	sf::RenderWindow windo3(sf::VideoMode(500, 400), "test");
   	//	windo3.display();
   		// windo3.draw(shape);
    	//kan fjerne iconer hvis du lar den kjøre lenge nok 
    		
    	} 

        // Update circle position
        shape.setPosition(initialX, initialY);
        if (ting==1){
        ting=0;
        	shape2.setPosition(200, 20);	
        }
		shape3.setPosition(initialX+40, initialY+40);
        // Draw text and shape
        sf::Vector2i mousePos =sf::Mouse::getPosition(window);
        cursorSprite.setPosition(mousePos.x, mousePos.y);
        cursorSprite.setScale(0.1, 0.1);
        shape4.setPosition(400, 200);
        window.draw(text);
        window.draw(shape);
        window.draw(shape2);
        window.draw(shape3);
        window.draw(shape4);
        window.draw(cube);
        window.draw(cursorSprite);

        
        

        // Update window
        window.display();
        sf::Vector2i newPosition(wX, wY);
        window.setPosition(newPosition);
             		//stop time: std::this_thread::sleep_for(std::chrono::seconds(4));


        // Small delay to control speed
        sf::sleep(sf::milliseconds(10));
        
    }

    return 0;
}


