#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main(){

    int Grupos[9] = {0};
    srand(time(NULL));

    
    
    for (size_t i=1;i<=100;i++){
        int Ventas = rand()%50000;
        int Salario = 200+(Ventas*0.09);
        int Centena = (Salario/100)-2;      
        switch (Centena)
        {
            
        case 1:
            
            Grupos[0]++;
            break;
        case 2:
            Grupos[1]++;
            break;
        case 3:
            Grupos[2]++;
            break;
        case 4:
            Grupos[3]++;
            break;
        case 5:
            Grupos[4]++;
            break;
        case 6:
            Grupos[5]++;
            break;
        case 7:
            Grupos[6]++;
            break;
        case 8:
            Grupos[7]++;
            break;    
        case 9:
            Grupos[8]++;
            break;
        default:
            Grupos[9]++;
            break;
        }
        
    }
    
    for (size_t i=0;i<=8;i++){
        printf("$%d-$%d %d vendedores\n",(i+2)*100,((i+2)*100)+(i==8?99000:99), Grupos[i]);
    }

    return 0;
}

