#include "InternetConnection.h"
#include <SFML/Network.hpp>
#include <windows.h>
#include <iostream>
#include <sstream>

using namespace sf;
using namespace std;
namespace ElectroGamesConnectivity {

	InternetConnection::InternetConnection()
	{
	}


	InternetConnection::~InternetConnection()
	{
	}

	void InternetConnection::isConnected()
	{
		sf::IpAddress Address = sf::IpAddress::getPublicAddress();
		if (Address == Address.None)
		{
			MessageBeep(0xFFFFFFFF);
			MessageBox(0, "Oups ! Il semble que vous ne soyez pas connecter � internet. \n Le launcher est utilisable " 
				"hors-ligne mais vous ne pourrez pas t�l�charger ni jouer en multijoueur.", "Erreur r�seau", 0);
		}
		cout << Address.toString() << endl;
	}
}
