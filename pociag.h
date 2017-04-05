#ifndef POCIAG_H
#define POCIAG_H



struct listaPasazerow {
	int l_p;
	Pasazer *n;
	struct listaPasazerow *poprz, *nast;
};



class Pociag {
	private:
		int iloscPasazerow=0;
		struct listaPasazerow *aktualny;
	public:
		Pociag();
		~Pociag();
		struct listaPasazerow *pierwszy;
		//struct listaPasazerow podajPierwszy(void);
		void dodajPasazera(void);
	
};

#endif
