#include <stdio.h>

int main(){
    float num1, num2, num3;
    puts("Pon 3 numeros diferentes, separados por coma");
    scanf("%f %f %f",&num1,&num2,&num3); //pide al usuario los 3 numeros

    printf("la suma es %.2f\n",num1+num2+num3);
    printf("el promedio es %.2f\n",(num1+num2+num3)/3); 
    printf("el producto es %.2f\n",num1*num2*num3);
    if (num1 > num2 && num1 > num3){ //evalua que un numero sea mayor que los otros 2
        printf("el mayor valor es %.2f\n",num1);
    }
    if (num2 > num1 && num2 > num3){
        printf("el mayor valor es %.2f\n",num2);
    }
    if (num3 > num2 && num3 > num1){
        printf("el mayor valor es %.2f\n",num3);
    }
    if (num1 < num2 && num1 < num3){ //evalua que un numero sea menor que los otros 2
        printf("el menor valor es %.2f\n",num1);
    }
    if (num2 < num1 && num2 < num3){
        printf("el menor valor es %.2f\n",num2);
    }
    if (num3 < num2 && num3 < num1){
        printf("el menor valor es %.2f\n",num3);
    }

    //-----------------------------
    int inum1, inum2;
    puts("Pon un numero entero");
    scanf("%d",&inum1); //pide al usuario el numero entero

    if (inum1%2 == 0){ //si el residuo da 0
        printf("%d es par\n",inum1);
    }
    if (inum1%2 != 0){ //si el residuo no da 0
        printf("%d es impar\n",inum1);
    }
    //-----------------------------
    puts("Pon dos numero enteros");
    scanf("%d %d",&inum1,&inum2); //pide al usuaro los dos numeros enteros

    if (inum2%inum1 == 0){ //si el residuo da 0 si es multiplo
        printf("%d es multiplo de %d\n",inum1,inum2);
    }
    if (inum2%inum1 != 0){ //si el residuo no da 0, no es multiplo
        printf("%d no es multiplo de %d\n\n",inum1,inum2);
    }
    //-------------------------------
    
    char A = 'A'; 
    char B = 'B';
    char C = 'C';
    char a = 'a';
    char b = 'b';
    char c = 'c';
    char _0 = '0';
    char _1 = '1';
    char _2 = '2';
    char _$ = '$';
    char asterisco = '*';
    char mas = '+';
    char raya = '/';
    char _ = ' ';  
    //imprive las letras con su asignacion ASCII, usando %d para sacar el ASCII
    printf("%c %d\n",A,A);
    printf("%c %d\n",B,B);
    printf("%c %d\n",C,C);
    printf("%c %d\n",a,a);
    printf("%c %d\n",b,b);
    printf("%c %d\n",c,c);
    printf("%c %d\n",_0,_0);
    printf("%c %d\n",_1,_1);
    printf("%c %d\n",_2,_2);
    printf("%c %d\n",_$,_$);
    printf("%c %d\n",asterisco,asterisco);
    printf("%c %d\n",mas,mas);
    printf("%c %d\n",raya,raya);
    printf("%c %d\n",_,_);
    //--------------------------------------------------
    int Digitos;
    int Di1,Di2,Di3,Di4,Di5;
    puts("Pon un numero de 5 digitos");
    scanf("%d",&Digitos); //pide al usuario un numero de 5 digitos
    
    if (Digitos>=10000 && Digitos <= 100000){ //asegura que el digito sea de 5 digitos
        Di1 = Digitos%10; //saca el ultimo digito
        Di2 = (Digitos/10)%10; //saca el penultimo digito
        Di3 = (Digitos/100)%10; //saca el antepenultimo digito
        Di4 = (Digitos/1000)%10; 
        Di5 = (Digitos/10000)%10;

        printf("%d   %d   %d   %d   %d\n",Di5,Di4,Di3,Di2,Di1);
    }

    //-----------------------------------

    int i = 0; //asigna una variable para empezar de 0
    printf("Numero\tCuadrado\tCubo\n");

    printf("%d\t%d\t\t%d\n",i,i*i,i*i*i); //se imprime la raiz cuadrada y cubica del 0
    i += 1; //se suma 1 a la variable
    printf("%d\t%d\t\t%d\n",i,i*i,i*i*i); //se imprime la raiz cuadrada y cubica del 1, despues de ser sumada a 1
    i += 1;
    printf("%d\t%d\t\t%d\n",i,i*i,i*i*i);
    i += 1;
    printf("%d\t%d\t\t%d\n",i,i*i,i*i*i);
    i += 1;
    printf("%d\t%d\t\t%d\n",i,i*i,i*i*i);
    i += 1;
    printf("%d\t%d\t\t%d\n",i,i*i,i*i*i);
    i += 1;
    printf("%d\t%d\t\t%d\n",i,i*i,i*i*i);
    i += 1;
    printf("%d\t%d\t\t%d\n",i,i*i,i*i*i);
    i += 1;
    printf("%d\t%d\t\t%d\n",i,i*i,i*i*i);
    i += 1;
    printf("%d\t%d\t\t%d\n",i,i*i,i*i*i);
    i += 1;
    printf("%d\t%d\t\t%d\n",i,i*i,i*i*i);

    //----------------------------

    int inum3, mayor, menor, medio;
    puts("Pon 3 numeros enteros diferentes");
    scanf("%d %d %d",&inum1,&inum2,&inum3); //pide los 3 numeros enteros diferentes
    if (inum1 != inum2 != inum3){ //asegura que los 3 numeros sean diferentes
        if (inum1 > inum2 && inum1 > inum3){ //evalua si un numero es mayor que los otros 2
            mayor = inum1;
        }
        if (inum2 > inum1 && inum2 > inum3){
            mayor = inum2;
        }
        if (inum3 > inum2 && inum3 > inum1){
            mayor = inum3;
        }
        if ((inum1 > inum2 && inum1 < inum3) || (inum1 > inum3 && inum1 < inum2)){ //evalua si un numero es mayor que uno pero menor que el otro
            medio = inum1;
        }
        if ((inum2 > inum1 && inum2 < inum3) || (inum2 > inum3 && inum2 < inum1)){
            medio = inum2;
        }
        if ((inum3 > inum2 && inum3 < inum1) || (inum3 > inum1 && inum3 < inum2)){
            medio = inum3;
        }
        if (inum1 < inum2 && inum1 < inum3){ //evalua si un numero es menor que los otros 2
            menor = inum1;
        }
        if (inum2 < inum1 && inum2 < inum3){
            menor = inum2;
        }
        if (inum3 < inum2 && inum3 < inum1){
            menor = inum3;
        }
        printf("El menor es %d\n",menor);
        printf("El medio es %d\n",medio);
        printf("El mayor es %d\n",mayor);
    }
  

    return 0;
}

