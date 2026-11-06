#include <stdio.h>
//prototipo funciones
float calcularCargos(float);

int main(){ 
    float Horas1 = 0;
    float Horas2 = 0;
    float Horas3 = 0;

    

    puts("Ingrese la horas estasionadas por el cliente 1"); 
    scanf("%f",&Horas1);
    Horas1 = Horas1 < 0 ? 0 : Horas1 > 24 ? 24: Horas1; //Evalua los valores y los cambia dentro de los valores especificados si es mayor o menor
    puts("Ingrese la horas estasionadas por el cliente 2");
    scanf("%f",&Horas2);
    Horas2 = Horas2 < 0 ? 0 : Horas2 > 24 ? 24: Horas2;
    puts("Ingrese la horas estasionadas por el cliente 3");
    scanf("%f",&Horas3);
    Horas3 = Horas3 < 0 ? 0 : Horas3 > 24 ? 24: Horas3;
    
    float Cargo1 = calcularCargos(Horas1); //Llama a la funcion para calcular los cargos
    float Cargo2 = calcularCargos(Horas2);
    float Cargo3 = calcularCargos(Horas3);

    printf("%s","Carro\tHora\tCargo\n"); //Empieza una tabla tabulada
    printf("1\t%0.2f\t%0.2f\n",Horas1,Cargo1);
    printf("2\t%0.2f\t%0.2f\n",Horas2,Cargo2);
    printf("3\t%0.2f\t%0.2f\n",Horas3,Cargo3);
    printf("TOTAL\t%0.2f\t%0.2f\n",Horas1+Horas2+Horas3,Cargo1+Cargo2+Cargo3); //imprime el total de horas y cargo total el estacionamiento

    return 0;
}

float calcularCargos(float Horas){
    float Tarifa = 2.0; //empieza con el minimo de tarifa
    if (Horas > 3){ //si las horas son mas de las minimas
        Tarifa += Horas*0.5; //aumentale las horas entre 2 a la tarifa
    }
    return Tarifa; 
}

