#include <stdio.h>

int main()
{
    unsigned short int Edad, Autorizacion, Empleados;
    char Acceso;
    
    puts("Cual es tu edad");
    scanf("%d",&Edad);
   
    puts("Cual es tu nivel de autorizacion");
    scanf("%d",&Autorizacion);
   
    puts("Cual es la cantidad de empleados");
    scanf("%d",&Empleados);
   
    puts("Cual es tu tipo de acceso");
    scanf(" %c",&Acceso);
    
    if (Edad <= 25 || Edad >= 60) {
        puts("Acceso denegado, afuera del rango de edad");
        return 0;
    }
    if (Autorizacion < 3) {
        puts("Acceso denegado, nivel de autorizacion menor de 3");
        return 0;
    }
    if (Empleados%2 != 0) {
        puts("Acceso denegado, cantidad impar de empleados");
        return 0;
    }
    if (Acceso != 'A') {
        puts("Acceso denegado, tipo de acceso incorrecto");
        return 0;
    }
    puts("Acceso permitido, cumple todo los requisitos");
    return 0;
}