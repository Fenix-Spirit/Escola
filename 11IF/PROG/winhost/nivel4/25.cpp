#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    char nomes[n][10];
    int ordem[n];
    int ordem_true[n];
    for(int i=0;i<n;i++){
        scanf("%s",nomes[i]);
    }
    for(int i=0;i<n;i++){
        scanf("%d",&ordem[i]);
        ordem_true[i]=ordem[i]-1;
    }
    for(int i=0;i<n;i++){
        printf("%s\n",nomes[ordem_true[i]]);
    }
    return 0;
}