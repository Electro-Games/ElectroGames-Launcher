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
			MessageBox(0, "Oups ! Il semble que vous ne soyez pas connecter à internet", "Erreur réseau", 0);
		}
		cout << Address.toString() << endl;
	}
}
