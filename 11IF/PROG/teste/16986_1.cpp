#include <stdio.h>
void ex_1(){
    int n_1;
    int n_2;
    int existe=0;
    scanf("%d",&n_1);
    scanf("%d",&n_2);
    int vetor_a[n_1];
    int vetor_b[n_2];
    for (int i=0;i<n_1;i++){
        scanf("%d",&vetor_a[i]);
    }
    for (int i=0;i<n_2;i++){
        scanf("%d",&vetor_b[i]);
    }
    for (int i=0;i<n_1;i++){
        existe=0;
        for (int k=0;k<n_2;k++){
            if (vetor_a[i]==vetor_b[k]){
                existe=1;
                break;
            }
        }
        if (existe==0){
            printf("NAO");
            break;
        }
    }
    if (existe==1){
        printf("SIM");
    }
}

void ex_2(){
    int n;
    int muda_sentido=0;
    scanf("%d",&n);
    int vetor[n];
    int a;
    for (int i=0;i<n;i++){
        scanf("%d",&vetor[i]);
    }
    for (int i=1;i<n;i++){
        a=1;
        if (vetor[i-1]==vetor[i]){
            a=2;
        }
        if (vetor[i]>vetor[i-a] && vetor[i]<vetor[i+1]){
            muda_sentido++;
        }
        else if (vetor[i]<vetor[i-a] && vetor[i]>vetor[i+1]){
            muda_sentido++;
        }

    }
    printf("%s","Vezes que muda de sentido:");
    printf("%d",muda_sentido);
}

int main(){
    int option=0;
    while (option!=3){
        printf("\n\nMENU\n1. ex_1\n2. ex_2\n3. FIM\n");
        scanf("%d",&option);
        switch(option){
        case 1:
            ex_1();
            break;
        case 2:
            ex_2();
            break;
        default:break;
        }
    }
    return 0;
}