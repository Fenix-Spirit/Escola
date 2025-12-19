#include <iostream>
using namespace std;

bool a_feito=false;
int n;
int matriz[100][100];
int matriz_v2[100][100];

void a(){
    a_feito=true;
    cin>>n;
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cin>>matriz[i][j];
        }
    }
}
void b(){
    if (a_feito){
        for (int i=0;i<n;i++){
            int maior=0;
            for (int j=0;j<n;j++){
                if (matriz[i][j]>maior){
                    maior=matriz[i][j];
                }
            }
            cout<<"Maior da linha "<<i+1<<": "<<maior<<endl;
        }
        for (int j=0;j<n;j++){
            int maior=0;
            for (int i=0;i<n;i++){
                if (matriz[i][j]>maior){
                    maior=matriz[i][j];
                }
            }
            cout<<"Maior da coluna "<<j+1<<": "<<maior<<endl;
        }
    }
    else{
        cout<<"Execute primeiro o a)"<<endl;
    }
}
void c(){
    if (a_feito){
        int valor;
        cin>>valor;
        int vetor_v[n*n];
        int cont=0;
        for (int i=0;i<n;i++){
            for (int j=0;j<n;j++){
                vetor_v[cont]=matriz[i][j];
                cont++;
            }
        }
        cont=0;
        for (int i=0;i<n;i++){
            for (int j=0;j<n;j++){
                if (i==0 && j==0){
                    matriz_v2[0][0]=valor;
                }
                else{
                    matriz_v2[i][j]=vetor_v[cont];
                    cont++;
                }
            }
        }
    }
    else{
        cout<<"Execute primeiro o a)"<<endl;
    }
}
void d(){
    if (a_feito){
        for (int i=0;i<n;i++){
            for (int j=0;j<n-1;j++){
                cout<<matriz_v2[i][j]<<" ";
            }
            cout<<matriz_v2[i][n-1]<<endl;
        }
    }
    else{
        cout<<"Execute primeiro o a)"<<endl;
    }
}

int main(){
    int option=-1;
    while (option!=0){
        cout<<"MENU"<<endl<<"1. a)"<<endl<<"2. b)"<<endl<<"3. c)"<<endl<<"4. d)"<<endl<<"0. FIM"<<endl;
        cin>>option;
        switch (option){
            case 1:
                a();
                break;
            case 2:
                b();
                break;
            case 3:
                c();
                break;
            case 4:
                d();
                break;
            default:break;
        }
    }
}