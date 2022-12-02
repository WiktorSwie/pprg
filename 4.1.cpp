#include <iostream>
using namespace std;
int main(){
    int t;
    int i = 0;
    cout << "podaj wielkość tablicy:" << endl;
    cin >> t;
    int tablica[t];
    while (i < t)
    {
       cin >> tablica[i];
       i++;
    }
    for(i = 0;i < t; i++){
        cout <<tablica[i] << " ";
    }
    int max = tablica[0];
    for(i = 0; i < t; i++){
        if(max<tablica[i]){
            max = tablica[i];
        }
    }
    cout <<"największy element tablicy: " << endl << max;
}