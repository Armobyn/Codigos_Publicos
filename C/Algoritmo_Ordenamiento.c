#include"stdio.h"
#define TAM 16
float calif[TAM]={100,95,80,100,90,85,100,90,90,60,65,80,100,95,85};
float listMenor[TAM];
float listMenor2[TAM];
float listMayor[TAM];
float listMayor2[TAM];
float orden();
int m=0;
float pivote;
int imprimirListas();
int tammenor, tammayor;
int main()
{
	//imprimir();
	int i=0,o=0,m=0;
	
	float pivote=calif[0];
	while(calif[i]!=0)
	{
		printf("\nlos elementos a comparar son %.f y %.f\n",calif[i+1],pivote);
		if(calif[i+1]>pivote)
		{
			printf("%.f es de la lista Mayor:\n",calif[i+1]);
			listMayor[m]=calif[i+1];
			m=m+1;	
		}else{
			printf("%.f es de la lista Menor:\n",calif[i+1]);
			listMenor[o]=calif[i+1];
			o=o+1;
		}
		i++;
		
	}
	
	orden();
	imprimirListas();
	printf("la lista ordenada es:\n");
	imprimir();
}
/*funcion que imprime la calidçficacion del alumno*/
int imprimir()
{
	int i=0;
	for(i=0;calif[i]!=0;i++)
	{
		printf("%.f ",calif[i]);	
	}
}
/*funcion para obtener tamaño de array*/
int tam()
{
	int i=0;
	printf("\nla lista menor es \n");
	for(i=0;listMenor[i]!=0;i++)
	{
		printf("%.f ",listMenor[i]);	
	}
	tammenor=i;
	int j=0;
	printf("\nla lista mayor es \n");
	for(j=0;listMayor[j]!=0;j++)
	{
		printf("%.f ",listMayor[j]);	
	}
	tammayor=j;
}

/*funcion de ordenamiento*/
float orden()
{
	
	int i=0,o=0, m=0;
	calif[0]=listMayor[m]+pivote+listMenor[o];
	tam();
	if(tammenor==0&&tammayor==0)
	{
		return listMayor[i+1],listMenor[i+1];
	}else{	
	
	float pivote=listMenor[0];
	while(listMenor[i]!=0)
	{
		printf("\nlos elementos a comparar son %.f y %.f\n",listMenor[i+1],pivote);
		if(listMenor[i+1]>pivote)
		{
			printf("%.f es de la lista Mayor:\n",listMenor[i+1]);
			listMayor[m]=listMenor[i+1];
			m=m+1;	
		}else{
			printf("%.f es de la lista Menor:\n",listMenor[i+1]);
			listMenor[o]=listMenor[i+1];
			o=o+1;
		}
		i++;	
	}
	while(listMayor[i]!=0)
	{
		printf("\nlos elementos a comparar son %.f y %.f\n",listMenor[i+1],pivote);
		if(listMayor[i+1]>pivote)
		{
			printf("%.f es de la lista Mayor:\n",listMayor[i+1]);
			listMayor[m]=listMayor[i+1];
			m=m+1;	
		}else{
			printf("%.f es de la lista Menor:\n",listMayor[i+1]);
			listMenor[o]=listMayor[i+1];
			o=o+1;
		}
		i++;	
	}
	return (orden()+orden());
	}
	
}
/*imprimir listas*/
int imprimirListas()
{
	printf("\nla lista menor:");
	int i=0;
	for(i=0;listMenor[i]!=0;i++)
	{
		printf("%.f ",listMenor[i]);	
	}
	printf("\nla lista Mayor:");
	i=0;
	for(i=0;listMayor[i]!=0;i++)
	{
		printf("%.f ",listMayor[i]);	
	}
}
