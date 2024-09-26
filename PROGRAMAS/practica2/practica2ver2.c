/**       NOE RODRÍGUEZ OLMOS - 4CM2 - TEORÍA DE LA COMPUTACIÓN             **/
/**         FECHA DE CREACIÓN: 10/03/2022 - Versión: V.1.9.3                **/
/**                  ARCHIVO MAIN.C                                         **/

/*  Programa que dado un alfabeto Σ={0,1}, realice operaciones con cadenas   */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int longitud(char* cadena);
int igualdad=0;
char cad1[10],cad2[10];
char* prefijo(char* cad, int n);
char* subfijo(char* cad, int n);


char* subcad(char* cad, int n, int m);
char *subsec(char* cad, char* carac);
typedef char * string;
void str(string *);
int str_ispalindrome(string);                           /*al invertir la cadena verifica si es palindromo*/
void opinvertir_cadenas(string, string);                /*obtener el inverso de las cadenas*/
void imprimiropc_menu(string[], string, int);
void cadenas_copiar(string, string);
int cad11, cad22;

int main(int argc, char const *argv[])
{
	int loop,res,pre,sub,pot,respot=0;
	char *cad1 = (char*)malloc(sizeof(char)*5);
	char *cad2 = (char*)malloc(sizeof(char)*5);
	char *elem = (char*)malloc(sizeof(char)*5);
	printf("Opeaciones con cadenas\n");
	printf("\nRodriguez Olmos Noe - 4SCM2\n");
    printf("\nIngresa una cadena binaria    - Ej. (U): 0 (V): 1");
    printf("\no tambien una cadena de texto - Ej. (U): A (V): B\n");
    printf("\nIngresa la 1ra cadena (U):  ");
    fflush(stdin);
    scanf("%[^\n]s", cad1);
    printf("Ingresa la 2da cadena (V):  ");
    fflush(stdin);
    scanf("%[^\n]s", cad2);

	do
	{
		printf("Elige una opcion:\n");
		printf("1.Calcular la longitud de cadenas\n2.Comparar cadenas\n3.Palindromo\n");
        printf("4.Reemplazo de cadena\n5.Quitar espacios en blanco\n6.Complemento a 1\n7.Busqueda de una cadena dentro de otra\n");
		scanf("%d",&res);
		switch(res)
		{
			case 1:
				printf("Calcular longitud\n");
				printf("\nCadenas en el programa:");
                printf("\n1ra cadena (U): %s, longitud de: %d caracter(es)", cad1, longitud_cadena(cad1));
                printf("\n2da cadena (V): %s, longitud de: %d caracter(es)\n", cad2, longitud_cadena(cad2));


			break;
			case 2:
                printf("\nComparar cadenas\n");
			    printf("\n1ra cadena (U): %s", cad1);
                printf("\n2da cadena (V): %s\n", cad2);
				printf("\n %d", compararPalabras(10,cad1,cad2));

			break;
			case 3:
			    printf("\ninvetir ambas (UV y VU)");
                opinvertir_cadenas(cad11 , cad1);
                opinvertir_cadenas(cad22 , cad2);
                printf("\ncadenas iniciales:\n  %s\n  %s", cad1, cad2);
                printf("\nres =\n  %s\n  %s\n", cad11, cad22);
                break;

			case 4:
				printf("Reemplazo de cadena\n");
				printf("Ingresa el largo del prefijo\n");
				scanf("%d",&pre);
				printf("Ingresa el largo del subfijo\n");
				scanf("%d",&sub);
				printf("Subcadena Cadena1\n");
				printf("%s\n",subcad(cad1,sub,pre));
				printf("Subcadena Cadena2\n");
				printf("%s\n",subcad(cad2,sub,pre));
			break;
			case 5:
				printf("Quitar espacios en blanco\n");
				printf("La cadeana1 es %s\n",cad1);
				printf("Caracteres en blanco a quitar de esa cadena\n");
				scanf("%s",elem);
				printf("res cadeana1\n");
				printf("%s\n",cblanc(cad1,elem));
				printf("La cadeana2 es %s\n",cad2);
				printf("Caracteres en blanco a quitar de esa cadena\n");
				scanf("%s",elem);
				printf("res cadeana1\n");
				printf("%s\n",cblanc(cad2,elem));
			break;
			case 6:
				printf("Complemento a 1\n");

			break;
			case 7:
				printf("Busqueda de una cadena dentro de otra\n");
				/*printf("De que cadena deseas obtener la potencia\n1.Cadena1\n2.Cadena2");
				scanf("%d",&respot);
				switch(respot)
				{
					case 1:
						printf("Ingresa el n(numero al que se elevara la cadena)\n");
						scanf("%d",&pot);
						potencia(cad1,pot);
					break;
					case 2:
						printf("Ingresa el n(numero al que se elevara la cadena)\n");
						scanf("%d",&pot);
						potencia(cad2,pot);
					break;
				}*/
			break;
		}
		printf("1.Volver al menu\n2.Salir");
		scanf("%d",&loop);
		system("cls");
	}while(loop != 2);
	return 0;
}


