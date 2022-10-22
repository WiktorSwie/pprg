#include <iostream>
using namespace std;
int main()
{
    int m;
    cout << "podaj miesiąc liczbą od 1 do 12" << endl;
    cin >> m;
    switch (m)
    {
    case 1:
        cout << "styczen"  << endl;
        cout << "ilosc dni: 31" <<endl;
        cout << "miesiac pochmurny" <<endl;
        break;
    case 2:
        cout << "luty" <<endl;
        cout << "ilosc dni: 28" <<endl;
        cout << "miesiac pochmurny" <<endl;
        break;
    case 3:
        cout << "marzec" <<endl;
        cout << "ilosc dni: 31" <<endl;
        cout << "miesiac pochmurny" <<endl;
        break;
    case 4:
        cout << "kwiecien" <<endl;
        cout << "ilosc dni: 30" <<endl;
        cout << "miesiac sloneczny" <<endl; 
        break;
    case 5:
        cout << "maj" <<endl;
        cout << "ilosc dni: 31" <<endl;
        cout << "miesiac sloneczny" <<endl;
        break;
    case 6:
        cout << "czerwiec" <<endl;
        cout << "ilosc dni: 30" <<endl;
        cout << "miesiac sloneczny" <<endl;
        break;
    case 7:
        cout << "lipiec" <<endl;
        cout << "ilosc dni: 31" <<endl;
        cout << "miesiac sloneczny" <<endl;
        break;
    case 8:
        cout << "sierpien" <<endl;
        cout << "ilosc dni: 31" <<endl;
        cout << "miesiac sloneczny" <<endl;
        break;
    case 9:
        cout << "wrzesien" <<endl;
        cout << "ilosc dni: 30" <<endl;
        cout << "miesiac sloneczny" <<endl;
        break;
    case 10:
        cout << "pazdziernik" <<endl;
        cout << "ilosc dni: 31" <<endl;
        cout << "miesiac pochmurny" <<endl;
        break;
    case 11:
        cout << "listopad" <<endl;
        cout << "ilosc dni: 30" <<endl;
        cout << "miesiac pochmurny" <<endl;
        break;
    case 12:
        cout << "grudzien" <<endl;
        cout << "ilosc dni: 31" <<endl;
        cout << "miesiac pochmurny" <<endl;
        break;
    
    default:
    cout << "podano zły miesiąc" <<endl;
        break;
    }

}