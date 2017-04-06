#include <iostream>
#include <fstream>

//#include ""
//dopisywac kolejne naglowkowe, poniewusz to jest klasa glowna


#include "pasazer.h"
#include "pociag.h"
//#include "basic.h"

//aaaaa lets burn it


void wypiszMenu(void)
{
	std::ifstream menu;
	menu.open("menu.txt");
	std::string napis;
	while (!menu.eof()) {
		std::getline(menu, napis);
		std::cout << napis << std::endl;
	}
}//wypiszMenu

void eraseCIN(void)
{
	std::cin.clear(); // unset failbit
	std::cin.ignore(1, '\n'); // skip bad input
}//eraseCIN
void dzialaj(void)
{

	char wybor=-1;
	puts("Welcome to the pociong train simulator and the passengers");
	while (1) 
	{
		Pociag *nowy = new Pociag;
		puts("Prosze wybrac jedno z opcji:");
		wypiszMenu();
		//eraseCIN();
		std::cin>>wybor;
		struct listaPasazerow *iterator;
		switch (wybor)
		{
			case 'p':
			{
				//coscos;
				//std::cout << "Dodajmy pierwszego pasazera\n";
				//nowy->dodajPasazera();
				#ifdef DEBUG_
				std::cout << "Dodano pociag\n";
				#endif
				break;
			}
			case 'c':
			{
				nowy->dodajPasazera();
				break;
			}
			case 'w':
				{
					iterator = nowy->pierwszy;
					std::cout << "IMIE\tNAZWISKO\n";
					while(iterator)
					{
						std::cout << (iterator->n)->dajImie() << '\t' << (iterator->n)->dajNazwisko();
					}
				}
		}
	}

}//dzialaj



