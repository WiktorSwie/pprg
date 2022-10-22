#include <iostream>
using namespace std;
int main()
{
    int N = 5;
    int i = 1;
    int p = 0;
    int g = 0;
    while (p<N){
        cout << i << endl;
        g =g+i;
        i = i+1+p;
        i++;
        p++;
    }
    cout << g ;
}