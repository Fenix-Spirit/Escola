#include <iostream>

using namespace std;

int main(){
    unsigned int linhas;
    unsigned int colunas;
    int soma=0;
    cin >> linhas;
    cin >> colunas;
    int matriz[linhas][colunas];
    for(int i=0;i<linhas;i++){
        for(int j=0;j<colunas;j++){
            cin >> matriz[i][j];
            if (matriz[i][j]>=10){soma+=matriz[i][j];}
        }
    }
    for (int i=0;i<linhas;i++){
        for(int j=0;j<colunas-1;j++){
            cout << matriz[i][j] << " ";
        }
        cout << matriz[i][colunas-1] << endl;
    }
    cout << soma;
    return 0;
}