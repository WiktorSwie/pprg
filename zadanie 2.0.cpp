#include <iostream>
using namespace std;
int main()
{
    int x;
    int y;
    int z;
    int o;
    cout << "Podaj liczbe kawałków pizzy:";
    cin >> x;
    cout << "Podaj ilość uczestników:";
    cin >> y;
    if (x>y && x % y == 0){
        z = x / y;
        cout << "ilość dla gości:" << z;
    }
    else 
    {
        z = x / y;
        o = x - z;
        cout << "ilość dla gości:" << z;
        cout << "ilość dla organizatora:" << o;
    }
}