#include"stdio.h"
#define TAM 50
float orden();
int imprimirList();
int asignar();
float pivote;
float calif[TAM]={100,95,80,100,90,85,100,90,90,60,65,80,100,95,85};
float listMayor[TAM],listMenor[TAM];
main()
{
	orden();
	imprimirList();
	asignar();
	imprimir();
	return 0;
}
/*funcion para asignar el valor*/
/*ordenamiento inicial*/
float orden()
{
	int i=0,o=0,m=0,j=0;
	pivote=calif[0];
	while(calif[i]!=0)
	{
		printf("\nlos elementos a comparar son %.f y %.f\n",calif[i+1],pivote);
		if(calif[i+1]>pivote)
		{
			printf("%.f es de la lista Mayor:\n",calif[i+1]);
			
			if(calif[i+1]==0)
			{
			}else{
			listMayor[m]=calif[i+1];
			m=m+1;
			}
				
		}else{
			printf("%.f es de la lista Menor:\n",calif[i+1]);
			if(calif[i+1]==0)
			{
			}else{
			listMenor[o]=calif[i+1];
			o=o+1;
			}
			
		}
		i++;
	}
	i=0,j=0;
	asignar();
	orden();
}
/*imprimir listas*/
int imprimirList()
{
	printf("\nla lista menor:\n");
	int i=0;
	for(i=0;listMenor[i]!=0;i++)
	{
		printf("%.f ",listMenor[i]);	
	}
	printf("\nla lista Mayor:\n");
	i=0;
	for(i=0;listMayor[i]!=0;i++)
	{
		printf("%.f ",listMayor[i]);	
	}
}
/*imprimir calificacion*/
int imprimir()
{
	int i=0;
	printf("calificaciones:\n");
	for(i=0;/*calif[i]!=0*/i<40;i++)
	{
		printf("%.f ",calif[i]);	
	}
}
/*asignar nuevos valores a calif[TAM]*/
int asignar()
{
	int i=0,j=0,m=0;
	while(listMenor[i]!=0)
	{
		calif[j]=listMenor[i];
		i++;
		j++;
	}
	m=0;
	while (listMenor[m]!=0)
	{
		listMenor[m]=0;
		m++;
	}
	calif[j]=pivote;
	j++;
	i=0;
	while(listMayor[i]!=0)
	{
		calif[j]=listMayor[i];
		i++;
		j++;
	}
	m=0;
	while (listMayor[m]!=0)
	{
		listMayor[m]=0;
		m++;
	}
	while (calif[j]!=0)
	{
		calif[j]=0;
		j++;
	}
}
