#include <iostream>
#include <string>

using namespace std;

struct uczen
{
    string imie;
    int inf;
    int mat;
    int biol;
    int pol;
};

int main(){
    struct uczen listOfuczniowie[6];
    int i;
    int zap;
    int nr;
    int prz;
    for (i = 0; i < 6; i++)
    {
    cout << "podaj imie ucznia nr: " << i + 1 << endl;
    cin >> listOfuczniowie[i].imie;
    cout << "podaj ocenę z informatyki" << endl; 
    cin >> listOfuczniowie[i].inf;
    cout << "podaj ocenę z matematyki" << endl;
    cin >> listOfuczniowie[i].mat;
    cout << "podaj ocenę z biologii" << endl;
    cin >> listOfuczniowie[i].biol;
    cout << "podaj ocenę z języka polskiego" << endl;
    cin >> listOfuczniowie[i].pol;
    }
    
    cout << "podaj liczbę zapytań";
    cin >> zap;
    i = 0;
    while (i <= zap)
    {
        cout << "podaj numer ucznia [1..6] " << endl;
        cin >> nr;
        cout << "podaj przemiotu ucznia [0..3] "<< endl;
        cin >> prz;

        cout << "Uczeń: " << listOfuczniowie[nr].imie << endl;
        switch (prz)
        {
        case 0:
            cout << "ocena z informatyki: " << listOfuczniowie[nr].inf << endl;
            break;
        case 1:
            cout << "ocena z matematyki: " << listOfuczniowie[nr].mat << endl;
            break;
        case 2:
            cout << "ocena z biologii: " << listOfuczniowie[nr].biol << endl;
            break;
        case 3:
            cout << "ocena z jez. polskiego: " << listOfuczniowie[nr].pol << endl;
            break;
        }
    }
}