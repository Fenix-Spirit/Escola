#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int vetor_1[n];
    int vetor_2[n];
    for (int i=0;i<n;i++){
        scanf("%d",&vetor_1[i]);
    }
    for (int i=0;i<n;i++){
        scanf("%d",&vetor_2[i]);
    }
    for (int i=0;i<n;i++){
        printf("%d\n",vetor_1[i]);
        printf("%d\n",vetor_2[i]);
    }
    return 0;
}