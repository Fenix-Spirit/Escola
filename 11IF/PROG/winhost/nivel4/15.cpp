#include <stdio.h>
int main(){
    int n;
    int valores[n];
    int mult=1;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&valores[i]);
        mult*=valores[i];
    }
    printf("%d\n",mult);
    if (valores[0]>=valores[1]){
        printf("%d%s%d%s\n",valores[0]," (",1,")");
    }
    for (int i=1;i<n-1;i++){
        if (valores[i]>=valores[i+1] && valores[i]>=valores[i-1]){
            printf("%d%s%d%s\n",valores[i]," (",i+1,")");
        }
    }
    if (valores[n-1]>=valores[n-2]){
        printf("%d%s%d%s\n",valores[n-1]," (",n,")");
    }
    return 0;
}