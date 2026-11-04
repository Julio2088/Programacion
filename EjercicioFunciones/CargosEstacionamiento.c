#include <stdio.h>

float calcularCargos(float);

int main(){ 
    float Horas1 = 0;
    float Horas2 = 0;
    float Horas3 = 0;

    

    puts("Ingrese la horas estasionadas por el cliente 1");
    scanf("%f",&Horas1);
    Horas1 = Horas1 < 0 ? 0 : Horas1 > 24 ? 24: Horas1;
    puts("Ingrese la horas estasionadas por el cliente 2");
    scanf("%f",&Horas2);
    Horas2 = Horas2 < 0 ? 0 : Horas2 > 24 ? 24: Horas2;
    puts("Ingrese la horas estasionadas por el cliente 3");
    scanf("%f",&Horas3);
    Horas3 = Horas3 < 0 ? 0 : Horas3 > 24 ? 24: Horas3;
    
    float Cargo1 = calcularCargos(Horas1);
    float Cargo2 = calcularCargos(Horas2);
    float Cargo3 = calcularCargos(Horas3);

    printf("%s","Carro\tHora\tCargo\n");
    printf("1\t%0.2f\t%0.2f\n",Horas1,Cargo1);
    printf("2\t%0.2f\t%0.2f\n",Horas2,Cargo2);
    printf("3\t%0.2f\t%0.2f\n",Horas3,Cargo3);
    printf("TOTAL\t%0.2f\t%0.2f\n",Horas1+Horas2+Horas3,Cargo1+Cargo2+Cargo3);

    return 0;
}

float calcularCargos(float Horas){
    float Tarifa = 2.0;
    if (Horas > 3){
        Tarifa += Horas*0.5;
    }
    return Tarifa;
}

