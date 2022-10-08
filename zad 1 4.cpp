#include <iostream>
using namespace std;
int main()
{
    int number;

    cout << "Podaj liczbe calkowita:";
    cin >> number;
    if (number == 0){
        cout << "liczba to 0";
    }
    else {
        if (number % 2 ){
            cout << "liczba jest nieparzysta";
        }
        else{
            cout << "liczba jest parzysta";
        }
    }


}
