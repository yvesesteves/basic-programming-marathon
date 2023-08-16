#include <iostream>

using namespace std;

int main(){
	double a, b, resultado;
	cin >> a >> b;
	resultado = a/b;
	
	cout.precision(2);
	cout.setf(ios::fixed);
	
	cout << resultado << "\n";
	
}


/* Exercicio Soma
int main()
{
	int A, B;
	
	cin >> A >> B;
	
	cout << A+B << "\n";
}
*/

/* Exercicio de PI
int main(){
	double raio;
	
	cin >> raio;
	
	cout.precision(6);
	cout.setf(ios::fixed);
	
	cout << raio*raio*3.14159 << "\n";
}

*/