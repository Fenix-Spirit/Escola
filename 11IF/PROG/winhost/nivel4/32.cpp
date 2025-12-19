#include <iostream>

using namespace std;

int main(){
     unsigned int n;
    cin >> n;
    int vetor[n];
    for(int i=0;i<n;i++){
        cin >> vetor[i];
    }
    for(int i=n-1;i>=0;i--){
        if (i!=0){
            vetor[i]=vetor[i-1];
        }
    }
    for(int i=0;i<n;i++){
        cout << vetor[i] << endl;
    }
    return 0;
}