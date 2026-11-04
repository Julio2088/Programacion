#include <stdio.h>
#include <math.h>

double hipotenusa(double,double);

int main(){
    double Lado1 = 3.0; double Lado2 = 4.0;
    printf("Lado1: %.2lf Lado2: %.2lf Hipotenusa: %.2lf\n",Lado1,Lado2,hipotenusa(Lado1,Lado2));
    Lado1 = 5.0; Lado2 = 12.0;
    printf("Lado1: %.2lf Lado2: %.2lf Hipotenusa: %.2lf\n",Lado1,Lado2,hipotenusa(Lado1,Lado2));
    Lado1 = 8.0; Lado2 = 15.0;
    printf("Lado1: %.2lf Lado2: %.2lf Hipotenusa: %.2lf\n",Lado1,Lado2,hipotenusa(Lado1,Lado2));

    return 0;
}

double hipotenusa(double Lado1,double Lado2){
    return sqrt(pow(Lado1,2.0)+pow(Lado2,2.0));  
}