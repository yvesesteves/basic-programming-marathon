#include <iostream>
using namespace std;

int main(){
	int P1, C1, P2, C2;
	int G1;
	int G2;
	cin >> P1 >> C1 >> P2 >> C2;
	G1 = P1*C1;
	G2 = P2*C2;
	if (G1 == G2){
		cout << '0' << "\n";
	}		
	if (G1 < G2){
		cout << '1' << "\n";
	}
	if (G1 > G2){
		cout << "-1" << "\n";
	}
}
