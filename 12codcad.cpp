#include <iostream>
using namespace std;

int main(){
    string nome;
    int a=0, e=0, i=0, o=0, u=0;

    getline(cin, nome);
    for(int j= 0; j < nome.size(); j++){
        if (nome[j] == 'a'){
            a++;
        }
        if (nome[j] == 'e'){
            e++;
        }
        if (nome[j] == 'i'){
            i++;
        }
        if (nome[j] == 'o'){
            o++;
        }
        if (nome[j] == 'u'){
            u++;
        }
    }

    cout << "a = " << a << "\n";
    cout << "e = " << e << "\n";
    cout << "i = " << i << "\n";
    cout << "o = " << o << "\n";
    cout << "u = " << u << "\n";
    


    // variavel.sizeof() [le o tamanho da variavel]
    // getline(cin, variavel) [le a linha inteira]
    
}