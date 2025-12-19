#include <iostream>
using namespace std;

int n;
int matriz[100][6];
bool a_feito=false;
char paises[100][100];

void a(){
    a_feito=true;
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>paises[i];
        for (int j=0;j<6;j++){
            cin>>matriz[i][j];
        }
    }
}
void b(){
    if (a_feito){
        int maior=0;
        int soma[100];
        for (int i=0;i<n;i++){
            soma[i]=0;
            for (int j=0;j<6;j++){
                soma[i]+=matriz[i][j];
            }
        }
        for (int i=0;i<n;i++){
            if (soma[i]>maior){
                maior=soma[i];
            }
        }
        for (int i=0;i<n;i++){
            if (soma[i]==maior){
                cout<<paises[i]<<endl;
            }
        }
    }
    else{
        cout<<"Execute primeiro o a)"<<endl;
    }
}
void c(){
    if (a_feito){
        for (int i=0;i<n;i++){
            int diferenca=matriz[i][1]-matriz[i][0];
            bool existe=false;
            for (int j=1;j<6;j++){
                if (diferenca!=matriz[i][j]-matriz[i][j-1]){
                    existe=false;
                    break;
                }
                existe=true;
            }
            if (existe){
                cout<<"EXISTE"<<endl;
            }
            else{
                cout<<"NAO EXISTE"<<endl;
            }
        }
    }
    else{
        cout<<"Execute primeiro o a)"<<endl;
    }
}

int main(){
    int option=-1;
    while (option!=0){
        cout<<"MENU"<<endl<<"1. a)"<<endl<<"2. b)"<<endl<<"3. c)"<<endl<<"0. FIM"<<endl;
        cin>>option;
        switch(option){
        case 1:
            a();
            break;
        case 2:
            b();
            break;
        case 3:
            c();
            break;
        default:
            break;
        }
    }
    return 0;
}