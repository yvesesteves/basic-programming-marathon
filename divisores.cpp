#include <iostream>
using namespace std;

int main(){
	int X;
	int i = 1;
	cin >> X;
	
	while(i <= X){
		if (X%i == 0){
		cout << i << " ";
		}
		i++;
	}

	cout << "\n";
	
}