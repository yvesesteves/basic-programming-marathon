#include <iostream>
using namespace std;

int main(){
	int n;			// numero de valores sorteados
	int v;			// valor sorteado
	int sa = 1;		// sequencia atual
	int sm = 1;		// sequencia maior
	int a;			// numero anterior
	
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> v;
		if(i > 0){
			if(a == v){
				sa++;
			}
			if(a != v || i == n-1){
				if(sa > sm) sm = sa;
				sa = 1;
			}
		}
		a = v;
	}
	cout << sm << "\n";

}