#include <iostream>

//dopisywac kolejne naglowkowe, nie wszystkie, poniewusz to jest klasa glowna

#include "pasazer.h"

#include "pociag.h"
void eraseCIN(void);
//
Pociag::Pociag()
{
	dodajPasazera();
}
Pociag::~Pociag()
{
	
}
/*struct listaPasazerow* podajPierwszy(void)
{
	return *pierwszy;
}
*/
void Pociag::dodajPasazera(void) 
{
	std::string temp;
	//int temp;
	Pasazer *nowy=new Pasazer;

	puts("Podaj imie:");
	eraseCIN();
	std::cin >> temp;
	#ifdef DEBUG_
	
	std::cout << temp << '\n';
	#endif
	nowy->zapiszImie(temp);
	puts("Podaj nazwisko");
	std::cin>>temp;
	#ifdef DEBUG_
	std::cout << temp << '\n';
	#endif
	nowy->zapiszNazwisko(temp);
	struct listaPasazerow *nju;
	nju = new (struct listaPasazerow);
	nju->nast = NULL;
	if(aktualny) 
	{
		nju->poprz = aktualny;
		aktualny->nast = nju;
		
		
	}
	else 
	{
		nju->poprz = NULL;
		pierwszy = nju;
		aktualny = pierwszy;
	}
}