void str(string * str) {
    int i;
    *str = (string)malloc(255);
    for (i = 0; i < 255; i++) {
        *((*str) + i) = 0;
    }}

int longitud_cadena(string str) {
    int i = 0;
    while (*(str + i) != 0)
        i++;
    return i;}

int longitud(char* cadena)
{
	int i = 0, tam = 0;
	while(cadena[i] != '\0')
	{
		tam = tam + 1;
		i++;
	}
	return tam;
}


void compararPalabras(int longitud, char cad1[],char cad2[]){

 for (int i=0; i<longitud ; i++)
{
      if(cad1[i]!=cad2[i])
        igualdad=-1;}
if(igualdad==0)
  printf("Las palabras son identicas\n");
 else
  printf("Las palabras son distintas\n");
}


void cadenas_copiar(string destination, string origin) {
    int i = 0;
    while (*(origin + i) != 0) {
        *(destination + i) = *(origin + i);
        i++;}
    *(destination + i) = 0;}

void opinvertir_cadenas(string destination, string origin) {
    int i, j = 0;

    if(str_ispalindrome(origin)) {
        cadenas_copiar(destination, "La cadena es un palindromo");
        return;}

    for (i = longitud_cadena(origin) - 1; i >= 0; --i) {
        *(destination + j) = *(origin + i);
        j++;}
    *(destination + i) = 0;}

int str_ispalindrome(string str) {
    int i;
    for (i = 0; i < longitud_cadena(str); i++) {
        if(*(str + i) != *(str + longitud_cadena(str) - i - 1))
            return 0;}
    return 1;}


char* cblanc(char* cad, int n)
{
	char* aux = (char*)malloc(sizeof(longitud(cad))*n);
	int lon = longitud(cad);
	if(lon < n)
	{
		printf("ERROR\n");
	}
	else if(lon == n)
	{
		printf("%s\n",004);
	}
	else
	{
		int i;
		int k = lon - n;
		for (i = 0; i < k ; i++)
        {
            aux[i] = cad[i];
        }
        aux[i] = '\0';
        return aux;
	}

}


char* cblanc1(char* cad, int n)
{
	char* aux = (char*)malloc(sizeof(longitud(cad)));
	int lon = longitud(cad);
	if(lon < n)
	{
		printf("ERROR\n");
	}
	else if( lon == n)
	{
		printf("%s\n",004);
	}
	else
	{
		int i,x;
		for (i=n ,x = 0;i < lon ;i++,x++) // SE PONE COMO INICO DEL FOR DESDE N PARA QUITAR LO DEL PRINCIOPI
        {
            aux[x] = cad[i]; //SE GUARDA EN EL AUXILIAR
        }
        aux[x]='\0';

        return  aux;
	}
}


char* complemento1(char* cad, char* carac)
{
	char *aux = (char*)malloc(sizeof(longitud(cad)-longitud(carac)));
	int i =0, j=0,k=0;
	if (longitud(cad) < longitud(carac))
	{
		printf("ERROR\n");
	}
	else if(longitud(cad) == longitud(carac))
	{
		printf("Cadena vacia\n");
	}
	else
	{
		while(cad[i] != '\0')
		{
			if(cad[i] == carac[j])
			{
				j++;
			}
			else
			{
				aux[k] = cad[i];
				k++;
			}
			i++;
		}
	}
	return aux;
}
