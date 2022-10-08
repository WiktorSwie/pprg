#include <iostream>
using namespace std;
int main()
{
    int number;

    cout << "Podaj liczbe calkowita:";
    cin >> number;
    if (number > 0){
        cout << "liczba jest wieksza od 0";
    }
    else {
        if (number == 0){
            cout << "liczba jest równa 0";
        }
        else{
            cout << "liczba jest mniejsza niż 0";
        }
    }


}