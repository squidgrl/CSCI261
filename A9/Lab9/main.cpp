/* CSCI 261 Lab9A: Bouncing Bubble
 *
 * Author: Krista Dunlap
 *
 * Creating a Bouncing Ball in SFML
 */

//Inlcluding libraries needed
#include <iostream>
#include "BubbleClass.cpp"
#include <SFML/Graphics.h>
#include <SFML/Window.h>

using namespace std;

int main() {
    
    Bubble newBubble;
    
    int windowX = 640;
    int windowY = 480;
    
    RenderWindow window( VideoMode( windowX, windowY ), "SFML Window" );
	
	while(window.isOpen()) {
	    
	    window.clear();
	    
	    newBubble.updatePosition();
	    
	    if(newBubble.getCurrentPosX() < 0) {
	        newBubble.setX(1);
	        newBubble.updatePosition();
	    }
	    
	    else if(newBubble.getCurrentPosY() < 0) {
	        newBubble.setY(2);
	        newBubble.updatePosition();
	    }
	    
	    else if((newBubble.getCurrentPosX() + (newBubble.getCircleRadius()*2)) > windowX) {
	        newBubble.setX(-1);
	        newBubble.updatePosition();
	    }
	    
	    else if((newBubble.getCurrentPosY() + (newBubble.getCircleRadius()*2)) > windowY) {
	        newBubble.setY(-2);
	        newBubble.updatePosition();
	    }
	    
	    window.draw(newBubble.getCircle());
	
	    window.display();
	
	}
    
    return 0;
    
}
