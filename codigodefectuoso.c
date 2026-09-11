#include <stdio.h>

// Calcula el total de una compra con IVA

int main(int) {

    int iva,cantidad;
    float precio,subtotal,total; //la mayoria de las calculaciones usan flotantes
    printf("Ingrese el precio del producto: ");

    scanf("%f", &precio);  //falta poner el & 


    printf("Ingrese la cantidad: "); //falto la "

    scanf("%d", &cantidad); //se usa enteros para la cantidad


    subtotal = precio * cantidad; //se usa * para multiplicar envez de x

    iva = subtotal * 0.16;

    total = subtotal + iva; //falto el ;


    printf("Subtotal: %f\n", subtotal);

    printf("IVA: %d\n", iva);

    printf("Total a pagar: %.2f\n", total); //se uso otro nombre


}