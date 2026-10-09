#include <stdio.h>

int main(){
    float PuntosTotales = 0;
    float Puntos = 0;
    int PuntajeAlto = 0;
    int PuntajeBajo = 0;

    for (int Nivel = 1;Nivel<=5;++Nivel){
        printf("Ingresa los puntos del nivel %d (0,1000): ",Nivel);
        scanf("%f",&Puntos);
        
        if ((Puntos >= 0) && (Puntos <= 1000)){
            PuntosTotales += Puntos;
        }
        else{
           
            
            while((Puntos <= 0) || (Puntos >= 1000)){
                printf("Rango de puntos invalidos, intente denuevo: ");
                scanf("%f",&Puntos);  
            }

            PuntosTotales += Puntos;
        }
        if (Puntos>=700){
            ++PuntajeAlto;
            
        }
        else if (Puntos<=200){
            ++PuntajeBajo;
        }

    }
    puts("");
    printf("Promedio de puntos: %0.2f\n",PuntosTotales/5);
    printf("Niveles de puntaje alto: %d\n",PuntajeAlto);
    printf("Niveles de puntaje bajo: %d\n",PuntajeBajo);
    return 0;
}