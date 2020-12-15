#include"stdio.h"
#define TAM 9
int Julio7[TAM]={310516,357527,18073,37248,404667,28954}, Julio8[TAM]={317672,364607,18642,37851,404667,28954},i=0,j=0,Diferencia[TAM];
int num=0,k=0;
main()
{
	//Entrada();
	Procesamiento();
	salida();
	return 0;
}
int Entrada()
{
	printf("ingrese los datos en el orden siguiente\nCONFIRMADOS\nNEGATIVOS\nSOSPECHOSOS\nDEFUNCIONES\nRECUPERADOS\nACTIVOS\n");
	printf("para el 7 de julio:\n");
	for(i=0;i<6;i++)
	{
		scanf("%i",&Julio7[i]);
	}
	printf("para el 8 de julio:\n");
	for(i=0;i<6;i++)
	{
		scanf("%i",&Julio8[i]);
	}
}
int Procesamiento()
{
	for(i=0;i<6;i++)
	{
		Diferencia[i]=Julio8[i]-Julio7[i];
	}
}
int salida()
{
	printf("\n%c     FECHA   %c  CONFIRMADOS  %c  NEGATIVOS    %c  SOSPECHOSOS  %c  DEFUNCIONES  %c  RECUPERADOS  %c ACTIVOS     %c \n",186,186,186,186,186,186,186,186);
	imprimirLinHor();
	printf("  07-07-2020  ");
	for(i=0;i<6;i++)
	{
		imprimirLinVert();
		printf("  %i",Julio7[i]);
		num=Julio7[i];
		j=1;
		k=0;
		while(num/10>0)
		{
			num=num/10;
        	j++;
		}
		if(j<13)
		{
			for(k=0;k<13-j;k++)
			printf(" ");
			
		}
	}
	printf("\n");
	imprimirLinHor();
	printf("\n");
	printf("  08-07-2020  ");
	for(i=0;i<6;i++)
	{
		imprimirLinVert();
		printf("  %i",Julio8[i]);
		num=Julio8[i];
		j=1;
		k=0;
		while(num/10>0)
		{
			num=num/10;
        	j++;
		}
		if(j<13)
		{
			for(k=0;k<13-j;k++)
			printf(" ");
			
		}
	}
	printf("\n");
	imprimirLinHor();
	printf("\n");
	printf("  casos nuevos");
	for(i=0;i<6;i++)
	{
		imprimirLinVert();
		printf("  %i",Diferencia[i]);
		num=Diferencia[i];
		j=1;
		k=0;
		while(num/10>0)
		{
			num=num/10;
        	j++;
		}
		if(j<13)
		{
			for(k=0;k<13-j;k++)
			printf(" ");
			
		}
	}
	printf("\n");
	imprimirLinHor();
	
	
}
int imprimirLinHor()
{
	printf("  ");
	for(i=0;i<106;i++)
	{
		printf("%c",45);
	}
	printf("%c\n",45);
	
}
int imprimirLinVert()
{
		printf("%c",124);
}
