#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct student
{
    string imie;
    string nazwisko;
    int ni;
};

int main(){
    int i;
    int ilosc;
    int j = 0;
    int temporary = 0;
    cout << "ile uczniów jest w szkole? " << endl;
    cin >> ilosc;
    vector <int> vec(ilosc);
    struct student listOfuczniowie[ilosc];
    for (i = 0; i < ilosc; i++)
    {
    cout << "podaj imie ucznia: " << endl;
    cin >> listOfuczniowie[i].imie;
    cout << "podaj nazwisko ucznia: " << endl; 
    cin >> listOfuczniowie[i].nazwisko;
    cout << "podaj numer indeksu: " << endl;
    cin >> listOfuczniowie[i].ni;
 
    }
    for (i = 0; i < ilosc; i++)
    {

    cout << listOfuczniowie[i].imie << " ";
    cout << listOfuczniowie[i].nazwisko << " ";
    cout << listOfuczniowie[i].ni << " ";
    cout << endl;
    
    }
    for (i = 0; i < ilosc; i++)
    {
    vec[i] = listOfuczniowie[i].ni;
    }
    for (i = 0; i < ilosc; i++)
    {
        for (j = i + 1; j < ilosc; j++)
        {
            if (vec[j] < vec[i])
            {
                temporary = vec[i];
                vec [i] = vec [j];
                vec [j] = temporary;
            }
        }
    }
    cout << "uczniowie posortowani po indeksie " << endl;

    for(i = 0; i < ilosc; i++)
    {
        for (j = 0; j < ilosc; j++)
        {
            if (vec[i] == listOfuczniowie[j].ni)
            {
                cout << listOfuczniowie[j].ni << " ";
                cout << listOfuczniowie[j].imie << " ";
                cout << listOfuczniowie[j].nazwisko << " ";
                cout << endl;
            }
            
        }
        
    }
    
}
