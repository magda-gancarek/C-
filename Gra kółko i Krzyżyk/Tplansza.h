#ifndef TPLANSZA
#define TPLANSZA

#include <iostream>
#include <string>
#include <vector>
#include "Tmechanika.h"
#include "Tgracz.h"

using namespace std;

extern string plansza1[];
extern string plansza2[];
extern string plansza3[];

class Tplansza
{
public:

    string linia1 = " | | ";
    string linia2 = "-+-+-";

    void zasady();
    void rysujZasady();
    void czysc(string tab1[], string tab2[], string tab3[],int wysw = 0);

    void rysuj()
    {
        cout << plansza1[0] << "|" << plansza1[1] << "|" << plansza1[2] << endl; 
        cout << linia2 << endl;
        cout << plansza2[0] << "|" << plansza2[1] << "|" << plansza2[2] << endl; 
        cout << linia2 << endl;
        cout << plansza3[0] << "|" << plansza3[1] << "|" << plansza3[2] << endl; 
    }   
};
#endif