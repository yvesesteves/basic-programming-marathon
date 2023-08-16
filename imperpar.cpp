#include <iostream>
using namespace std;

int main(){
	int B, C;
	int X;
	cin >> B;
	cin >> C;
	
	X = B+C;
	
	if(X%2 == 0){
		cout << "Bino\n";
	}
	else{
		cout << "Cino\n";
	}
}