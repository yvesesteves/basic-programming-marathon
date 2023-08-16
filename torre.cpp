#include <iostream>

#define MAX 1010

int m[MAX][MAX];
int l[MAX], c[MAX];

using namespace std;

int main(){
    int N, maxi = -101010;

    cin >> N;
    for(int i = 1; i <=N; i++)
        for(int j = 1; j <=N; j++){
            cin >> m[i][j];     
            l[i] += m[i][j];    // Somando elemento na linha
            c[j] += m[i][j];    // Somando elemento na coluna

}

        // Percorrendo toda a matriz e calculando o peso dos elementos
        for(int i = 1; i <= N; i++)
            for(int j = 1; j <=N; j++)
            //  Caso o peso do elemento for maior que o da variavel, tal peso é atribuido a ele
            maxi = max(maxi, l[i] + c[j] - 2*m[i][j]);

cout << maxi << "\n";

}