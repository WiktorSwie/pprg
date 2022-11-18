#include <iostream>
using namespace std;
int main(){
    int r_n;
    int l;
    int r;
    cin >> r_n;
    for(l = 1;l <= r_n; l++){
 
        for(r = 1; r < r_n-l+1; r++)
            cout<<"  ";
            int wartosc = 1;
            for(r = 1; r <= l; r++){
            cout<<wartosc<<"   ";
             
            wartosc = wartosc * (l - r)/r;
        }
        cout<<endl;
    }
}