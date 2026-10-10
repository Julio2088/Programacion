#include <stdio.h>

int main (){
    int Entero = 0;
    float Contador = 0;
    //Promedio de una secuencia de enteros 
    
    int Suma = 0;
    
    puts("Ingrese primer numero");
    scanf("%d",&Entero);
    //hace el ciclo mientras que el entero no sea 9999
    while(Entero!=9999){
        
        
        Suma += Entero;
        Contador++;
        puts("Ingrese siguiente numero");
        scanf("%d",&Entero);
    }

    printf("El promedio es: %.2f\n",Suma/Contador);
    //Encontrar menor valor
    int Num = 0;
    int Valor = 0;
    int ValorMenor = 999999;
    //la variable del valor menor empieza en un numero alto
    puts("Ingrese cantidad de numeros");
    scanf("%d",&Num);

    for (int i=1;i<=Num;i++){
        puts("Ingresa un valor");
        scanf("%d",&Valor);
        //si el valor que ingreso el usuario es menor al valor menor existente, la variable de valor menor se remplaza por el valor que ingreso el usuario
        if (Valor < ValorMenor){
            ValorMenor = Valor;
        }
    }
    printf("El valor menor es: %d\n",ValorMenor);
    //Producto de enteros impares del 1 al 15 
    Suma = 1;
    //hace un ciclo del 1 al 15, sumando 2 para hacer numeros impar
    for (int i = 1;i<=15;i+=2){
        //a la variable de suma se le multiplica por el numero de iteracion
        Suma *= i;
    }
    printf("El producto del 1 al 15 es: %d\n",Suma);
    //Factoriales del 1 al 5 
    
    printf("Numero\tFactorial\n");
    //empieza el primer ciclo para calcular del 1 al 5
    for (int i = 1;i<=5;i++){
        Entero = 1;
        //en entero empieza en 1 para luego ser multiplicado
        //se hace otro ciclo del 1 al numero de iteracion
        for (int j = 1;j<=i;j++){
            //al entero se multiplica por en numero de iteracion dentro del segundo ciclo
            Entero *= j;
            
        }
        printf("%d\t%d\n",i,Entero);
    }
    //Limite de credito
    int NumeroDeCuenta = 0;
    int LimiteCredito = 0;
    int SaldoActual = 0;

    //se hace un ciclo para 3 clientes
    for (int i = 1;i<=3;i++){
        printf("Ingrese el numero de cuenta del cliente %d\n",i);
        scanf("%d",&NumeroDeCuenta);
        printf("Ingrese el limite de credito pasado del cliente %d\n",i);
        scanf("%d",&LimiteCredito);
        printf("Ingrese el saldo actual del cliente %d\n",i);
        scanf("%d",&SaldoActual);

        //se calcula si el limite de credito entre 2 es menor que el saldo actual del cliente
        if ((LimiteCredito/2)<SaldoActual){
            
            printf("Cliente %d con el numero de cuenta de %d excede el limite nuevo",i,NumeroDeCuenta);
        }
    }
    //Grafico de barras
    
    //se hace un ciclo para ingresar 5 veces
    for (int i = 1;i<=5;i++){
        puts("Ingrese un entero entre 1 y 30");
        scanf("%d",&Entero); 

        Entero = (Entero>30 ? 30 : Entero); // si el numero es mayor que 30 lo pone a 30, si no se queda igual
        Entero = (Entero<1 ? 1 : Entero); // si el numero es menor que 1 lo pone a 1, si no se queda igual
        //se hace otro ciclo del 1 hasta el numero que ingreso el usuario
        for (int j = 1;j<=Entero;j++){
            printf("*");
        }
        //se pone un puts para hacer salto de linea para la siguiente iteracion
        puts("");
    }
    //Calculo de ventas
    float ValorTotal = 0;
    int NumProducto = 1;
    int NumVendido = 1;
    //se hace un ciclo para los 5 productos que hay
    for (NumProducto;NumProducto<=5;NumProducto++){

        printf("Cuantas veces se vendio el producto %d\n",NumProducto);
        scanf("%d",&NumVendido);
        //se abre un switch para sumar al valor total el precio del producto correspondiente, multiplicado por la cantidad que se vendio ingresado por el usario
        switch (NumProducto)
        {
        case 1:
            ValorTotal += (2.98 * NumVendido);
            break;
        case 2:
            ValorTotal += (4.50 * NumVendido);
            break;
        case 3:
            ValorTotal += (9.98 * NumVendido);
            break;
        case 4:
            ValorTotal += (4.49 * NumVendido);
            break;
        case 5:
            ValorTotal += (6.87 * NumVendido);
            break;
    }
    }
    printf("La cantidad vendida en la semana pasada es $%f\n",ValorTotal);

    //Calculo de salario semanal
    

    int Codigo = 0;
    puts("Ingresa el codigo del primer empleado");
    scanf("%d",&Codigo);
    double Salario = 0;
    int Horas = 0;
    int Productos = 0;
    //mientras que el codigo no sea el EOF se repite infinitamente
    while (Codigo != EOF){
        //se abre un switch para determinar el codigo del empleado
        switch (Codigo)
        {
        case 1: //si el codigo es uno, se hace el calculo de gerente
        puts("Cual es el salario fijo semanal");
        scanf("%lf",&Salario);
        printf("El salario del gerente es %.2lf\n",Salario);
        break;
        case 2: //si el codigo es dos, se hace el calculo de trabajador por hora
        puts("Cual es el salario fijo semanal");
        scanf("%lf",&Salario);
        puts("Cuantas horas trabajaron esta semana");
        scanf("%d",&Horas);
        //si las horas son mas de 40, se le suma al salario total el tiempo y medio calculado para el salario
        printf("El salario del trabajador por hora es %.2lf\n",(Horas*Salario)+(Horas > 40 ? ((Horas-40)*(Salario+Salario/2)) : 0));
        break;
        case 3: //si el codigo es tres, se hace el calculo de trabajador por comision
        puts("Cuantas fueron sus ventas brutas esta semana");
        scanf("%d",&Productos);
        printf("El salario del trabajador por comision es %.2lf\n",250+(Productos*0.057));
        break;
        case 4: //si el codigo es cuatro, se hace el calculo de trabajador por pieza
        puts("Cual es la cantidad fija por cada articulo producido");
        scanf("%lf",&Salario);
        puts("Cuantos productos producieron");
        scanf("%d",&Productos);
        printf("El salario del trabajador por pieza es %.2lf\n",Salario*Productos);
        break;
        }
        puts("Ingresa el codigo del siguiente empleado (EOF para salir)");
        scanf("%d",&Codigo);
    }
    

    //Leyes de morgan
    //!(x < 5) && !(y >= 7) es igual a (x >= 5) && (y < 7)
    //!(a == b) || !(g != 5) es igual a !((a == b) && (g != 5)), el cual tambien es igual a !(a == b) || (g == 5)
    //!((x <= 8) && (y > 4)) es igual a (!(x <= 8) || !(y > 4)), el cual tambien es igual a ((x > 8) || (y <= 4))
    //!((i > 4) || (j <= 6)) es igual a (!(i > 4) && !(j <= 6)), el cual tambien es igual a ((i <= 4)&&(j > 6))

    int x = 10; int y = 9;
    int a = 3; int b = 3; int g = 5;
    int i = 6; int j = 7;
    //se usan parentesis para mantener el orden, y && para juntar las expresiones para que se verifique que todas son iguales
    if (!((!(x < 5) && !(y >= 7)) && ((x >= 5) && (y < 7)))){
        puts("Las primeras expresiones son iguales");
    }
    if ((!(a == b) || !(g != 5)) && !((a == b) && (g != 5)) && (!(a == b) || (g == 5))){
        puts("Las segundas expresiones son iguales");
    }
    if (!((x <= 8) && (y > 4)) && (!(x <= 8) || !(y > 4)) && ((x > 8) || (y <= 4))){
        puts("Las terceras expresiones son iguales");
    }
    if (!(!((i > 4) || (j <= 6)) && (!(i > 4) && !(j <= 6)) && ((i <= 4)&&(j > 6)))){
        puts("Las cuartas expresiones son iguales");
    }
    //Numeros romanos
    puts("Numero\tRomano");
    int Unidades = 0;
    int Decenas = 0;
    int Centenas = 0;
    //se hace un ciclo del 1 al 100 para calcular su numero romano
    for (int i = 1;i<=100;i++){
        //se calculan las unidades, decenas y centenas, usando el modulo, asi sale el digito en esa posicion
        Unidades = i % 10; 
        Decenas = i/10 % 10;       
        Centenas = i/100 % 10; 

        printf("%d\t",i); //se imprime primero el numero
        //se abren los casos switch, para las centenas, decenas y unidades
        //cada caso imprime sin saltar lineas para imprimir en la posicion de numeros romanos, y para que se puedan añadir mas cuando los demas casos pasen
        switch (Centenas){
            case 1:
            printf("C");
            break;
        }
        switch (Decenas){
            case 9:
            printf("XC");
            break; 
            case 8:
            printf("LXXX");
            break; 
            case 7:
            printf("LXX");
            break; 
            case 6:
            printf("LX");
            break; 
            case 5:
            printf("L");
            break;             
            case 4:
            printf("XL");
            break;        
            case 3:
            printf("X");
            case 2:
            printf("X");
            case 1:
            printf("X");
            break;

        }
        switch (Unidades){
            case 9:
            printf("IX");
            break; 
            case 8:
            printf("VIII");
            break; 
            case 7:
            printf("VII");
            break; 
            case 6:
            printf("VI");
            break; 
            case 5:
            printf("V");
            break;             
            case 4:
            printf("IV");
            break;        
            case 3:
            printf("I");
            case 2:
            printf("I");
            case 1:
            printf("I");
            break;

        }
        puts(""); // se pone un puts vacio al final para hacer un salto y hacer el siguiente calculo para el siguiente numero
    }

    
    return 0;
}