#include <iostream>
using namespace std;
int main()
{
    char a;
    cout << "proszę wprowadzić literę" << endl;
    cin >> a;
    while(a != "t"){
        cout << "proszę wprowadzić literę" << endl;
        cin >> a;
    }    
}