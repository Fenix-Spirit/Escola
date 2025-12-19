#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int vetor[n];
    int vetor_used[n];
    int valor;
    for(int i=0;i<n;i++){
        scanf("%d",&vetor[i]);
        vetor_used[i]=-999999999;
    }
    for (int i=0;i<n;i++){
        int bit=1;
        int count=0;
        for (int j=0;j<n;j++){
            if (vetor[i]==vetor_used[j]){
                bit=0;
            }
        }
        if (bit==1){
            valor=vetor[i];
            for (int j=0;j<n;j++){
                if (valor==vetor[j]){
                    count++;
                }
            }
            vetor_used[i]=valor;
            printf("%d ocorre %d vez(es)\n",valor,count);
        }
    }
    return 0;
}