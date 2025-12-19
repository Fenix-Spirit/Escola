#include <iostream>
using namespace std;

int main(){
    float n;
    int cont=0;
    cin>>n;
    if (n<0){
        n=-n;
    }
    while (n>=1){
        n=n/10;
        cont++;
    }
    cout<<cont;
    return 0;
}