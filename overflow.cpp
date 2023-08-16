#include <iostream>
using namespace std;

int main(){
    int N;
    int P, Q;
    char C;
    int res;


    cin >> N;
    cin >> P >> C >> Q;
    if (C == '*'){
        res = P * Q;
    }
    if(C == '+'){
        res = P + Q;
    }


    if(res > N){
        cout << "OVERFLOW";
    }else{
        cout << "OK";
    }

}