#include <iostream>
using namespace std;

int main(){
    int n;
    int m;
    cin >> n >> m;
    char matriz[n][m];
    int valores[m];
    for(int i=0;i<n;i++){
        for(int k=0;k<m;k++){
            char letra;
            cin >> letra;
            matriz[i][k]=letra;
        }
    }
    for(int i=0;i<m;i++){
        cin >> valores[i];
    }
    for(int i=0;i<m;i++){
        cout << valores[i];
    }
    for(int i=0;i<n;i++){
        for(int k=0;k<m;k++){

        }
    }

    return 0;
}