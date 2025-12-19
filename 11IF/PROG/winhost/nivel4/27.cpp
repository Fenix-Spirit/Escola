#include <stdio.h>
int main(){
    int n;
    int count=0;
    scanf("%d",&n);
    int vetor[n];
    for(int i=0;i<n;i++){
        scanf("%d",&vetor[i]);
    }
    for(int i=1;i<n;i++){
        int menor=0;
        int maior=0;
        for(int k=0;k<i;k++){
            if (k>=vetor[i]){
                menor=1;
            }
        }
        if (menor==0){
            for(int j=i;j<n;j++){
                if (j<=vetor[i]){
                    maior=1;
                }
            }
        }
        if (maior==0){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
//incompleto