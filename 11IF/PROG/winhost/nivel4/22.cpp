#include <stdio.h>
#include <math.h>
int main(){
    int n;
    int o;
    scanf("%d",&n);
    scanf("%d",&o);
    int vetor[o];
    for(int i=0;i<o;i++){
        vetor[i]=pow(n,i+1);
        printf("%d\n",vetor[i]);
    }
    return 0;
}