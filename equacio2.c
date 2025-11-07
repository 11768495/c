#include <stdio.h>
void main(){
    int a, b, c, discriminant;
    printf("Dona'm a: ");
    scanf("%d",&a);
    printf("Dona'm b: ");
    scanf("%d" ,&b);
    printf("Dona'm c: ");
    scanf("%d" ,&c);
    if(a==0) printf ("No és quadràtica!\b");
    else{
        discriminant=(b*b)-(4*a*c);
        if(discriminant>0) printf("2 solucions\b");
        if(discriminant==0) printf("1 solució\b");
        if(discriminant<0) printf("0 solucions REALS\b");
    }
    return;
}
