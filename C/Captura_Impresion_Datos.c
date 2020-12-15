#include<stdio.h>


char Alumno[20][20], Materia[20][20];
float Calificacion[20][20],Promedio[20][20];/* Declaracion del vector para almacenar los datos*/
int i = 0;
int n ;
int m = 4;
int j = 0;
int main()
{
while (i<1)
{
	printf("ingrese el nombre: \n");
	scanf("%s", Alumno[n,i]);
	for(j=m-4;j<m;j++)
	{
		printf("ingrese la materia: ");
		scanf("%s",Materia[n,j]);
		printf("ingrese la calificacion: ");
		scanf("%f",&Calificacion[n][j]);
		printf("%f \n",Calificacion[n][j]);
		Promedio[n][i]=Promedio[n][i] + Calificacion[n][j];
		int k;
		for (k=0;k<20;k++)
		{
			printf("%.2f \n",Promedio[n][k]);
		}
		
	}
	i++;
	m = m + 4;
}

i = 0;/*reiniciar variable a cero*/
j = 0;/*reiniciar variables*/

/* impresion de los datos recabados*/
for (i=0;i<4;i++)
{
	printf("\n");
	printf("nombre del alumno: ");
	printf("%s \n", Alumno[n,i] );
	Promedio[n][j] = Promedio[n][i++]/4;
	
	for (j=0;j<4;j++)
	{
		
		printf("%s \n",Materia[n, j]); /*imprime el nombre de la materia*/
		printf("%f \n",Calificacion[n][j]);/*imprime las calificaciones almacenadas*/
		printf("%f \n",Promedio[n][j]);
	}
	}













return 0;
/*Para acceder al elemento n y leer un valor de entrada:
	while(i<4)
	{
		printf("Introduzca su nombre: ");
		scanf("%s",&Alumno1);
		printf("%c \n",Alumno1[i]);
		i++;
	}*/
}









/*

printf("Lista de numeros: ");






for (i = 0; i < 4; i++)
{
	printf("%s ",Nombre_alumno[i]);
	
}
}*/
