/* Este programa esta elaborado con la finalidad de calcular un numero factorial, multiplicar y sumar una cantidad de numeros usando la recursividad*/
#include"stdio.h"
int numero;
int Fact(int numero);
int Prod(int numero);
int n;	
main()
{	
	int Producto,Suma;
	/*en este segmento pedimos al usuario un numero y despues llamamos a la funcion Fact(int numero) para que calcule el factorial*/
	printf("ingrese el numero al que desee calcularle el factorial\n");
	scanf("%i",&numero);//lectura de valor de numero
	Fact(numero);/*llamada a funcion*/
	printf("el factorial es: \n");
	printf("%i",Fact(numero));
	numero=0;/*inicializamos la variable*/
	/*llamada a la funcion Prod(int n)*/
	printf("\n ingrese la cantidad de numeros que desee multiplicar: ");
	scanf("%i",&n);
	n=n+1;
	Producto = Prod(numero);
	printf("%i",Producto);
	printf("\n ingrese la cantidad de numeros que desee sumar: ");
	scanf("%i",&n);
	n=n+1;
	Suma= Sum(numero);
	printf("%i",Suma);
}
int Fact(int numero)
{
	if ( numero <= 1 )
	{
		// evalúa el caso base
		return 1;
		}// casos base: 0! = 1 y 1! = 1
		else{ // paso recursivo
		return numero * Fact( numero - 1);
	}
}
int Prod(int numero)
{
	if(n<=1){
		return 1;
	}else{
	printf("ingrese el numero ");
	scanf("%i",&numero);
	n--;
	return numero*Prod(numero);
	}
}
int Sum(int numero)
{
	if(n<=1){
		return 0;
	}else{
	printf("ingrese el numero ");
	scanf("%i",&numero);
	n--;
	return numero+Sum(numero);
	}
}

