#include <SFML\Graphics.hpp>
#include "main.h"
#include <windows.h>
#include <iostream>
using namespace sf;
using namespace std;
int main()
{
	RenderWindow window(VideoMode(800, 400), "Electro-Games Launcher");
	//sf::CircleShape shape(100.f);
	//shape.setFillColor(sf::Color::Green);
	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
				window.close();
		}

		window.clear(Color(255, 255, 255 ,255));
		//window.draw(shape);
		/**
		récupère la résolution horizontale de l'écran (HORZRES) et lui ajoute 240 
		pour le positionnement
		*/
		int xPos = HORZRES + 240;
		/**
		récupère la résolution verticale de l'écran (VERTRES) et lui ajoute 150
		pour le positionnement
		*/
		int yPos = VERTRES  + 150;
		window.setPosition(Vector2i(xPos, yPos));
		window.display();
	}

	return 0;
}