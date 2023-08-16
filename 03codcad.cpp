#include <iostream>
using namespace std;

int main(){
	int x;
	cin >> x;
	if( x > 0 and x%2 == 0){
		cout << "x positivo e par\n";
	}
	else{
		if(x <= 0){
			cout << "x não positivo\n";
		}
		if(x%2 !=0){
			cout << "x é ímpar\n";
		}
		
	}

}

/*
	> maior
	< menor
	<= menor ou igual
	>= maior ou igual
	== igual ( = é atribuição)
	!= diferente
	and  E
	or  OU
	% módulo (resto da divisão
	exemplo: x%2 == 0 (par)
*/