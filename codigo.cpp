#include <iostream>
using namespace std;

int main(){
	int n;
	int c[10000];
	cin >> n;
	for(int i; i < n; i++){
		cin >> c[i];
	}
	int x = 0;
	for (int i = 0; i+2 < n; ++i)
	if (c[i] == 1 && c[i+1] == 0 && c[i+2] == 0)
    x++;

	cout << x << "\n";
	
}