#include"stdio.h"
#define TAM 50
float orden();
int imprimirList();
int asignar();
float pivote;
float promedio(),NumModa,temp=0,temp2=0,CalificacionModa;
int i=0,cont=1,modaNum[TAM],j=0;
float suma=0;
float calif[TAM]={100,95,80,100,90,85,100,90,90,60,65,80,100,95,85};
float listMayor[TAM],listMenor[TAM];
main()
{
	printf("\ncalificaciones del alumno:\n");
	imprimir();
	orden();
	printf("\ncalificaciones del alumno ordenadas:\n");
	imprimir();
	promedio();
	printf("\nel promedio del alumno es:\n");
	printf("%.2f",suma);
	moda();
	printf("\nla calificacion del alumno que mas se repite es:\n");
	printf("%.2f",CalificacionModa);
	return 0;
}
float orden()
{
	int j=14;
	
	do{	
	for(i=0;calif[i]!=0;i++)
	{
		if(calif[i]>calif[i+1])
		{
			reorden();	
		}
	}
	j--;
	}while(calif[j]<calif[j-1]);
}
/*funcion reordenamiento*/
int reorden()
{
	temp=0,temp2=0;
	if (calif[i+1]!=0)
	{
		temp=calif[i];
		temp2=calif[i+1];
		calif[i+1]=temp;
		calif[i]=temp2;
	}
	
}
/*imprimir calificacion*/
int imprimir()
{
	int i=0;
	for(i=0;calif[i]!=0;i++)
	{
		printf("%.f ",calif[i]);	
	}
}
float promedio()
{
	for(i=0;calif[i]!=0;i++)
	{
		suma=suma+calif[i];
	}
	suma=suma/i;
	
}
int moda()
{
	for(i=0;calif[i]!=0;i++)
	{
		
		if(calif[i]==calif[i+1])
		{
			cont++;
			modaNum[i]=cont;
		}else{
			cont=1;
			modaNum[i]=cont;
		}	
	}
	ordenM();
}
int ordenM()
{
	int j=14;
	
	do{	
	for(i=0;modaNum[i]!=0;i++)
	{
		if(modaNum[i]>modaNum[i+1]&&modaNum[i+1]!=0)
		{
			temp=modaNum[i];
			CalificacionModa=calif[i];
			//temp2=modaNum[i+1];
			//calif[i+1]=temp;
			//calif[i]=temp2;
		}
	}
	j--;
	}while(modaNum[j]<modaNum[j-1]);
}
