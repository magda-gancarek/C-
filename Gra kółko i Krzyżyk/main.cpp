#include <iostream>
#include <string>
#include <stdexcept>

#include "Tgracz.h"
#include "Tplansza.h"
#include "Tmechanika.h"

using namespace std;

void start();
struct Tblad
{};

//pansza gry
string plansza1[3] = { " ", " ", " " };
string plansza2[3] = { " ", " ", " " };
string plansza3[3] = { " ", " ", " " };

//*************************************

int main()
{
    Tplansza plansza;
    Tgracz gracz;
    Tgracz sprawdzenie;
    void start();

    while (1) 
    {    
        plansza.rysuj();     //rysowanie aktualniego stanu planszy
  
        sprawdzenie.czyWygrana();  // Sprawdza czy po ostatnim ruchu gracza zaistniam wygrany układ
        try
        {
            gracz.wyborGracza();  // Wybor gracza wraz z obsługą wyjątków
        }
        catch (Tblad kapsula) // obsługa wyjątku  
        {
            cout << "\n";
            cout << "############################################" << endl;
            cout << "##  Blad wartosci zmiennej ! Tylko liczby w zakresie (1 - 9)" << endl;
            cout << "############################################" << endl;
            cout << "\n\a";
        }
    }
}

void start()
{
    Tplansza plansza;
    Tgracz gracz;

    plansza.zasady();
    gracz.menu(2);
}