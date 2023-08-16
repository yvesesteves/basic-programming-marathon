#include <iostream>
using namespace std;

int main(){
    char letra;
    double X, Y;
    double resultado;
    cin >> letra;
    cin >> X >> Y;
    if(letra == 'D'){
        resultado = X/Y;
    }
    if(letra == 'M'){
        resultado = X*Y;
    }
    
    cout.precision(2);
    cout.setf(ios::fixed);

    cout << resultado << "\n";
    
}