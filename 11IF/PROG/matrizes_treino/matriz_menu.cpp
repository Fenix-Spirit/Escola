#include <iostream>
using namespace std;
int n;
int matriz_A[10][10];
int matriz_B[10][10];
int matriz_C[10][10];
bool C=false;
void n1(){
    int soma=0;
    for (int i=0;i<n;i++){
        soma+=matriz_A[i][i];
    }
    cout << soma<<endl;
}
void n2(){
    int soma=0;
    for (int i=0;i<n;i++){
        for (int k=0;k<n;k++){
            if (k>i){
                soma+=matriz_A[i][k];
            }
        }
    }
    cout << soma<<endl;
}
void n3(){
    int soma=0;
    for (int i=0;i<n;i++){
        for (int k=0;k<n;k++){
            if (k<i){
                soma+=matriz_A[i][k];
            }
        }
    }
    cout << soma<<endl;
}
void n4(){
    C=true;
    for(int i=0;i<n;i++){
        for(int k=0;k<n;k++){
            cin >> matriz_B[i][k];
        }
    }
    for(int i=0;i<n;i++){
        for(int k=0;k<n;k++){
            matriz_C[i][k]=matriz_A[i][k]+matriz_B[i][k];
        }
    }
}
void n5(){
    if (C==true)
    {
        for(int k=0;k<n;k++){
            int soma=0;
            for(int i=0;i<n;i++){
                soma+=matriz_C[i][k];
            }
            int media=soma/n;
            cout <<"Media Coluna"<<k+1<<": "<<media << endl;
        }
    }
    else{cout<<"A matriz C nao existe";}
}
void n6(){
    for(int i=0;i<n;i++){
        int soma=0;
        for(int k=0;k<n;k++){
            soma+=matriz_A[i][k];
        }
        int media=soma/n;
        cout <<"Media Linha "<<i+1<<": "<<media << endl;
    }
}
void n7(){
    if (C==true){
        int maior=0;
        for(int i=0;i<n;i++){
            for(int k=0;k<n;k++){
                if (matriz_C[i][k]>maior){
                    maior=matriz_C[i][k];
                }
            }
        }
        cout <<"Maior elemento da matriz C: "<<maior << endl;
    }
    else{cout<<"A matriz C nao existe";}
}
void n8(){
    if (C==true){
        for (int k=0;k<n;k++){
            int maior=0;
            for(int i=0;i<n;i++){
                if (matriz_C[i][k]>maior){
                    maior=matriz_C[i][k];
                }
            }
            cout <<"Maior elemento da coluna "<<k+1<<": "<<maior << endl;
        }
    }
    else{cout<<"A matriz C nao existe";}
}

int main(){
    cin >> n;
    for(int i=0;i<n;i++){
        for(int k=0;k<n;k++){
            cin >> matriz_A[i][k];
        }
    }
    int option=-1;
    while (option!=0){
        cout<<"\nMENU\n0. FIM\n1. A soma dos elementos da diagonal principal\n2. A soma dos elementos acima da diagonal principal\n3. A soma dos elementos abaixo da diagonal principal\n4. Ler uma nova matriz B, efetue a soma das duas matrizes guarde o resultado numa nova matriz C\n5. Media de cada coluna da matriz C\n6. Media de cada linha da matriz A\n7. O maior elemento da matriz C\n8. O maior elemento de cada coluna C\n";
        cin >> option;
        switch(option){
        case 1:
            n1();
            break;
        case 2:
            n2();
            break;
        case 3:
            n3();
            break;
        case 4:
            n4();
            break;
        case 5:
            n5();
            break;
        case 6:
            n6();
            break;
        case 7:
            n7();
            break;
        case 8:
            n8();
            break;
        default:break;
        }
    }
    return 0;
}