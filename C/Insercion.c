#include"stdio.h"
#define TAM 16
float calif[TAM]={100,95,80,100,90,85,100,90,90,60,65,80,100,95,85};
float Orden[TAM];
float ordenar();
int i=0;

int main()
{
	ordenar();
	return 0;
}
float ordenar()
{
	while(calif[i]!=0)
	{
		printf("\nlos elementos a comparar son %.f y %.f",calif[i],calif[i+1]);
		while(calif[j]<calif[j+1])
		if(calif[j]>calif[i+1]){
			
		}
	i++;
	}
}
