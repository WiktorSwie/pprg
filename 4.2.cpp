#include <iostream>
using namespace std;
int main(){
    int t;
    int i = 0;
    int j = 0;
    int ilosc = 0;
    int najwiecej = 0;
    int liczbamax;
    cout << "podaj wielkość tablicy:" << endl;
    cin >> t;
    int tablica[t];
    while (i < t)
    {
       cin >> tablica[i];
       i++;
    }
    for(i = 0; i < t; i++){
        ilosc = 0;
        for(j = 0;j < t; j++){
            if(tablica[i]==tablica[j]){
                ilosc++;
            }
            if (ilosc > najwiecej)
            {
                najwiecej = ilosc;
                liczbamax = tablica[i];
            }
            
        }
    }
    cout <<"najczęściej powtarzający się element występuje" << najwiecej <<endl;
    cout <<"najczęściej występujący element to " << liczbamax;
}