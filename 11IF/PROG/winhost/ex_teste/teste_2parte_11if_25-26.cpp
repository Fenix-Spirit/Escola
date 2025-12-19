#include <stdio.h>
int main(){
    int n;
    int muda_sentido=0;
    scanf("%d",&n);
    int vetor[n];
    int a;
    int b;
    for (int i=0;i<n;i++){
        scanf("%d",&vetor[i]);
    }
    for (int i=1;i<n;i++){
        a=1;
        b=1;
        if (vetor[i-1]==vetor[i]){
            a=2;
        }
        if (vetor[i+1]==vetor[i]){
            b=2;
        }
        if (vetor[i]>vetor[i-a] && vetor[i]>vetor[i+b]){
            muda_sentido++;
        }
        else if (vetor[i]<vetor[i-a] && vetor[i]<vetor[i+b]){
            muda_sentido++;
        }

    }
    printf("%d",muda_sentido);
    return 0;
}
