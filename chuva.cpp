#include <iostream>
using namespace std;

int main(){
	int n;
	int A[105][105], B[105][105];
	int C[105][105];		// soma das matries
	
	cin >> n;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
				cin >> A[i][j];
		}
	}
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> B[i][j];
		}
	}
	
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				C[i][j] = A[i][j] + B[i][j];
		}
	}
	
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cout << C[i][j] << " ";
		}
		cout << "\n";
	}
}