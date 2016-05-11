#include "button.h"
#include <SFML\Graphics.hpp>

using namespace sf;
/**
  buttonID: id du bouton (ex: 1) pour définir des actions par boutons
  texture: définir la texture depuis une image dans le disque
  Xpos: position en X
  Ypos: position en Y
  width: largeur du bouton
  height: hauteur du bouton
*/
button::button(int buttonID, Texture texture, int Xpos, int Ypos, int width, int height)
{
    texture.loadFromFile("", IntRect(Xpos, Ypos, width, height));
	sprite.setTexture(texture, true);

}


button::~button()
{
}
