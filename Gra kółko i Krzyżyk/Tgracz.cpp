#include "Tgracz.h"
#include "Tplansza.h"
#include <iostream>
#include <string>
#include <stdexcept> 

struct Tblad
{ };

string Tgracz::wyborGraczaX(int wybor)
{

    switch (wybor)
    {
    case 1:
        system("clear"); return plansza1[0] = "X";
        break;
    case 2:
        system("clear"); return plansza1[1] = "X";
        break;
    case 3:
        system("clear"); return plansza1[2] = "X";
        break;
    case 4:
        system("clear"); return plansza2[0] = "X";
        break;
    case 5:
        system("clear"); return plansza2[1] = "X";
        break;
    case 6:
        system("clear"); return plansza2[2] = "X";
        break;
    case 7:
        system("clear"); return plansza3[0] = "X";
        break;
    case 8:
        system("clear"); return plansza3[1] = "X";
        break;
    case 9:
        system("clear"); return plansza3[2] = "X";
        break;
    case 0:
        system("clear"); menu();
        break;
    }
    return ".";
}
//****************************

string Tgracz::wyborGraczaO(int wybor) 
{
    switch (wybor)
    {
    case 1:
        system("clear"); return plansza1[0] = "O";
        break;
    case 2:
        system("clear"); return plansza1[1] = "O";
        break;
    case 3:
        system("clear"); return plansza1[2] = "O";
        break;
    case 4:
        system("clear"); return plansza2[0] = "O";
        break;
    case 5:
        system("clear"); return plansza2[1] = "O";
        break;
    case 6:
        system("clear"); return plansza2[2] = "O";
        break;
    case 7:
        system("clear"); return plansza3[0] = "O";
        break;
    case 8:
        system("clear"); return plansza3[1] = "O";
        break;
    case 9:
        system("clear"); return plansza3[2] = "O";
        break;
    case 0:
        system("clear");
        menu();
        break;
    }
    return ".";
}

//******************************
void Tgracz::ktoryGracz(string wyborS, int p)
{
    int* wsk = &licznik;
    static int Flicznik = *wsk;
    
    int* wskB = &licznikBledow;
    static int FlicznikBlad = *wskB;

    int* wskG = &licznikGlowny;
    static int FlicznikGlowny = *wskG;        

    if ((FlicznikGlowny >= 7) && ((wyborS == "z") || (wyborS == "Z")))
    {
        menu(1);
    }
    if (p == 1 && FlicznikGlowny > 0)
    {
        FlicznikGlowny = 0;  // resetowanie wartości przez "nowa gre"
        Flicznik = 0;       // resetowanie wartości "nowa gre"
        FlicznikBlad = 0;  // resetowanie wartości "nowa gre"
    }
    else
    {
        if (FlicznikGlowny > 0) Flicznik = FlicznikGlowny;  // (step2) zsynchronizowanie Flicznika w razie powrotu z obslugi wyjątku, do wartości wcześniejszej z step1

        if (!(wyborS == "0" || wyborS == "1" || wyborS == "2" || wyborS == "3" || wyborS == "4" || wyborS == "5" || wyborS == "6" || wyborS == "7" || wyborS == "8" || wyborS == "9"))
        {
            if (Flicznik > 0) FlicznikGlowny = Flicznik; // (step1) wstawienie dotychczasowej ilosci ruchów do  licznika głównego  
            Flicznik = 0;   // resetowanie wartości zafałszowanej przez bład
            FlicznikBlad = 0;  // resetowanie wartości zafałszowanej przez bład
            Tblad kapsula;  //obsluga blednej wartosci - wyjatek
            throw kapsula;  //obsluga blednej wartosci - wyjatek
        }

        else
        {
            wybor = stoi(wyborS);   // konwersja ze string na int

            if (Flicznik % 2)
            {
                if (wybor == 0)
                {
                    system("clear");                                      
                    FlicznikBlad++;
                    if (FlicznikBlad == 1) FlicznikGlowny = Flicznik;
                    cout << "Teraz ruch gracza \"X\"" << endl;
                }
                else
                {
                    if (!(sprNadpisanie(wybor))) //Sprawdza czy nie nadpisujemy
                    {
                        system("clear");
                        cout << "Nie mozesz wpisac ponownie w to miejsce!" << endl;
                        cout << "Teraz ruch gracza \"X\"" << endl;
                        FlicznikBlad++;
                        if (FlicznikBlad == 1) FlicznikGlowny = Flicznik;
                    }
                    else
                    {
                        Tgracz::wyborGraczaX(wybor);
                        if (FlicznikBlad > 0)
                        {
                            FlicznikBlad = 0;
                            Flicznik = FlicznikGlowny;
                        }
                        Flicznik++;
                        FlicznikGlowny++;
                         cout << "Teraz ruch gracza \"O\"" << endl;
                    }
                }
            }
            else
            {
                if (wybor == 0 )
                {
                    system("clear");                   
                    FlicznikBlad++;
                    if (FlicznikBlad == 1) FlicznikGlowny = Flicznik;
                    cout << "Teraz ruch gracza \"O\"" << endl;
                }
                else
                {
                    if (!(sprNadpisanie(wybor))) //Sprawdza czy nie nadpisujemy
                    {
                        system("clear");
                        cout << "Nie mozesz wpisac ponownie w to miejsce!" << endl;
                        cout << "Teraz ruch gracza \"X\"" << endl;
                        FlicznikBlad++;
                        if (FlicznikBlad == 1) FlicznikGlowny = Flicznik;
                    }
                    else
                    {
                        Tgracz::wyborGraczaO(wybor);
                        if (FlicznikBlad > 0)
                        {
                            FlicznikBlad = 0;
                            Flicznik = FlicznikGlowny;
                        }
                        Flicznik++;
                        FlicznikGlowny++;
                        cout << "Teraz ruch gracza \"X\"" << endl;
                    }
                }
            }
           if (FlicznikGlowny >= 7) //informacja o potencjalnym remisie
            {
                cout << "Potencjalny Remis w " << FlicznikGlowny << " ruchu. \n";
                cout << "Czy chcesz zakonczyc gre ? - jesli tak, wpisz \"Z\"\n";
            }
        }
    }
}
//*******************************
void Tgracz::czyWygrana()
{
    Tmechanika sprawdzenie;

    if (!sprawdzenie.sprPoziom(plansza1, plansza2, plansza3))
    {
        cout << "\n \a";
        exit(0);
    }
    if (!sprawdzenie.sprPion())
    {
        cout << "\n \a";
        exit(0);
    }
    if (!sprawdzenie.sprSkos())
    {
        cout << "\n \a";
        exit(0);
    }
    if (!sprawdzenie.sprRemis(plansza1, plansza2, plansza3))
    {
        cout << "\n \a";
        exit(0);
    }
}
//******************************************
bool Tgracz::sprNadpisanie(int wybor)
{
    switch(wybor)
    {
    case 1:
        if (plansza1[0] == "X" || plansza1[0] == "O")
        { return  false; }
        return  true;
    case 2:
        if (plansza1[1] == "X" || plansza1[1] == "O")
        { return  false;   }
        return  true;
    case 3:
        if (plansza1[2] == "X" || plansza1[2] == "O")
        {return  false;}
        return  true;
    case 4:
        if (plansza2[0] == "X" || plansza2[0] == "O")
        {return  false;}
        return  true;
    case 5:
        if (plansza2[1] == "X" || plansza2[1] == "O")
        { return  false;}
        return  true;
    case 6:
        if (plansza2[2] == "X" || plansza2[2] == "O")
        { return  false; }
        return  true;
    case 7:
        if (plansza3[0] == "X" || plansza3[0] == "O")
        {return  false; }
        return  true;
    case 8:
        if (plansza3[1] == "X" || plansza3[1] == "O")
        { return  false; }
        return  true;
    case 9:
        if (plansza3[2] == "X" || plansza3[2] == "O")
        { return  false;}
        return  true;
    }
    return true;
}
//**********************************************************
void Tgracz::wyborGracza()
{
    static int start{};
    if(start < 1 ) cout << "Zaczyna gracz \"O\""<< endl;  // Informacja przed pierwszym ruchem graczy
    cout << "Wybor gracza od [1-9] || Menu = M ||" << endl;
    cout << "Twoj wybor: ";
    cin >> wyborG;
    if (wyborG == "m" || wyborG == "M")
    {
        menu(2);
    }
    else
    { start++;
     ktoryGracz(wyborG);   //główna funkcja w tej grze 
    }
}

