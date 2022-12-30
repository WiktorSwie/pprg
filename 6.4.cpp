#include <iostream>
#include <string>

using namespace std;


int main(){
    int i = 0;
    string str;
    int n;
    string kon;
    cout << "Wpisz jakiś ciąg znaków " << endl;
    cin >> str;
    cout << "ile razy ma się dokonać konkatenacja? ";
    cin >> n;

    while (i < n)
    {
       kon = kon + str;
       i++;
    }

    cout << kon;
}
