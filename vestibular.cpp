#include <iostream>
using namespace std;

int main(){
    int N;      // numero de questoes da prova
    int certo = 0;    // numero de acertos do candidato
    string gabarito;
    string aluno;
    
    cin >> N;
    gabarito = gabarito.size();
    aluno = aluno.size();
    cin >> gabarito;
    cin >> aluno;

    for(int i = 0; i < N; i++){
        if(gabarito[i] == aluno[i]){
            certo++;
        
        }
    }
    cout << certo << "\n";
}