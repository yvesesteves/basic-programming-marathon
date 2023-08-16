#include <iostream>
using namespace std;

int main(){
	int A;	// alunos
	int M;	// monitores
	int P;	// pessoas total (alunos + monitores)
	cin >> A;
	cin >> M;
	P = A+M;
	if(P <= 50){
		cout << "S" << "\n";
	}else{
		cout << "N" << "\n";
	}
}