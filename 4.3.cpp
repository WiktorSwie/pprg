#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int i;
    int r;
    int j;
   int tablica [10][10];
   for(r = 0;r < 10; r++){
        if(r == 0){
            for(i = 0; i < 10;){
            tablica [0][i] = 0+i;
            i++;
            }
        }
        if(r==1){
            for(i = 0; i < 10;){
                tablica [r][i] = i*2;
                i++;
            }
        }
        if(r==2){
            for(i = 0;i < 10;){
                tablica [r][i] = i*i;
                i++;
            }
        }
        if(r==3){
            for(i = 0;i <10;){
                tablica [r][i] = r+i;
                i++;
            }
        }
        if(r==4){
           for(i = 0;i <10;){
                tablica [r][i] = r-i;
                i++;
           }
        }
        if(r>4){
            for(i = 0;i <10;){
                tablica [r][i] = 0;
                i++;
           }
        }

        
   }
    for (r = 0; r <10; r++){
        for (i = 0;i <10; i++){
        cout << tablica[r][i];
        }
        cout << endl;
    }
}