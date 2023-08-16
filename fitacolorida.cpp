#include <iostream>
using namespace std;

int main(){
    int i;
    int x=0;
    cin >> x;
    int arr[x];

    if(x>=3 && x<= 10000){
        for(i=0;i<x;i++){
            cin >> arr[i];
        }

        for(i=0;i<x;i++){    
            if(arr[i]==-1){
                arr[i]=10;
            }
        }

        for (i=1;i<=x;i++){
            arr[i] = min(9,min(arr[i], arr[i-1] + 1));
        }

        for (i=x-2;i>=0;i--){
            arr[i] = min(9,min(arr[i], arr[i+1] + 1));
        }

        for (i=0;i<x;i++){
            cout << arr[i] << " ";
        }
    }
    return 0;
}
