#include"stdio.h"
#define TAM 50
char insertar();
void comprobar();
void menu();
void palindro();
char Pila[TAM];
int cima=0,i=0;
main()
{
	menu();
	palindro();
	
	return 0;
}
/*Funcion para insertar datos en la pila*/
char insertar()
{
	system("cls");/*limpiar pantalla*/
	comprobar();/*llamanado a la funcion comprobar()*/
	if(cima<TAM)
	{
		cima++;
		printf("inserte el caracter o cadena:\n");
		scanf("%s",&Pila[cima]);
	}else{
		printf("la pila esta llena");
	}
	menu();
}
/*Funcion para quitar datos de la pila*/
void quitar()
{
	system("cls");
	comprobar();
	if(cima>-1)
	{
		Pila[cima]='\0';
		cima--;
		printf("se ha quitado un elemneto\n");
	}else{
		printf("no se puede quitar, la pila esta vacia\n\n\n");
		system("pause");
	menu();	
}
}
/*comprube el estado de la pila*/
void comprobar()
{
	i=0;/*inicializar i=0*/
	for(i=0;Pila[i]!='\0';i++)
	{
	}
	cima=i-1;
}
/*limpia la pila*/
void limpiar()
{
	system("cls");
	i=0;
	for(i=0;Pila[i]!='\0';i++)
	{
		Pila[i]='\0';
	}
	printf("la pila ha sido limpiada\n\n");
	system("pause");
	menu();
}
/*imprimir la pila*/
void imprimir()
{
	system("cls");
	printf("la pila almacenada es:\n");
	int i=0;
	for(i=0;Pila[i]!='\0';i++)
	{
		printf("%c",Pila[i]);
	}
	printf("\n");
	system("pause");
	
	
	menu();
}
void menu()
{
	int opcion=0;
	system("cls");
	printf("\nintroducir la opcion deseada:\n");
	printf("\nimprimir la pila: 1\n");
	printf("\nlimpiar la pila: 2\n");
	printf("\nquitar un elemento de la pila: 3\n");
	printf("\nagregar un elemento de la pila: 4\n");
	printf("\npresiona cualquier tecla para salir\n");
	scanf("%i",&opcion);
	switch (opcion)
	{
		case 1:
			imprimir();
		break;
		case 2:
			limpiar();
		break;
		case 3:
			quitar();
		break;
		case 4:
			insertar();
		break;
		default:
		printf("ha salido del menu\n");	
	}
}
void palindro(int n)
{
	system("cls");
	//system("clear");
	
	comprobar();
	n=i-1;
	i=0;
	if (Pila[0]!='\0')
	{
		printf(" comprobar si %s es palindroma\n",Pila);
		while(n>=i)
	{
		if(Pila[i]==Pila[n])
		{
		printf("%c y %c son iguales\n",Pila[i],Pila[n]);
		n--;
		i++;			
		}else{
			n=0;
			i=1;
		}
	}
	if(n==0&&i==1)
	{
		printf("\nla cadena no es palindroma\n");
	}else{
		printf("\nla cadena es palindroma\n");
	}
	}else{
		printf("\n La pila esta vacia\n");
	}
	
}
