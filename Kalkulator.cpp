#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

int main() //Zabawe czas zaczac :D
{
    //deklaracja zmiennych
    float liczba1, liczba2, suma, roznica, iloczyn, iloraz, potega, pierwiastek; //deklaracja zmiennych
    char wybor;
    int wykaznik;

    //credits
    cout << "Kalkulator by Adam Celej" << endl;

    //menu wyboru
    cout << "Dzialania " << endl;
    cout << "+ Dodawanie" << endl;
    cout << "- Odejmowanie" <<endl;
    cout << "* Mnozenie" <<endl;
    cout << "/ Dzielenie" <<endl;
    cout << "^ Potegowanie" <<endl;
    cout << "P Pierwiastek" <<endl;

    //wybor
    cout << "Wybierz dzialanie: " ;
    cin >> wybor;
    switch(wybor)
    {
        //wybrane działanie to dodawanie
        case '+': //instrukcje w wypadku wybrania dodawania
        cout << "Podaj liczbe pierwsza: " <<endl;
        cin >> liczba1;
        cout << "Podaj liczbe druga: "<<endl;
        cin >> liczba2;
        suma=liczba1+liczba2;
        cout << "Suma " << liczba1 << " i " << liczba2 << " wynosi " << suma <<endl;
        break; //koniec case'a

        //wybrane dzialanie to odejmowanie
        case '-':
        cout << "Podaj liczbe pierwsza: " <<endl;
        cin >> liczba1;
        cout << "Podaj liczbe druga: "<<endl;
        cin >> liczba2;
        roznica=liczba1-liczba2;
        cout << "Roznica " << liczba1 << " i " << liczba2 << " wynosi " << roznica <<endl;
        break;

        //wybrane dzialanie to mnozenie
        case '*':
        cout << "Podaj liczbe pierwsza: " <<endl;
        cin >> liczba1;
        cout << "Podaj liczbe druga: "<<endl;
        cin >> liczba2;
        iloczyn=liczba1*liczba2;
        cout << "Iloczyn " << liczba1 << " i " << liczba2 << " wynosi " << iloczyn <<endl;
        break;

        //wybrane dzialanie to dzielenie
        case '/':
        cout << "Podaj liczbe pierwsza: " <<endl;
        cin >> liczba1;
        cout << "Podaj liczbe druga: "<<endl;
        cin >> liczba2;
        while (liczba2==0)
        {
            cout << "Pamietaj cholero, nie dziel przez zero. Wprowadz ponownie liczbe druga: "<<endl;
            cin >> liczba2;
        }
        iloraz=liczba1/liczba2;
        cout << "Iloraz " << liczba1 << " i " << liczba2 << " wynosi " << iloraz <<endl;
        break;

        //wybrane dzialanie to potegowanie
        case '^':
        cout << "Podaj podstawe: " <<endl;
        cin >> liczba1;
        cout << "Podaj wykladnik: "<<endl;
        cin >> liczba2;
        potega=pow(liczba1, liczba2);
        cout << "Potega " << liczba1 << " o wykladniku " << liczba2 << " wynosi " << potega <<endl;
        break;

        //wybrane dzialanie to pierwiastkowanie
        case 'P':
        cout << "Podaj liczbe podpierwiastkowa: " <<endl;
        cin >> liczba1;
        cout << "Podaj stopien pierwiastka: "<<endl;
        cin >> liczba2;
        while (liczba2<=0) //sprawdzamy czy stopien nie jest ujemny
        {
            cout << "Pierwiastek nie może być ujemnego stopnia. Wprowadz stopien ponownie: " << endl;
            cin >> liczba2;
        }
        int wykaznik=liczba2;
        while (liczba1<0 && wykaznik%2==0) //liczba podpierwiastkowa przy stopniu parzystym nie może być ujemna
        {
            cout << "Jesli stopien jest parzysty to liczba podpierwiastkowa nie moze być ujemna. Podaj ponownie liczby" << endl;
            cout << "Podaj liczbe podpierwiastkowa: " << endl;
            cin >> liczba1;
            cout << "stopien pierwiastka: " << endl;
            cin >> liczba2;
        }
        if (liczba1 < 0 && wykaznik%2==1) //Jesli liczba podpierwiastkowa jest ujemna i stopien nieparzysty
        {
            pierwiastek=-pow(-liczba1, 1/liczba2);
            cout << "Pierwiastek stopnia " << liczba2 << " z liczby " << liczba1 << " wynosi " << pierwiastek << endl;
        }
        else
        {
            cout << "Pierwiastek stopnia " << liczba2 << " z liczby " << liczba1 << " wynosi " << pow(liczba1, 1/liczba2) << endl;
        }


        break;
    }
    //deklaracja zmiennej typu char (znak) o nazwie koniec
    char koniec;
    cout << "Czy chcesz zakonczyc Y/N" << endl; //Pytamy czy u¿ytkownik chce zakoñczyæ pracê z naszym kalkulatorem
    cin >> koniec;
    if (koniec=='n') //nie chce :D
    {
        system("CLS"); //czyscimy ekran
        main(); //i zaczynamy od poczatku
    }
    else //chce :(
    {
        terminate(); //papa (komenda zakonczenia pracy konsoli)
    }
    return 0; //zwróc wartosc
}




