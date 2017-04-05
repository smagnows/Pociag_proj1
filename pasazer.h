#ifndef PASAZER_H
#define PASAZER_H

class Pasazer
{
	private:
		std::string imie, nazwisko;
		int nr_buta=0;
		std::string odjazd;
		std::string cel;
		int klasa; //klasa wagonow
		//std::string 
	public:
		Pasazer();
		~Pasazer();
		void zapiszImie(std::string);
		void zapiszNazwisko(std::string);
		std::string dajImie(void);
		std::string dajNazwisko(void);
	protected:
};

#endif
