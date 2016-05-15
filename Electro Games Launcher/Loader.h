#pragma once
#include "SFML\Graphics.hpp"
class Loader
{
public:
	Loader();
	~Loader();
	int LoadImageFile(sf::String filePath);
	sf::Texture sprite(sf::String filePath);
	int LoadImageFile(sf::String filePath, int rectLeft, int rectTop, int rectWidth, int rectHeight);
};

