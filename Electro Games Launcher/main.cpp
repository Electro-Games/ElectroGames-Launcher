#include <SFML\Graphics.hpp>
#include "main.h"

using namespace sf;
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
		window.display();
	}

	return 0;
}