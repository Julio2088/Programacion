#include <stdio.h>
#define SIZE 4
int AlmacenarPuntuacion(int);
int SumatoriaArreglo(int[SIZE]);
int PuntuacionAlta(int[SIZE]);
int PuntuacionObjetivo(int[SIZE],int);
int PedirObjetivo();
int MostrarResultados(int,int,int);

int main(){
    
    int Puntuaciones[SIZE];

    for (size_t i = 0; i<=SIZE;i++){
        Puntuaciones[i] = AlmacenarPuntuacion(i);
    }
    int Suma = SumatoriaArreglo(Puntuaciones);
    int NumeroAlto = PuntuacionAlta(Puntuaciones);

    int Objetivo = PedirObjetivo();    

    int NivelesObjetivo = PuntuacionObjetivo(Puntuaciones,Objetivo);

    MostrarResultados(Suma,NumeroAlto,NivelesObjetivo);

    return 0;
}


int AlmacenarPuntuacion(int Index){
    int Puntuacion;
    printf("Ingresa la puntuacion del nivel %d\n",Index+1);
    scanf("%d",&Puntuacion);
    return Puntuacion;
}
int SumatoriaArreglo(int Arreglo[SIZE]){
    int Suma = 0;
    for (size_t i = 0; i<=SIZE;i++){
        Suma += Arreglo[i];
    } 
    return Suma;
}
int PuntuacionAlta(int Arreglo[SIZE]){
    int Alto = 0;
    for (size_t i = 0; i<=SIZE;i++){
        if (Alto < Arreglo[i]){
            Alto = Arreglo[i];
        }
    } 
    return Alto;
}
int PuntuacionObjetivo(int Arreglo[SIZE],int Objetivo){
    int Niveles = 0;
    for (size_t i = 0; i<=SIZE;i++){
        if (Arreglo[i]>=Objetivo){
            Niveles++;
        }
    } 
    return Niveles;
}

int PedirObjetivo(){
    int Objetivo = 0;
    puts("Cual es tu puntuacion objetivo");
    scanf("%d",&Objetivo);
    return Objetivo;
}
int MostrarResultados(int Suma,int NumeroAlto,int NivelesObjetivo){

    printf("Tu puntuacion total es: %d\n",Suma);
    printf("Tu puntuacion mas alta es: %d\n",NumeroAlto);
    printf("%d niveles alcanzaron la puntuacion objetivo\n",NivelesObjetivo);
    return 0;
}