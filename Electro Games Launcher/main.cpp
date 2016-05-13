#include <SFML\Graphics.hpp>
#include "main.h"
#include <windows.h>
#include <iostream>
#include "Loader.h"
#include "InternetConnection.h"

using namespace sf;
using namespace std;
using namespace ElectroGamesConnectivity;
int main()
{
	String LauncherVersion = "1.0.0";
	RenderWindow window(VideoMode(800, 400), "Electro-Games Launcher " + LauncherVersion);
	//sf::CircleShape shape(100.f);
	//shape.setFillColor(sf::Color::Green);
	//window.draw(shape);
	sf::RectangleShape rect;
	rect.setFillColor(Color::Magenta);
	rect.setSize(Vector2f(200, 200));
	/**
	récupère la résolution horizontale de l'écran (HORZRES) et lui ajoute 240
	pour le positionnement
	*/
	int xPos = HORZRES + 240;
	/**
	récupère la résolution verticale de l'écran (VERTRES) et lui ajoute 150
	pour le positionnement
	*/
	int yPos = VERTRES + 150;
	window.setPosition(Vector2i(xPos, yPos));
	Loader loader;
	loader.LoadImageFile("test.png", 10, 10 ,10 ,10);
	InternetConnection connection;
	connection.isConnected();
	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
				window.close();
		}
		
		window.draw(rect);
		window.clear(Color(255, 255, 255 ,255));
		window.display();
	}

	return 0;
}

	
