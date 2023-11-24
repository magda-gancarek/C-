#include "Tmechanika.h"
#include "Tplansza.h"
#include <iostream>
#include <string>
#include <vector>


using namespace std;

bool Tmechanika::sprPion()
{
    int licznikPlansza1 = 0;
    int licznikPlansza2 = 0;
    int licznikPlansza3 = 0;
    int licznikPlansza11 = 0;
    int licznikPlansza22 = 0;
    int licznikPlansza33 = 0;

    vector<string> planszaPion1{ plansza1[0],plansza2[0],plansza3[0] };
    vector<string> planszaPion2{ plansza1[1],plansza2[1],plansza3[1] };
    vector<string> planszaPion3{ plansza1[2],plansza2[2],plansza3[2] };

    //*************Czy wygrał "X" w pionie****************
    for (string y : planszaPion1)
    {
        if (y == "X")
        {
            licznikPlansza1++;
            if (licznikPlansza1 == 3)
            {cout << "\"X\" WYGRAL !!! \n";
             return false;
            }
        }
    }
		
    for (string y : planszaPion2)
    {
        if (y == "X")
        {
            licznikPlansza2++;
            if (licznikPlansza2 == 3)
            {
                cout << "\"X\" WYGRAL !!! \n";
                return false;
            }
        }
    }

    for (string y : planszaPion3)
    {
        if (y == "X")
        {
            licznikPlansza3++;
            if (licznikPlansza3 == 3)
            {
                cout << "\"X\" WYGRAL !!! \n";
                return false;
            }
        }
    }
    //**************Czy wygrał "O" w pionie***********
    for (string y : planszaPion1)
    {
        if (y == "O")
        {
            licznikPlansza11++;
            if (licznikPlansza11 == 3)
            {
                cout << "\"O\" WYGRAL !!! \n";
                return false;
            }
        }
    }

    for (string y : planszaPion2)
    {
        if (y == "O")
        {
            licznikPlansza22++;
            if (licznikPlansza22 == 3)
            {cout << "\"O\" WYGRAL !!! \n";
             return false;
            }
        }
    }
		
    for (string y : planszaPion3)
    {
        if (y == "O")
        {
            licznikPlansza33++;
            if (licznikPlansza33 == 3)
            {cout << "\"O\" WYGRAL !!! \n";
             return false;
            }
        }
    }
    return true;
}
//***********************
bool Tmechanika::sprPoziom(string tab1[], string tab2[], string tab3[])
{
    int licznikPlansza1 = 0;
    int licznikPlansza2 = 0;
    int licznikPlansza3 = 0;
    int licznikPlansza11 = 0;
    int licznikPlansza22 = 0;
    int licznikPlansza33 = 0;

//***************Czy wygrał "X" w poziomie****************
    for (int y = 0; y < 3; y++)
    {
        if (tab1[y] == "X")
        {
            licznikPlansza1++;
            if (licznikPlansza1 == 3)
            {cout << "\"X\" WYGRAL !!! \n"; 
            return false;
            }
        }   
    }

    for (int y = 0; y < 3; y++)
    {
        if (tab2[y] == "X")
        {
            licznikPlansza2++;
            if (licznikPlansza2 == 3)
            {cout << "\"X\" WYGRAL !!! \n";
             return false;
            }
        }
    }

    for (int y = 0; y < 3; y++)
    {
        if (tab3[y] == "X")
        {
            licznikPlansza3++;
            if (licznikPlansza3 == 3)
            {cout << "\"X\" WYGRAL !!!\n";
             return false;
            }
        }
    }

    //************Czy wygrał "O" w poziomie***************
    for (int y = 0; y < 3; y++)
    {
        if (tab1[y] == "O")
        {
            licznikPlansza11++;
            if (licznikPlansza11 == 3)
            {cout << "\"O\" WYGRAL !!! \n";
             return false;
            }
        }
    }

    for (int y = 0; y < 3; y++)
    {
        if (tab2[y] == "O")
        {
            licznikPlansza22++;
            if (licznikPlansza22 == 3)
            {cout << "\"O\" WYGRAL !!! \n";
            return false;
            }
        }
    }

    for (int y = 0; y < 3; y++)
    {
        if (tab3[y] == "O")
        {
            licznikPlansza33++;
            if (licznikPlansza33 == 3)
            {cout << "\"O\" WYGRAL !!!\n";
             return false;
            }
        }
    }
    return true;
}

//***********************
bool Tmechanika::sprSkos()
{
    int licznikPlansza1 = 0;
    int licznikPlansza2 = 0;
    int licznikPlansza11 = 0;
    int licznikPlansza22 = 0;

    vector<string> planszaSkos1{ plansza1[0],plansza2[1],plansza3[2] };
    vector<string> planszaSkos2{ plansza3[0],plansza2[1],plansza1[2] };

    //************Czy wygrał "X" na skos**************
    for (string y : planszaSkos1)
    {
        if (y == "X")
        {
            licznikPlansza1++;
            if (licznikPlansza1 == 3)
            {
                cout << "\"X\" WYGRAL !!! \n";
                return false;
            }
        }
    }
    for (string y : planszaSkos2)
    {
        if (y == "X")
        {
            licznikPlansza2++;
            if (licznikPlansza2 == 3)
            {
                cout << "\"X\" WYGRAL !!!\n";
                return false;
            }
        }
    }
    //*************Czy wygrał "O" na skos****************
    for (string y : planszaSkos1)
    {
        if (y == "O")
        {
            licznikPlansza11++;
            if (licznikPlansza11 == 3)
            {
                cout << "\"O\" WYGRAL !!!\n";
                return false;
            }
        }
    }
    for (string y : planszaSkos2)
    {
        if (y == "O")
        {
            licznikPlansza22++;
            if (licznikPlansza22 == 3)
            {
                cout << "\"O\" WYGRAL !!! \n";
                return false;
            }
        }
    }
   return true;
}
//***********************
bool Tmechanika::sprRemis(string tab1[], string tab2[], string tab3[])
{
    int licznikPlansz = 0;

    for (int y = 0; y < 3; y++)
    {
        if (tab1[y] == "X" || tab1[y] == "O")
        {
            licznikPlansz++;            
        }
    }
    for (int y = 0; y < 3; y++)
    {
        if (tab2[y] == "X" || tab2[y] == "O")
        {
            licznikPlansz++;
        }
    }
    for (int y = 0; y < 3; y++)
    {
        if (tab3[y] == "X" || tab3[y] == "O")
        {
            licznikPlansz++;         
        }
    }
    if (licznikPlansz == 9)
    {
        cout << "Remis !!! w "<< licznikPlansz<<" ruchach \n";
        return false;
    }
    else
    {
        return true;
    }
}