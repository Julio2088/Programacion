#include <stdio.h>

int main (){
    int x = 0;
    int y = 0;
    long int i = 1;
    //Predecremento y postincremente
    //el pre decremento resta 1 a la variable x antes de que corra esa linea de codigo
    printf("Pre decremento %d %d\n",--x,x);
    //el post decremento resta 1 ala variable x despues de que corra esa linea de codigo
    printf("Post decremento %d %d\n",x--,x);

    //Impresión de números mediante un ciclo
    //se va sumando 1 hasta que llegue a 11 y se rompa la condicion del while
    while (i<=10) {
        printf("%d   ",i);
        i++;
    }
    puts("");
    //Encontrar el número más grande

    //inicializar variables
    i = 1;
    unsigned int Entero = 0;
    int NumeroMayor = 0;
    //mientras que i sea menor o igual que 10
    while (i<=10) {
        //pedir al usuario un entero positivo
        puts("Ingresa un entero positivo");
        scanf("%u",&Entero);

        //si el entero es mayor que el numero mayor
        if (Entero>NumeroMayor){
            //remplazar el valor de numero mayor por el entero
            NumeroMayor = Entero;
        }
        //incrementar 1 al contador
        i++;
    }
    //imprimir el numero mayor
    printf("El numero mayor es %d\n",NumeroMayor);

    //Salida tabular
    i = 1;

    printf("N\t10*N\t100*N\t1000*N\n");
    while (i<=10){
        printf("%d\t%d\t%d\t%d\n",i,i*10,i*100,i*1000);
        i++;
    }
    //Salida tabular
    i = 3;
    printf("A\tA+2\tA+4\tA+6\n");
    while (i<=15){
        printf("%d\t%d\t%d\t%d\n",i,i+2,i+4,i+6);
        i+=3;
    }

    //Encontrar los dos números más grandes
    i = 1;
    NumeroMayor = 0;
    int SegundoMayor = 0;
    //repetir mientras que sea menor que 10
    while (i<=10) {
        puts("Ingresa un entero positivo");
        scanf("%u",&Entero);
        //si el entero es mayor que el numero mayor y el segundo numero mayor
        if ((Entero>NumeroMayor) && (Entero>SegundoMayor)){
            //asignar al segundo mayor el valor del numero mayor
            SegundoMayor = NumeroMayor;
            //asignar al numero mayor el valor del entero
            NumeroMayor = Entero;
        }
        //si el entero es mayor que el segundo valor mayor pero menor que el numero mayor
        if ((Entero>SegundoMayor) && (Entero<NumeroMayor)){
            //asignar al segundo numero mayor el entero
            SegundoMayor = Entero;
        }
        //incrementar 1 la iteracion
        i++;
    }
    printf("El numero mayor es %d\n",NumeroMayor);
    printf("El segundo numero mayor es %d\n",SegundoMayor);

    //Validación de entrada del usuario

    int passes = 0;
    int failures = 0;
    int student = 1;


    while (student <= 10) {

        printf("%s", "Enter result (1-pass, 2-fail): "); 
        int result = 0; 
        scanf("%d", &result);

        //mientras que el resultado sea mayor que 2 o menor que 1, se repite hasta que ingrese un valor correcto
        while ((result > 2)||(result < 1)){
            puts("Invalid result, try again (1-pass, 2-fail)");
            scanf("%d", &result);
        }


        if (result == 1) {
        passes = passes + 1;
        } 
        else { 
        failures = failures + 1;
        } 
        student = student + 1; 
        } 

        printf("Passed %d\n", passes);
        printf("Failed %d\n", failures);

        if (passes > 8) {
        puts("Bonus to instructor!");

        } 
            
    //Cuadrado de asteriscos
    i = 1;
    int j = 1;

    puts("Ingresa el lado de un cuadrado");
    scanf("%d",&Entero);
    //se hace un ciclo para hacer el lado vertical del cuadrado
    while (i<=Entero)
    {
        //se pone la segunda iteracion a 1 para que cuando se haga otro ciclo, el ciclo de abajo empieze denuevo
        j = 1;
        //otro ciclo para hacer el lado horizontal del cuadrado
        while (j<=Entero)
        {
            printf("*");
            j++;
        }
        puts("");
        i++;
    }
    //Cuadrado hueco de asteriscos
    i = 1;
    j = 1;
    puts("Ingresa el lado de un cuadrado");
    scanf("%d",&Entero);
    while (i<=Entero)
    {
        j = 1;
        while (j<=Entero)
        {
            //solo se imprime los asteriscos si es la parte de arriba o de abajo del cuadrado
            if (i == 1 || i == Entero){
                printf("*");
                
            }
            else{
                //si no es la parte de arriba o abajo, es un lado, entonces solo imprimir si son los extremos
                if (j == 1 || j == Entero){
                printf("*");
                }
                else{
                    //si es el centro, imprimir un espacio para que de forma
                    printf(" ");
                }
            }
            j++;
        }
        //se usa para saltar una linea
        puts("");
        i++;
    }
    //Verificador de palíndromos
    puts("Ingresa 1 numero de 5 digitos");
    scanf("%u",&Entero);

    //verifica que el numero este dentro del rango 
    if ((Entero >=100000)||(Entero<=9999)){
        //se repite hasta que el numero este dentro del rango
        while ((Entero >=100000)||(Entero<=9999))
        {
            puts("Numero invalido, Ingresa 1 numero de 5 digitos");
            scanf("%u",&Entero);
        }
        
    }
    //Saca el digito dividiendo el numero, y luego sacando el modulo (50000/10000 = 5 % 10 = 5) 
    int Dig1 = Entero/10000 %10;
    int Dig2 = Entero/1000 %10;
    int Dig3 = Entero/100 %10;
    int Dig4 = Entero/10 %10;
    int Dig5 = Entero/1 %10;

    //multiplica los digitos para que sea el inverso
    int NuevoDigito = (Dig5*10000)+(Dig4*1000)+(Dig3*100)+(Dig2*10)+(Dig1);

    if (NuevoDigito==Entero){
        puts("Es palindromo");
    }
    else {
        puts("No es palindromo");
    }

    //Impresión del equivalente decimal de un número binario

    puts("Ingresa 1 numero binario de 5 digitos");
    scanf("%u",&Entero);
    //verifica que el numero este dentro del rango 
    if ((Entero >=11112)||(Entero<0)){
        //se repite hasta que el numero este dentro del rango
        while ((Entero >=11112)||(Entero<0))
        {
            puts("Numero invalido, Ingresa 1 numero binario de 5 digitos");
            scanf("%u",&Entero);
        }
        
    }
    //Saca el digito dividiendo el numero, y luego sacando el modulo (50000/10000 = 5 % 10 = 5) 
    Dig1 = Entero/10000 %10;
    Dig2 = Entero/1000 %10;
    Dig3 = Entero/100 %10;
    Dig4 = Entero/10 %10;
    Dig5 = Entero/1 %10;

    NuevoDigito = (Dig1*16)+(Dig2*8)+(Dig3*4)+(Dig4*2)+(Dig5*1);
    printf("El numero decimal es %d\n",NuevoDigito);

    //¿Qué tan rápida es tu computadora?
    i = 1;
    while (i <= 1000000000)
    {
        if (i%100000000 == 0){
            printf("Llego al %d\n",i);
        }
        i++;
    }
    //toma 0.3 segundos en cada 100 millones de iteraciones

    //Detección de múltiplos de 10
    i = 1;
    //se inicia un ciclo, hasta que i no sea 100 corre infinitamente
    while (i<=100)
    {
        printf("*");
        //si el modulo del numero y 10 da 0, es multiplo de 10, por lo cual da otra linea
        if (i%10 == 0){
            puts("");
        }
        i++;
    }
    //Conteo de 7s
    puts("Ingresa 1 numero de 5 a 1 digitos");
    scanf("%u",&Entero);
    //verifica que el numero este dentro del rango 
    if ((Entero >=100000)||(Entero<=1)){
        //se repite hasta que el numero este dentro del rango
        while ((Entero >=100000)||(Entero<=1))
        {
            puts("Numero invalido, Ingresa 1 numero de 5 digitos");
            scanf("%u",&Entero);
        }
        
    }

    i = 0;
    //Saca el digito dividiendo el numero, y luego sacando el modulo (50000/10000 = 5 % 10 = 5) 
    Dig1 = Entero/10000 %10;
    Dig2 = Entero/1000 %10;
    Dig3 = Entero/100 %10;
    Dig4 = Entero/10 %10;
    Dig5 = Entero/1 %10;

    if (Dig1 == 7){
        i++;
    }
    if (Dig2 == 7){
        i++;
    }
    if (Dig3 == 7){
        i++;
    }
    if (Dig4 == 7){
        i++;
    }
    if (Dig5 == 7){
        i++;
    }
    printf("Hay %d 7 en el numero %d\n",i,Entero);

    //Patrón de tablero de ajedrez con asteriscos
    i = 1;
    j = 1;
    //abre un ciclo para el lado vertical
    while (i <= 8)
    {
        j = 1;
        //si el modulo de la iteracion y 2 da 0, osea es par, imprime un espacio
        if (i%2 == 0){
            printf("%s", " ");
                
        }
        //abre un ciclo para el lado horizontal
        while (j <= 8){
            
            printf("%s", "* ");;
            j++;
        }
        puts("");
        i++;
    }
    //Múltiplos de 2 con un ciclo infinito
    /*i = 1;
    while (1)
    {
        i = i*2;
        printf("%d\n",i);
        
    }
    imprime infinitamente hasta que solo puede imprimir 0    
    */

    //Diámetro, circunferencia y área de un círculo
    double Pi = 3.14159;
    double Radio = 0;
    double Diametro = 0;

    float Circunferencia = 0;
    float Area = 0;

    puts("Ingresa el radio de un circulo");
    scanf("%lf",&Radio);

    Diametro = Radio*2;
    Circunferencia = Diametro*Pi;
    Area = Pi*Radio*Radio;
    printf("El diametro es %.4lf, la circunferencia es %0.3f y el area es %0.3f\n",Diametro,Circunferencia,Area);

    //Factorial
    puts("Ingresa un numero para sacar el factorial");
    scanf("%u",&Entero);
    i = 1;
    for (i;i<=Entero;i++){
            //se hace un ciclo y multiplica hasta que sea igual que el entero
            NumeroMayor *= i;
            
    }

    printf("La factorial de %d es %d\n",Entero,NumeroMayor);
    
    //Crecimiento de la población mundial
    printf("%s","Año\tPoblacion\tIncremento\n");
    double Poblacion = 8300;
    double TasaCrecimiento = 0.0084;
    double PoblacionPasada = 8300;
    i = 1;
    //se hace un ciclo del 1 al 100
    for (i = 1;i<=100;i++){
        //se calcula el resultado, usando la poblacion mas la poblacion por la tasa
        double Resultado = Poblacion+(Poblacion*TasaCrecimiento);
        Poblacion = Resultado;
        printf("%d\t%.2lf M\t%.2lf M\n",i,Resultado,Poblacion-PoblacionPasada);
        PoblacionPasada = Resultado;
        //en 80 años, la poblacion se duplicaria, y possiblemente en 160 años se cuadruplicaria 
    }

    return 0;
}