int Tgracz::menu(int z)
{
    Tplansza plansza;
    Tplansza sprzatacz;
    if (z == 1) // parametr 1 przysyła gdy jest potencjalny remis 
    {
        cout << "Koniec ! \n \a";
        exit(0);
    }
    if (z == 2)  // parametr 2 przysyła w trakcie gdy, chce miec nowa gre 
    {
        while (1)
        {
            cout << "***************\n"
                    "Nowa gra    = 0\n"
                    "Zasady gry  = 1\n"
                    "Zakoncz     = 2\n"
                    "***************\n";
            int wybor{};
            cout << "Twoj wybor: ";
            cin >> wybor;
            string s = to_string(wybor);
            cout << "\n \n";
            switch (wybor)
            {
            case 0:
                system("clear");
                sprzatacz.czysc(plansza1, plansza2, plansza3); 
                ktoryGracz(s, 1); // resetowanie liczników przez zmianę parametru domniemanego na 1        
								return 1;
                break;
            case 1:
                plansza.zasady();
                break;
            case 2:
                cout << "Koniec ! \n\a";
                exit(0);
                break;
            default:
                cout << "Bledny wybor !\n\a";                
                break;
            }
        }
        return 0;
    }
    if (z == 0)
    {
        while (1)
        {
            cout << "***************\n"
                    "Nowa gra    = 0\n"
                    "Zasady gry  = 1\n"
                    "Zakoncz     = 2\n"
                    "***************\n";
            int wybor{};
            cout << "Twoj wybor: ";
            cin >> wybor;
            string s = to_string(wybor);
            cout << "\n \n";
            switch (wybor)
            {
            case 0:
                system("clear");
                sprzatacz.czysc(plansza1, plansza2, plansza3);                
                return 1;
                break;
            case 1:
                plansza.zasady();
                break;
            case 2:
                cout << "Koniec ! \n\a";
                exit(0);
                break;
            default:
                cout << "Bledny wybor !\n\a";
                break;
            }
        }
    }
    return 0;
}