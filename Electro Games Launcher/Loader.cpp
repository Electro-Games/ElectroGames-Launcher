#include "Loader.h"
#include "SFML\Graphics.hpp"
#include <iostream>

Loader::Loader()
{
}


Loader::~Loader()
{
}

/*
EN TEST
*/
int Loader::LoadImageBtn(sf::String filePath, int rectLeft, int rectTop, int rectWidth, int rectHeight)
{
	sf::Texture texture;
	 
	if (!texture.loadFromFile(filePath, sf::IntRect(rectLeft, rectTop, rectWidth, rectHeight)))
	{
		// erreur...
	}
}

int Loader::LoadImageFile(sf::String filePath)
{
	sf::Texture texture;
	texture.loadFromFile(filePath);
	if (!texture.loadFromFile(filePath))
	{
		std::cout << filePath.toAnsiString() + " not found!" << std::endl;
	}
}
