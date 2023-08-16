#include <iostream>
using namespace std;

int main(){
	int N;		// vezes q o amigo apertou interruptor
	int a = 0;	// lampada A
	int b = 0;	// lampada B
	cin >> N;
	for(int x = 0; x < N; x++){
		int i;
		cin >> i;
		if (i == 1){
			a = 1 - a;
		}
		else{
			a = 1 - a;
			b = 1 - b;
		}

		
	}
	cout << a << "\n";
	cout << b << "\n";
	
	
}