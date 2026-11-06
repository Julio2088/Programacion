#include <stdio.h>
#include <math.h>
//prototipo funciones
double hipotenusa(double,double); //prototipo de la funcion

int main(){
    double Lado1 = 3.0; double Lado2 = 4.0; //define los dos lados
    printf("Lado1: %.2lf Lado2: %.2lf Hipotenusa: %.2lf\n",Lado1,Lado2,hipotenusa(Lado1,Lado2)); //Imprimir resultados de los lados y hipotenusa
    Lado1 = 5.0; Lado2 = 12.0; //redefine los dos lados
    printf("Lado1: %.2lf Lado2: %.2lf Hipotenusa: %.2lf\n",Lado1,Lado2,hipotenusa(Lado1,Lado2));
    Lado1 = 8.0; Lado2 = 15.0; //redefine los dos lados
    printf("Lado1: %.2lf Lado2: %.2lf Hipotenusa: %.2lf\n",Lado1,Lado2,hipotenusa(Lado1,Lado2));

    return 0;
}

double hipotenusa(double Lado1,double Lado2){
    //sacar la hipotenusa usando la raiz cuadrada de la suma del poder de 2 del lado 1 y lado 2
    return sqrt(pow(Lado1,2.0)+pow(Lado2,2.0));  
}