#include <iostream>
using namespace std;

int main(){
	/*
			> 1.80 Alta
			> 1.50 Média
			<= 1.50 Baixa
			
	*/
	double altura;
	cin >> altura;
	if(altura > 1.80){
		cout << "alta\n";
	}else if(altura > 1.50){
			cout << "media\n";
		}else if( altura > 1.00{
			cout << "baixa\n";
		}else{
			cout << "muito baixa\n";
	}
}