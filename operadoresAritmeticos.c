#include <stdio.h>


int main () {
    float base, altura, area, radio, perimetro;
    float celsius, farenheit;
    float pi = 3.1416;

    puts("Pon la base y altura de un triangulo");
    scanf("%f %f", &base, &altura);
    if (base && altura) {
        area = (base*altura)/2;
        printf("El area del triangulo es %.2f\n", area);
    }

    puts("Pon el radio de un circulo");
    scanf("%f", &radio);
    if (radio) {
        perimetro = 2*pi*radio;
        printf("El perimetro del circulo es %.2f\n", perimetro);
    }

    puts("Pon la temperatura en celsius");
    scanf("%f", &celsius);
  
    farenheit = ((9.0/5.0)*celsius) + 32;
    printf("La temperatura en farenheit es %.2f\n", farenheit);
    
    
    float calicifacion1, calificacion2, calificacion3, promedio, ponderacion1, ponderacion2, ponderacion3;

    if (calicifacion1 && calificacion2 && calificacion3 && ponderacion1 && ponderacion2 && ponderacion3) {
    puts("Pon la calificacion 1 y su ponderacion");
    scanf("%f %f", &calicifacion1, &ponderacion1);

    puts("Pon la calificacion 2 y su ponderacion");
    scanf("%f %f", &calificacion2, &ponderacion2);

    puts("Pon la calificacion 3 y su ponderacion");
    scanf("%f %f", &calificacion3, &ponderacion3);

    promedio = ((calicifacion1*ponderacion1) + (calificacion2*ponderacion2) + (calificacion3*ponderacion3)) / (ponderacion1 + ponderacion2 + ponderacion3);
    printf("El promedio es %.2f\n", promedio);
    }
    float kilometros, horas, velocidad_media;

    puts("Pon la velocidad recorrida en kilometros y el tiempo empleado en horas");
    scanf("%f %f",&kilometros,&horas);
    if (kilometros && horas) {
        velocidad_media = kilometros/horas;
        printf("Tu velocidad media fue %f",velocidad_media);
    }


}