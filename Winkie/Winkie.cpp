// Winkie.cpp : définit le point d'entrée pour l'application console.
//

#include "stdafx.h"
#include <enet\enet.h>
#include <iostream>

int main()
{
	if (enet_initialize() != 0)
	{
		std::cout << "Enet lib cannot initialized correctly." << std::endl;
	}
	else
	{
		std::cout << "Enet initialized ..." << std::endl;
	}


    return 0;
}