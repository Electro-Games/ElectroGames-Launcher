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
int Loader::LoadImageFile(sf::String filePath, int rectLeft, int rectTop, int rectWidth, int rectHeight)
{
	sf::Texture texture;
	texture.loadFromFile(filePath, sf::IntRect(rectLeft, rectTop, rectWidth, rectHeight));
	if (!texture.loadFromFile(filePath, sf::IntRect(rectLeft, rectTop, rectWidth, rectHeight)))
	{
		std::cout << "[ERROR]" + filePath.toAnsiString() + " not found!" << std::endl;
	}
}

int Loader::LoadImageFile(sf::String filePath)
{
	sf::Texture texture;
	texture.loadFromFile(filePath);
	if (!texture.loadFromFile(filePath))
	{
		std::cout << "[ERROR]" + filePath.toAnsiString() + " not found!" << std::endl;
	}
}
