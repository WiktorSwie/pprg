#include <iostream>
#include <vector>

using namespace std;
int main(){
    int i = 0;
    int t;
    int liczbamax = 0;
    int pozycja = 0;
    cout << "podaj wielkość wektora:" << endl;
    cin >> t;
    vector <int> vec(t);
    while (i < t)
    {
        cout << "podaj element wektora:" << endl;
        cin >> vec[i];
        i++;
    }
    for(i = 0; i < t; i++){
            if(liczbamax<vec[i]){
                liczbamax = vec[i];
                pozycja = i+1;
            }
    }
    cout <<"największy występujący element to " << liczbamax <<endl;
    cout <<"występuje na pozycji " << pozycja;
}