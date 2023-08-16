#include <iostream>
using namespace std;

int main(){
	float A, B;
	float M;
	cin >> A;
	cin >> B;
	M = (A+B)/2;
	if (M >= 7){
		cout << "Aprovado\n";
	}else if(M >= 4){
		cout << "Recuperacao\n";
	}else{
		cout << "Reprovado\n";
	}
}