#include <iostream>
#include <string>
#include <vector>
#include "pasazer.h"
#define MAX_PAS 100
void eraseCIN(void);
Pasazer::Pasazer()
{
}

Pasazer::~Pasazer()
{
}
void Pasazer::zapiszImie(std::string temp)
{
	imie = temp;
}
void Pasazer::zapiszNazwisko(std::string temp)
{
	nazwisko = temp;
}
std::string Pasazer::dajImie(void)
{
	return imie;
}
std::string Pasazer::dajNazwisko(void)
{
	return nazwisko;
}
