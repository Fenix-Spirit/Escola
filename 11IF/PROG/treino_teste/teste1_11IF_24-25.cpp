#include <stdio.h>
void ex_1(){
    int n;
    scanf("%d",&n);
    int diametro[n];
    int peso[n];
    int maior_peso=0;
    int maior_diametro=0;
    int maior_dif=0;
    int maior_mes;
    for(int i=0;i<n;i++){
        scanf("%d",&diametro[i]);
        scanf("%d",&peso[i]);
        if (peso[i]>maior_peso){
            maior_peso=peso[i];
        }
        if (diametro[i]>maior_diametro){
            maior_diametro=diametro[i];
        }
    }
    for(int i=0;i<n;i++){
        if (maior_dif<peso[i+1]-peso[i]){
            maior_mes=i+1;
            maior_dif=peso[i+1]-peso[i];
            printf("%d\n",maior_mes);
        }
        else if (maior_dif==peso[i+1]-peso[i]){
            maior_mes=i+1;
            printf("%d\n",maior_mes);
        }
    }
    for(int i=0;i<n;i++){
        if (peso[i]==maior_peso && diametro[i]==maior_diametro){
            maior_mes=i+1;
            printf("%d",maior_mes);
        }
    }
}
void ex_2(){
    int n,seq=1;
    scanf("%d",&n);

    if(n==1){
        printf("%d\n",1);
        return;
    }
    printf("%d\n",1);
    printf("%d\n",4);
    for(int i=2;i<n;i+=2){
        seq=seq+4;
        printf("%d\n",seq);
        if (i!=n-1){
            printf("%d\n",4);
        }
    }
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