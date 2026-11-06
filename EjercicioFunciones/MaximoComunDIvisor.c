#include <stdio.h>
int mcd(int,int);
int main(){
    int Num1;
    int Num2;
    puts("Ingresa dos numeros");
    scanf("%d %d",&Num1,&Num2);
    printf("Su minimo comun divisor es %d",mcd(Num1,Num2));
    return 0;
}

int mcd(int a,int b){
    int b2;

    while (b != 0){
        b2 = b;
        b = a%b;
        a = b2;

    }
    return a;
}