
#include"stdio.h"
#define TAM 16
int orden();
int ordenG();
int imprimL();
int Tamlist=0;
float calif[TAM][TAM]={{100,95,80,100,90,85,100,90,90,60,65,80,100,95,85},{}};
float aux[TAM],list1[TAM], list2[TAM];
int h=0,i=0,j=1,j2=2,k=0,l=0,n=0;

main()
{
	orden();
	imprimir();
	return 0;
}
/*imprimir array*/
int imprimir()
{
	int i=0,j=0;
	for(i=0;i<=14;i++)
	{
		printf("\n");
		//printf("\nla calificacion del alumno %i es:",i);
		for (j=0;j<=14;j++)
		{
			printf("%.f ",calif[i][j]);
		}
		
	}
	while(calif[k][Tamlist]!=0)
	{
		Tamlist++;
		
	}
	
}
/*imprimir las listas creadas*/
/*
*/
int orden()
{
	float pivote=calif[n][TAM/2];
	while(calif[k][i]!=0)
	{
		printf("\nlos elementos a comparar son %.f y %.f",calif[k][i],calif[k][TAM/2]);
		if(calif[k][i]>calif[k][TAM/2])
		{
			calif[j][l]=calif[k][i];
			l++;
			
			
		}else{
			calif[j2][h]=calif[k][i];
			h++;
		}
		i++;
		
	}
	Tamlist=0;
	while(calif[j][Tamlist]!=0)
	{
		Tamlist++;
		
	}
	n++;
	return orden();
}
int ordenG()
{
	int i=0;
	printf("\narreglo Calificacion: ");
	while (calif[i]!=0)
	{
		printf("\n%.1f",calif[i]);
		i++;
	}
}
int imprimL()
{
	int i=0;
	printf("\narreglo List1: ");
	while (list1[i]!=0)
	{
		printf("\n%.1f",list1[i]);
		i++;
	}
	//Tamlist1=i+Tamlist1;
	i=0;
	printf("\narreglo List2: ");
	while (list2[i]!=0)
	{
		printf("\n%.1f",list2[i]);
		i++;
	}
	//Tamlist2=i+Tamlist2;
}
