#include <iostream>
using namespace std;
int main()
{
    float x;
    float y;
    float suma;
    float roznica;
    float iloczyn;
    float iloraz;
    cout << "proszę wprowadzić x  i y" << endl;
    cin >> x;
    cin >> y;
    suma=x+y;
    roznica=x-y;
    iloczyn=x*y;
    iloraz=x/y;
    cout.precision(2);
    cout << "suma:" << fixed << suma << endl;
    cout << "różnica:" << fixed << roznica << endl;
    cout << "iloczyn:" << fixed << iloczyn << endl;
    cout << "iloraz:" << fixed << iloraz << endl;
}
