#include <iostream>

using namespace std;
int main(){
    int i = 0;
    int n = 0;
    int ilosc = 0; 
    while (n <= 0)
    {
    cout << "podaj liczbę naturalną: " << endl;
    cin >> n;
    }
    
    while (i <= n)
    {
        if (i % 5  == 0 && i % 3 != 0)
        {
            ilosc++;
        }
        i++;
    }
    cout <<"liczb podzielnych przez 5 ale nie podzielnych przez 3 nie większych od " << n << " jest " << ilosc <<endl;
}