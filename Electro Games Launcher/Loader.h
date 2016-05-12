#pragma once
#include "SFML\Graphics.hpp"
class Loader
{
public:
	Loader();
	~Loader();
	int LoadImageFile(sf::String filePath);
	int LoadImageBtn(sf::String filePath, int rectLeft, int rectTop, int rectWidth, int rectHeight);
};

