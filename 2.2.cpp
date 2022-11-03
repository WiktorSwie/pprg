#include <iostream>
using namespace std;
int main()
{
    int a;
    int b;
    int i = 0;
    int j = 0;
    cout << "wiesz o długości a:";
    cin >> a;
    cout << "kolumna długości b:";
    cin >> b;
    cout <<"pobrano liczby: a=" << a << " b=" << b << endl;
    cout <<"wiersz o długości a:" << endl;
    while (i < a)
    {
        cout << "*";
        i++;
    }
    i = 0;
    cout << endl;
    cout <<"kolumna o długości b:" << endl;
    while (i < b)
    {
        cout << "*" << endl;
        i++;
    }
    i=0;
    cout <<"Prostokąt gwiazdek o wymiarach a na b:" << endl;
    while (i < b)
    {
        while (j < a)
        {
        cout << "*";
        j++;
        }
        cout <<endl;
        i++;
        j=0;
    }
    cout <<"Obwód prostokątu o wymiarach a na b:" << endl;
    for(j = 1; j <= b; j++)
    {
        for(i = 1; i <= a; i++)
        {
            if(i==1 || i == a || j == 1 || j==b)
            {
                cout <<"*";
            }
            else
            {
                cout << " ";    
            }
        }
        cout << endl;
    }
     cout <<"Trójkąt prostokątny równoramienny z kątem prostym w lewym dolnym rogu:" << endl;
    for(i=1; i<=a; i++)
    {
        j=1;
        while (j<=i)
        {
            cout <<"*";
            j++;
        }
        cout << endl;
    }
    cout <<"Trójkąt prostokątny równoramienny z kątem prostym w prawym górnym rogu:" << endl;
    for(i=a; i>=1; i--)
    {
        j=a;
        while(j>=0)
        {
            if (j<i)
            {
                cout << "*";
                j--;
            }
            else
            {
                cout << " ";
                j--;
            }
        }
        cout <<endl;
    }
}