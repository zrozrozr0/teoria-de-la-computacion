/**       NOE RODRÍGUEZ OLMOS - 4CM2 - TEORÍA DE LA COMPUTACIÓN             **/
/**         FECHA DE CREACIÓN: 10/03/2022 - Versión: V.1.9.3                **/
/**                  ARCHIVO MAIN.C                                         **/

/*   Dado un archivo fuente .C detecte los símbolos correspondientes         */
/*                   a parejas de caracteres.                                */

#include<sys/stat.h>
#include<fcntl.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(void){

    char *cad = "HolaMundo.c";
    int c;
    int parentesis1=0, parentesis2=0;
    int llaves1=0, llaves2=0;
    int corchetes1=0, corchetes2=0;
    int triangulos1=0, triangulos2=0;

	FILE* input_file = fopen(cad, "r");

		while((c = fgetc(input_file)) != EOF){

            if(c == '<') (triangulos1)++;
            if(c == '>') (triangulos2)++;
            if(c == '(') (parentesis1)++;
            if(c == ')') (parentesis2)++;
            if(c == '[') (corchetes1)++;
            if(c == ']') (corchetes2)++;
            if(c == '{') (llaves1)++;
            if(c == '}') (llaves2)++; }

	fclose(input_file);

	printf("\n Caracteres  ");
	printf("\t Caracteres  ");
	printf("\t Caracteres  ");
	printf("\t Caracteres  ");
	printf("\n    <:%d       \t      >:%d      \t      {:%d      \t      }:%d\n",triangulos1,triangulos2,llaves1,llaves2);
    printf("\n Caracteres  ");
	printf("\t Caracteres  ");
	printf("\t Caracteres  ");
	printf("\t Caracteres  ");
	printf("\n    [:%d       \t      ]:%d      \t      (:%d      \t      ):%d\n",corchetes1,corchetes2,parentesis1,parentesis2);

	exit(EXIT_SUCCESS);
	return 0;
}
