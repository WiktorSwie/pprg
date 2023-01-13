#include <iostream>

using namespace std;


int main(){
    
    const char szerokosc = 20;
    const char wysokosc = 10;
    int pozx = 5;
    int pozy = 0;
    int x;
    int y;
    const char gracz = 'W';
    char ruch;
    int wygryw = 0;

cout << "poruszaj się l - krok w lewo" << endl;
cout << "poruszaj się p - krok w prawo" << endl;
cout << "poruszaj się d - krok w dół" << endl;
cout << "poruszaj się g - krok w górę" << endl;

unsigned char labirynt [wysokosc][szerokosc] = 
{
    {'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ',' ','#','#',' ',' ',' ',' ','#',' ',' ',' ','#'},
    {'#','#',' ','#','#','#',' ','#',' ','#','#',' ','#',' ','#',' ',' ','#','#','#'},
    {'#',' ',' ','#',' ',' ',' ','#','#','#','#',' ','#',' ','#',' ','#','#',' ','@'},
    {'#','#',' ','#',' ','#',' ','#',' ',' ',' ',' ','#',' ','#',' ','#',' ',' ','#'},
    {'$',' ',' ','#',' ','#',' ','#',' ','#',' ','#','#',' ','#',' ','#',' ','#','#'},
    {'#',' ','#','#',' ','#',' ',' ',' ','#',' ','#',' ',' ','#',' ',' ',' ',' ','#'},
    {'#',' ',' ','#',' ','#',' ','#','#','#',' ','#',' ','#','#','#','#',' ','#','#'},
    {'#',' ','#','#',' ','#',' ',' ',' ','#',' ','#',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#'},
};
    while(ruch != 'q'){
    
    labirynt [pozx][pozy] = gracz;
    for (y = 0; y < wysokosc; y++)
    {
        cout << endl;
        for (x = 0; x < szerokosc; x++)
        {
            cout << labirynt[y][x];
        }
    }
     cout << endl << "porusz się" <<endl;
        cin >> ruch;
        switch (ruch)
        {
        case 'l':
        if (labirynt[pozx][pozy-1] != '#'){
            if(labirynt[pozx][pozy-1] == '@'){
                
                wygryw = 1;
            }
            pozy--;
            labirynt[pozx][pozy+1] = {32};
            break;
        }
        
        case 'p':
        if (labirynt[pozx][pozy+1] != '#'){
            if(labirynt[pozx][pozy+1] == '@'){
               
                wygryw = 1;
            }
            pozy++;
            labirynt[pozx][pozy-1] = {32};
            break;
        }
        
        case 'g':
        if (labirynt[pozx-1][pozy] != '#'){
            if(labirynt[pozx-1][pozy] == '@'){
                
                wygryw = 1;
            }
            pozx--;
            labirynt[pozx+1][pozy] = {32};
            break;
        }
        
        case 'd':
        if (labirynt[pozx+1][pozy] != '#'){
            if(labirynt[pozx+1][pozy] == '@'){
            
                wygryw = 1;
            }
            pozx++;
            labirynt[pozx-1][pozy] = {32};
            break;
        }
        
        }
        if(wygryw == 1){
            cout << "wygrales" << endl;
        break;
        }
    }
}  
