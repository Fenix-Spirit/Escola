#include <iostream>
using namespace std;

void soma_digitos(int &soma,int n){
    while (n>=1){
        soma+=(n%10);
        n=n/10;
    }
}

int main(){
    int n1;
    int n2;
    int n3;
    cin >> n1;
    cin >> n2;
    cin >> n3;
    int soma1=0;
    int soma2=0;
    int soma3=0;
    soma_digitos(soma1,n1);
    soma_digitos(soma2,n2);
    soma_digitos(soma3,n3);
    if (soma1>soma2 && soma1>soma3){
        cout << n1;
    }
    else if (soma2>soma3 && soma2>soma1){
        cout << n2;
    }
    else{
        cout << n3;
    }
    return 0;
}