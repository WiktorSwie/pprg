#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double A;
    double B;
    double C;
    double delta;
    double x;
    double x1;
    double x2;
    cout << "postać równania kwadratowego równa się Ax+Bx^2+C" << endl;
    cout << "proszę wprowadzić A,B,C" << endl;
    cin >> A;
    cin >> B;
    cin >> C;
    if (A==0){
        cout << "to nie jest równanie kwadratowe" << endl;
    }
    else {
        cout << "Postać twojego równania kwadratowego to:" << A << "x+" << B << "x^2+" << C <<endl;
        delta=(B*B)-(4*A*C);
        cout << "delta wynosi:" << delta;
        if (delta>0){
            x1=(-B-sqrt(delta))/(2*A);
            x2=(-B+sqrt(delta))/(2*A);
            cout <<"Pierwiastki rówaninia: " <<"x1: " << x1 << " x2: " << x2 <<endl;
        }
        else{
            if (delta==0){
                x=-B/2*A;
                cout <<"pierwiastek rówanina: x0 = " << x << endl;
            }
            else
            cout<< "równanie nie ma pierwiastków";

        }
        
    }
    
}
