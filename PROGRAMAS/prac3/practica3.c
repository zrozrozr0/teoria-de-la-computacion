/**       NOE RODRÍGUEZ OLMOS - 4CM2 - TEORÍA DE LA COMPUTACIÓN             **/
/**         FECHA DE CREACIÓN: 10/03/2022 - Versión: V.1.9.3                **/
/**                  ARCHIVO MAIN.C                                         **/

/*   Dado un archivo fuente .C detecte los símbolos correspondientes         */
/*                    de caracteres.                                         */

/** Para compilar cambiar el nombre en el apuntador al nombre del archivo
    debe de estar este main.c en la misma ruta que el archivo a analizar

    ej. char *archivo = "palindrimo.c"                                     **/

char *archivo = "practica1.c";

#include<sys/stat.h>
#include<fcntl.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include <errno.h>
#include <unistd.h>

int main(void){

    int c;
    int parentesis1=0,  parentesis2=0;
    int llaves1=0,      llaves2=0;
    int corchetes1=0,   corchetes2=0;
    int comma=0, semicolon=0, colon=0; // , ; :
    int trespuntos=0, asterisco=0, igual=0; //... * =
    int gato=0, iinvertida=0, porcentaje=0; // # ! %
    int poww=0, ampersump=0, menos=0, mas=0; // ^ & - +
    int disminuir=0, aumento=0; // -- ++
    int barravertical=0, tilden=0, barrainversa=0; // | ~
    int comilla=0, comilla2=0, mayor=0, menor=0;
    int mayorigual=0, menorigual=0, ask=0, dot=0, diagonal=0;
    int comment=0;
    int contadorenteros=0, contadordedecimales=0;
    char binversa=92, comilla1=39;

	FILE* archivo_1 = fopen(archivo, "r");

		while((c = fgetc(archivo_1)) != EOF){

            if(c == '<') (menor)++;
            if(c == '>') (mayor)++;
            if(c == '<=') (menorigual)++;
            if(c == '>=') (mayorigual)++;
            if(c == ',') (comma)++;
            if(c == ';') (semicolon)++;
            if(c == ':') (colon)++;
            if(c == '...') (trespuntos)++;
            if(c == '*') (asterisco)++;
            if(c == '=') (igual)++;
            if(c == '#') (gato)++;
            if(c == '!') (iinvertida)++;
            if(c == '%') (porcentaje)++;
            if(c == '^') (poww)++;
            if(c == '&') (ampersump)++;
            if(c == '-') (menos)++;
            if(c == '+') (mas)++;
            if(c == '--') (disminuir)++;
            if(c == '++') (aumento)++;
            if(c == '|') (barravertical)++;
            if(c == '~') (tilden)++;
            if(c == binversa) (barrainversa)++;
            if(c == comilla1) (comilla)++;
            if(c == '"') (comilla2)++;
            if(c == '?') (ask)++;
            if(c == '.') (dot)++;
            if(c == '/') (diagonal)++;
            if(c == '(') (parentesis1)++;
            if(c == ')') (parentesis2)++;
            if(c == '[') (corchetes1)++;
            if(c == ']') (corchetes2)++;
            if(c == '{') (llaves1)++;
            if(c == '}') (llaves2)++;
            /**DIGITOS**/
            if(c == '1')(contadorenteros)++;
            if(c == '2')(contadorenteros)++;
            if(c == '3')(contadorenteros)++;
            if(c == '4')(contadorenteros)++;
			if(c == '5')(contadorenteros)++;
            if(c == '6')(contadorenteros)++;
            if(c == '7')(contadorenteros)++;
            if(c == '8')(contadorenteros)++;
            if(c == '9')(contadorenteros)++;
            if(c == '0')(contadorenteros)++;
            if(c == '.0')(contadordedecimales)++;
            if(c == '.1')(contadordedecimales)++;
            if(c == '.2')(contadordedecimales)++;
            if(c == '.3')(contadordedecimales)++;
            if(c == '.4')(contadordedecimales)++;
            if(c == '.5')(contadordedecimales)++;
            if(c == '.6')(contadordedecimales)++;
            if(c == '.7')(contadordedecimales)++;
            if(c == '.8')(contadordedecimales)++;
            if(c == '.9')(contadordedecimales)++;
            /**OPERACIONES**/

}


	fclose(archivo_1);

    printf(" \n *archivo = practica1.c \n");
	printf("\n Conteo de caracteres dentro del archivo cargado en el codigo\n y en la misma ruta que el programa\n");
    printf("\n Puntuadores:\n");
    printf("\n Caracteres  \t Caracteres  \t Caracteres  \t Caracteres  ");
	printf("\n  < -> %d  \t  > -> %d  \t  { -> %d  \t  } -> %d  \n",menor,mayor,llaves1,llaves2);
    printf("\n Caracteres  \t Caracteres  \t Caracteres  \t Caracteres  ");
	printf("\n  [ -> %d  \t  ] -> %d  \t  ( -> %d  \t  ) -> %d  \n",corchetes1,corchetes2,parentesis1,parentesis2);
    printf("\n Caracteres  \t Caracteres  \t Caracteres  \t Caracteres  ");
	printf("\n  , -> %d  \t  ; -> %d  \t  : -> %d  \t  ... -> %d\n",comma,semicolon,colon,trespuntos);
    printf("\n Caracteres  \t Caracteres  \t Caracteres  \t Caracteres  ");
	printf("\n  * -> %d  \t  = -> %d  \t  # -> %d  \t  ! -> %d  \n",asterisco,igual,gato,iinvertida);
    printf("\n Caracteres  \t Caracteres  \t Caracteres  \t Caracteres  ");
	printf("\n  % -> %d   \t  ^ -> %d   \t  & -> %d   \t  - -> %d  \n",comma,semicolon,colon,trespuntos);
    printf("\n Caracteres  \t Caracteres  \t Caracteres  \t Caracteres  ");
	printf("\n  + -> %d  \t  -- -> %d  \t  ++ -> %d  \t  | -> %d\n",mas,disminuir,aumento,barravertical);
    printf("\n Caracteres  \t Caracteres  \t Caracteres  \t Caracteres  ");
	printf("\n  %c -> %d  \t  ' -> %d  \t  ++ ->   \t  | -> \n",binversa,barrainversa,comilla);
    printf("\n Digitos:\n");
    printf("El numero de digitos decimales es: %d\n",contadordedecimales);
    printf("El numero de digitos enteros es: %d\n",contadorenteros);
    printf("\n Identificadores \n");
    printf("\n n \n opc \n letra1 \n letra2 \n");
	exit(EXIT_SUCCESS);
	return 0;
}
