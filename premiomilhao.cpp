#include <iostream>
using namespace std;

int main(){
	int N;	// numero de dias
	int A;	// numero de acesso em um dia
	int x = 1;	// auxiliar
	int D = 0;	// qtd de dias q chegou a um milhao
	int C = 1;	// contador de dias
	
	cin >> N;
	while (x <= N){
		cin >> A;
		D = D + A;
		if(D < 1000000){
			C = C + 1;
		}
		x = x+1;
	}
	cout << C << "\n";
}