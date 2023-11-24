#include "Tplansza.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

//***********************
void Tplansza::rysujZasady()
{
    cout << linia1 + "\n" + linia2 + "\n" + linia1 + "\n" + linia2 + "\n" + linia1 << endl;
}
//***********************
void Tplansza::czysc(string tab1[], string tab2[], string tab3[], int wysw)
{
    for (int y = 0; y < 3; y++)
    {
        tab1[y] = '.';
        if(wysw) cout << " plansza4 zawiera w : " << y << " = [" << tab1[y] << "] " << endl;
    }
    for (int y = 0; y < 3; y++)
    {
        tab2[y] = '.';
        if (wysw) cout << " plansza5 zawiera w : " << y << " = [" << tab2[y] << "] " << endl;
    }
    for (int y = 0; y < 3; y++)
    {
        tab3[y] = '.';
        if (wysw) cout << " plansza6 zawiera w : " << y << " = [" << tab3[y] << "] " << endl;
    }
}
//****************************
void Tplansza::zasady()
{
    system("clear");
    cout << "Gracz podaje numer pola w ktore zostaje \n"
            "umieszczony przypisany do niego znak \"X\" lub \"O\"\n\n"; 
    cout << "1|2|3" << endl;
    cout << linia2 << endl;
    cout << "4|5|6" << endl;
    cout << linia2 << endl;
    cout << "7|8|9" << endl;
    cout << "\n \n";
}