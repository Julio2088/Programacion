#include <stdio.h>

int main(){
    int FrequenciaMaxima,Edad;
    float RangoMaximo,RangoMinimo;

    puts("Cual es tu edad");
    scanf("%d",&Edad);
    FrequenciaMaxima = 220 - Edad;
    RangoMinimo = FrequenciaMaxima*0.5;
    RangoMaximo = FrequenciaMaxima*0.85;
    printf("Tu rango objetivo cardiovascular es de %.2f a %.2f\n",RangoMinimo,RangoMaximo);
    puts("Nota, la frecuencia cardiaca puede variar segun salud y condicion fisica");

    return 0;
}