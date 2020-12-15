#include"stdio.h"
#include"math.h"
/* declaracion de funciones*/
float Solicitar();
float Discrim();
void TipoR();
/*declaracion de variables globales */
float a,b,c,Discriminante,Resultado, Resultado2;
main()
{
	Solicitar(a,b,c);
	Discrim(Discriminante);
	printf("como ");
	TipoR();
}
/*funcion que solicitara los datos*/
float Solicitar()
{
	printf("\ningrese el valor de A:");
	scanf("%f",&a);
	printf("\ningrese el valor de B:");
	scanf("%f",&b);
	printf("\ningrese el valor de C:");
	scanf("%f",&c);
}
/*funcion que calcula el valor de la discriminante*/
float Discrim()
{
	Discriminante = b*b-4*a*c;
}
/*funcion para impresion de pantalla mostrando el tipo de raiz*/
void TipoR()
{
	if (Discriminante<0)
	{
		printf("la raiz es imaginaria, no existe una solucion real");
	}
	if (Discriminante==0)
	{
		printf("la raiz es unica, el resultado es: ");
		Resultado = (-b+sqrt(Discriminante))/2*a;
		printf("%.2f",Resultado);
	}
	if(Discriminante>0)
	{
		printf("la raiz tiene dos soluciones, los resultados son:\n");
		Resultado = (-b+sqrt(Discriminante))/2*a;
		Resultado2 = (-b-sqrt(Discriminante))/2*a;
		printf("%.2f",Resultado);
		printf("\n");
		printf("%.2f",Resultado2);
	}
}
