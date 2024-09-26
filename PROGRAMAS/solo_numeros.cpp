//validacion de solo numeros o solo letras

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int validar_num(char numero[50]);
int validar_cadena(char cadena[50]);

	int sw;
	char numero[50], nombre[50];
	char cadena[50];
	
main()	//inicio del main
{

	
	fflush(stdin);
	puts("Ingresa caracteres binarios:");
	gets(numero);
		
	sw = validar_num(numero);
	
	if(sw==0)
	{
		puts("Numero valido");
	}
	
	else
	{
		puts("Numero invalido");
	}
	
	puts("\n");
	
	fflush(stdin);
	printf("Ingresa una cadena de caracteres \n [solo puede contener A y B] ");
	gets(nombre);
	
	sw = validar_cadena(nombre);
	
	if(sw==0)
	{
		puts("Nombre valido");
	}
	
	else
	{
		puts("Nombre invalido");
	}
	
}	//fin del main

int validar_num(char[50])
{
	int i=0, sw=0,j;
	
	j=strlen(numero);	
	
	while(i<j && sw==0)
	{
		if(isdigit(numero[i]) !=0)
		{
			i++;
		}
		else
		{
			sw=1;
		}
	}
	
	return sw;
	
}	//fin funcion

int validar_cadena(char[50])
{
	int i=0, sw=0,j;
	
	j=strlen(cadena);
	
	while(i<j && sw==0)
	{
		if(isalpha(cadena[i]) !=0)
		{
			i++;
		}
		else 
		{
			sw=1;
		}
	}
	
	return sw;
	
} //return de la funcion


