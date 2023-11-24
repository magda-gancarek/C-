#ifndef TGRACZ
#define TGRACZ

#include <iostream>
#include <string>
#include <vector>

using namespace std;

extern string plansza1[];
extern string plansza2[];
extern string plansza3[];

class Tgracz
{
	int wybor;
	int licznik{};
	int licznikBledow{};
	int licznikGlowny{};

public:
	string wyborG;
	void ktoryGracz(string wybor, int p = 0);
	string wyborGraczaX(int wybor);
	string wyborGraczaO(int wybor);
	void czyWygrana();
	bool sprNadpisanie(int wybor);	
	void wyborGracza();
	int menu(int z = 0);
};
#endif