#include"stdio.h"
#define TAM 50
char Resultados[];
float Porcentaje;
int result(),clasif(),contF=0,contA=0;
int n=0,Cantidad=0;
main()
{
	result();
	clasif();
	printf("La cantidad de Alumnos que aprobaron es de %i \nLa cantidad de Alumnos que reprobaron es de %i \n",contA,contF);
	aprob();
	system("\n pause");
	return 0;
}

/*funcion para solicitar los resultados del examen*/
int result()
{
	printf("ingrese la cantiad de alumnos que desea ingresar:");
	scanf("%i",&Cantidad);
	printf("ingrese sus resultados: A = Aprobado, F = Reprobado\n");
	for(n=0;n<Cantidad;n++)
	{
		while(Resultados[n]!='f'&&Resultados[n]!='F'&&Resultados[n]!='A'&&Resultados[n]!='a')
		{
			printf("Alumno %i:\n",n);
			scanf("%s",&Resultados[n]);
		}		
	}
}
/*función que cuenta el número de resultados de cada tipo*/
int clasif()
{

	for(n=0;Resultados[n]!=0;n++)
	{
		if(Resultados[n]=='f'||Resultados[n]=='F')
		{
			contF++;
		}else{
			if(Resultados[n]=='a'||Resultados[n]=='A')
			{
				contA++;
			}
		}	
	}
	
}
/*Si aprobaron el examen más de 70% de los estudiantes, 
el programa debe imprimir el mensaje "lo lograste Objetivo 
cumplido" de lo contrario el mensaje será "Se requiere fortalecer la enseñanza". */
int aprob()
{
	Porcentaje = contA*100/Cantidad;
	printf("el porcentaje de alumnos aprobados es: ");
	printf("%.2f",Porcentaje);
	printf("%c \n",37);
	if(Porcentaje>70)
	{
		printf("lo lograste Objetivo cumplido");
	}else{
		printf("Se requiere fortalecer la ense%canza",164);
	}
}
