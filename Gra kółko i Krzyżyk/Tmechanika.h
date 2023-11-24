#ifndef TMECHANIKA
#define TMECHANIKA

#include <iostream>
#include <string>
#include <vector>

using namespace std;

extern string plansza1[];
extern string plansza2[];
extern string plansza3[];

class Tmechanika
{
public:
	bool sprPion();
	bool sprSkos();
	bool sprPoziom(string tab1[], string tab2[], string tab3[]);
	bool sprRemis(string tab1[], string tab2[], string tab3[]);
};
#endif