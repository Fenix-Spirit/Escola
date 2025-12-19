#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    char nomes[10][10];
    int notas[n];
    int max=-1;
    for(int i=0;i<n;i++){
        scanf("%s",nomes[i]);
        scanf("%d",&notas[i]);
    }
    for(int i=0;i<n;i++){
        if (notas[i]>max){
            max=notas[i];
        }
    }
    for(int i=0;i<n;i++){
        if (notas[i]==max){
            printf("Melhor nota foi %d do(a) %s\n",notas[i],nomes[i]);
        }
    }
    return 0;
}