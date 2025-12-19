#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    char sexo[n];
    int altura[n];
    int soma_m=0;
    int soma_f=0;
    int total_m=0;
    int total_f=0;
    float media_m;
    float media_f;
    int maior_m=0;
    int maior_f=0;
    int menor_f=999;
    int menor_m=999;
    for(int i=0;i<n;i++){
        scanf("%s",sexo[i]);
        scanf("%d",&altura[i]);
    }
    for(int i=0;i<n;i++){
        if(sexo[i]=='M'){
            soma_m+=altura[i];
            total_m++;
        }
        else if(sexo[i]=='F'){
            soma_f+=altura[i];
            total_f++;
        }
    }
    if (total_m>){}
    media_m=soma_m/n;
    media_f=soma_f/n;
    for(int i=0;i<n;i++){
        if (altura[i]>maior_m || altura[i]>maior_f){
            if (sexo[i]=='M'){
            maior_m=altura[i];
            }
            else if (sexo[i]=='F'){
            maior_f=altura[i];
            }
        }
        if (altura[i]<menor_f || altura[i]<menor_m){
            if (sexo[i]=='M'){
            menor_m=altura[i];
            }
            else if (sexo[i]=='F'){
            menor_f=altura[i];
            }
        }
    }

    return 0;
}
//incompleto