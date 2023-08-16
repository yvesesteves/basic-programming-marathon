#include <iostream>
using namespace std;

int main(){
	int N;	// numero de bandejas
	int L;	// latas
	int C;	// copos
	int x = 1;	// auxiliar
	int D = 0;	// copos derrubados
	
	cin >> N; 
	while(x <= N){
		cin >> L;
		cin >> C;
		if(C < L){
			D = D + C;
		}
		x = x+1;
	}
		
	cout << D << "\n";
}