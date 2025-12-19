#include<stdio.h>
#include<math.h>
int main(){
    double a,b,h;
    scanf("%lf %lf",&a,&b);
    h=sqrt(pow(a,2)+pow(b,2));
    printf("%.2f",h);
    return 0;
}