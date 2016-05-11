#include "button.h"
#include <SFML\Graphics.hpp>

using namespace sf;

button::button(int buttonID, Texture texture, Sprite sprite, int Xpos, int Ypos, int width, int height)
{
    texture.loadFromFile("", IntRect(Xpos, Ypos, width, height));
	sf::Sprite sprite;
	sprite.setTexture(texture, true);

}


button::~button()
{
}
