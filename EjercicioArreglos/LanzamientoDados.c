#include <stdio.h>
#include <stdlib.h>
#include <time.h>




int main(){
    srand(time(NULL));
    int Numeros[11] = {0};
    for (size_t i = 1; i <= 36000; i++)
    {
        int Dado1 = (rand()%6)+1;
        int Dado2 = (rand()%6)+1;

        int Suma = Dado1+Dado2;
        switch (Suma)
        {
        case 2:
            Numeros[0]++;
            break;
        case 3:
            Numeros[1]++;
            break;
        case 4:
            Numeros[2]++;
            break;
        case 5:
            Numeros[3]++;
            break;
        case 6:
            Numeros[4]++;
            break;
        case 7:
            Numeros[5]++;
            break;
        case 8:
            Numeros[6]++;
            break;
        case 9:
            Numeros[7]++;
            break;
        case 10:
            Numeros[8]++;
            break;
        case 11:
            Numeros[9]++;
            break;
        case 12:
            Numeros[10]++;
            break;
        }
    }
    printf("Suma\tResultado\tPorcentaje\n");
    for (size_t i = 0; i <= 10; i++)
    {
        int Porcentaje = (Numeros[i]/36000.0)*100.0;
        printf("%d\t%d\t\t%d%%\n",i+2,Numeros[i],Porcentaje);
    }
    
    
    return 0;
}
