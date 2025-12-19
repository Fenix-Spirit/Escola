#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int vetor[n];
    int soma=0;
    int prod=1;
    for(int i=0;i<n;i++){
        scanf("%d",&vetor[i]);
    }
    for(int i=0;i<n;i++){
        soma+=vetor[i];
        prod*=vetor[i];
    }
    printf("%d\n%d",soma,prod);
    return 0;
}