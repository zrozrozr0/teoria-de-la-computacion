
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
     Autor: Andr�s Mu�oz Bravo.
     Analizador L�xico del lenguaje de programaci�n HYE.
     Curso: Procesamiento de Lenguajes Formales (PLF).
     Profesora: Consuelo Ram�rez
     Ayudante: Javiera Torres
*/

enum{NUMERO_ENTERO,STRING,IDENTIFICADOR,NUMERO_REAL,PALABRA_RESERVADA,OPERADOR_PUNTUACION,NADA=10};

/*
 * funci�n isSimbol
 * funci�n que verifica si car�cter es un s�mbolo
 * @param char c, car�cter a verificar
 * @return entero 1 en caso de que sea un s�mbolo el car�cter y 0 en caso contrario.
*/
int isSimbol(char c){
    if(c>=32 && c<=47 && c!='\''){
        return 1;
    }
    if(c>=58 && c<=64){
        return 1;
    }
    if (c>=91 && c<=93){
        return 1;
    }
    if (c==95){
        return 1;
    }
    if (c>=123 && c<=125){
        return 1;
    }
    return 0;
}

/*
 * funci�n isLetterMin
 * funci�n que verifica si un car�cter es una letra min�scula
 * @param char c, car�cter a verificar
 * @return entero 1 en caso de que sea una letra min�scula el car�cter y 0 en caso contrario.
*/
int isLetterMin(char c){
    if(c>=97 && c<=122){
        return 1;
    }
    if (c==-15){ //�
        return 1;
    }
    return 0;
}

/*
 * funci�n isLetterMay
 * funci�n que verifica si un car�cter es una letra may�scula
 * @param char c, car�cter a verificar
 * @return entero 1 en caso de que sea una letra may�scula el car�cter y 0 en caso contrario.
*/
int isLetterMay(char c){
    if(c>=65 && c<=90){
        return 1;
    }
    if(c ==-47 ){ // �
        return 1;
    }
    return 0;
}

/*
 * funci�n isLetter
 * funci�n que verifica si un car�cter es una letra (may�scula o min�scula)
 * @param char c, car�cter a verificar
 * @return entero 1 en caso de que sea una letra el car�cter y 0 en caso contrario.
*/
int isLetter(char c){
    if(isLetterMay(c)){
        return 1;
    }
    if (isLetterMin(c)){
        return 1;
    }
    return 0;
}

/*
 * funci�n isDigit
 * funci�n que verifica si un car�cter es un d�gito
 * @param char c, car�cter a verificar
 * @return entero 1 en caso de que sea un d�gito el car�cter y 0 en caso contrario.
*/
int isDigit(char c){
    if(c>=48 && c<=57){
        return 1;
    }
    return 0;
}
/*
 * funci�n isCaracter
 * funci�n que verifica si un car�cter es un car�cter (s�mbolo o letra o d�gito)
 * @param char c, car�cter a verificar
 * @return entero 1 en caso de que sea un car�cter el car�cter y 0 en caso contrario.
*/
int isCaracter(char c){
    if(isLetter(c)){
        return 1;
    }
    if(isSimbol(c)){
        return 1;
    }
    if(isDigit(c)){
        return 1;
    }
    return 0;
}

/*
 * funci�n isOperator
 * funci�n que verifica si un car�cter es operador (+,-,*,/)
 * @param char c, car�cter a verificar
 * @return entero 1 en caso de que sea un operador el car�cter y 0 en caso contrario.
*/
int isOperator(char c){
    switch(c){
        case '>':
            return 1;
        case '<':
            return 1;
        case '=':
            return 1;
        case '+':
            return 1;
        case '-':
            return 1;
        case '*':
            return 1;
        case '/':
            return 1;
        default:
            return 0;
    }
}

/*
 * funci�n isPunctuationSign
 * funci�n que verifica si un car�cter es signo de puntuaci�n (.,:,,,;,(,))
 * @param char c, car�cter a verificar
 * @return entero 1 en caso de que sea un signo de puntuaci�n el car�cter y 0 en caso contrario.
*/
int isPunctuationSign(char c){
    switch(c){
        case '.':
            return 1;
        case ':':
            return 1;
        case ',':
            return 1;
        case ';':
            return 1;
        case '(':
            return 1;
        case ')':
            return 1;
        default:
            return 0;
    }
}

/*
 * funci�n isReservedWord
 * funci�n que verifica si una cadena caracteres es  una palabra reservada
 * @param char c, car�cter a verificar
 * @return entero 1 en caso de que la cadena de caracteres sea una palabra reservada y 0 en caso contrario.
*/
int isReservedWord(char *word){
    if(!strcmp(word,"ABS")){
        return 1;
    }
    else if(!strcmp(word,"BAJAR")){
        return 1;
    }
    else if(!strcmp(word,"CARACTER")){
        return 1;
    }
    else if(!strcmp(word,"CONST")){
        return 1;
    }
    else if(!strcmp(word,"CUADR")){
        return 1;
    }
    else if(!strcmp(word,"CUANDO")){
        return 1;
    }
    else if(!strcmp(word,"DIV")){
        return 1;
    }
    else if(!strcmp(word,"ENTERO")){
        return 1;
    }
    else if(!strcmp(word,"ENTONCES")){
        return 1;
    }
    else if(!strcmp(word,"ESCRIB")){
        return 1;
    }
    else if(!strcmp(word,"ESCRIBL")){
        return 1;
    }
    else if(!strcmp(word,"FALSO")){
        return 1;
    }
    else if(!strcmp(word,"FIN")){
        return 1;
    }
    else if(!strcmp(word,"HACER")){
        return 1;
    }
    else if(!strcmp(word,"HASTA")){
        return 1;
    }
    else if(!strcmp(word,"IMPAR")){
        return 1;
    }
    else if(!strcmp(word,"INICIO")){
        return 1;
    }
    else if(!strcmp(word,"LEER")){
        return 1;
    }
    else if(!strcmp(word,"LOGICO")){
        return 1;
    }
    else if(!strcmp(word,"MIENTRAS")){
        return 1;
    }
    else if(!strcmp(word,"NO")){
        return 1;
    }
    else if(!strcmp(word,"O")){
        return 1;
    }
    else if(!strcmp(word,"PROGRAMA")){
        return 1;
    }
    else if(!strcmp(word,"REAL")){
        return 1;
    }
    else if(!strcmp(word,"REPITA")){
        return 1;
    }
    else if(!strcmp(word,"RESTO")){
        return 1;
    }
    else if(!strcmp(word,"SEA")){
        return 1;
    }
    else if(!strcmp(word,"SI")){
        return 1;
    }
    else if(!strcmp(word,"SINO")){
        return 1;
    }
    else if(!strcmp(word,"SUBIR")){
        return 1;
    }
    else if(!strcmp(word,"VAR")){
        return 1;
    }
    else if(!strcmp(word,"VERDAD")){
        return 1;
    }
    else if(!strcmp(word,"Y")){
        return 1;
    }
    return 0;


}

/*
 * funci�n automataNumeroEntero
 * funci�n que realiza la funci�n de un aut�mata, para un n�mero entero.
 * @param int state,estado en el cual se encuentra actualmente. char c, car�cter con el cual se hace una transici�n.
 * @return entero, entrega el siguiente estado. Si es un estado final entrega -1, si entra un car�cter inv�lido entrega -2.
*/
int automataNumeroEntero(int state,char c){
    switch(state){
        case 1:
            if(isDigit(c))
                return 2;
            else
                return -2;
        case 2:
            if(isDigit(c))
                return 2;
            else
                return -1;

    }
    return -2;
}

/*
 * funci�n automataString
 * funci�n que realiza la funci�n de un aut�mata, para un string.
 * @param int state,estado en el cual se encuentra actualmente. char c, car�cter con el cual se hace una transici�n.
 * @return entero, entrega el siguiente estado. Si es un estado final entrega -1, si entra un car�cter inv�lido entrega -2.
*/
int automataString(int state, char c){
    switch(state){
        case 1:
            if (c == '\'')
                return 2;
            else
                return -2;
        case 2:
            if (isCaracter(c))
                return 3;
            else
                return -2;
        case 3:
            if (isCaracter(c))
                return 3;
            else if (c == '\'')
                return 4;
            else
                return -2;
        case 4:
            return -1;
    }
    //solamente el estado final debe retornar -1
    return -2;
}

/*
 * funci�n automataIdentificador
 * funci�n que realiza la funci�n de un aut�mata, para un identificador.
 * @param int state,estado en el cual se encuentra actualmente. char c, car�cter con el cual se hace una transici�n.
 * @return entero, entrega el siguiente estado. Si es un estado final entrega -1, si entra un car�cter inv�lido entrega -2.
*/
int automataIdentificador(int state,char c){
    switch(state){
        case 1:
            if(isLetter(c))
                return 2;
            else
                return -2;
        case 2:
            if(isLetter(c) || isDigit(c))
                return 2;
            else
                return -1;
    }
    return -2;
}

/*
 * funci�n automataNumeroReal
 * funci�n que realiza la funci�n de un aut�mata, para un n�mero real.
 * @param int state,estado en el cual se encuentra actualmente. char c, car�cter con el cual se hace una transici�n.
 * @return entero, entrega el siguiente estado. Si es un estado final entrega -1, si entra un car�cter inv�lido entrega -2.
*/
int automataNumeroReal(int state,char c){
    switch(state){
        case 1:
            if(isDigit(c))
                return 2;
            else
                return -2;
        case 2:
            if(isDigit(c))
                return 2;
            else if(c == '.')
                return 3;
            else if (c == 'E')
                return 5;
            else
                return -2;

        case 3: //tengo d�gito(d�gito)*.
            if(isDigit(c))
                return 4;
            else
                return -2;
        case 4: // ESTADO FINAL : d�gito(d�gito)*.d�gito
            if (c == 'E')
                return 5;
            else
                return -1;
        case 5:

            if (c == '+')
                return 6;
            else if (c == '-')
                return 7;
            else if(isDigit(c))
                return 8;
            else
                return -2;
        case 6:
            if(isDigit(c))
                return 8;
            else
                return -2;
        case 7:
            if (isDigit(c))
                return 8;
            else
                return -2;
        case 8:
            if(isDigit(c))
                return 8;
            else
                return -1;

    }
    return -2;
}

/*
 * funci�n reconocerNumeroEntero
 * funci�n que reconoce una expresi�n regular (n�mero entero)
 * @param char *string, cadena de caracteres en la cual se reconocera la expresi�n regular. int position, posici�n desde la cual se comenzara a reconocer la expresi�n regular.
 * @return entero, posici�n que corresponde a la siguiente despu�s de reconocer la expresi�n regular, entrega 0 si no reconoce ninguna expresi�n.
*/
int reconocerNumeroEntero(char *string,int position){
    int state = 1;
    int i=position;
    while( i<=strlen(string) ){
        state = automataNumeroEntero(state,string[i]);
        //printf("%d",state);
        if (state == -1){
            return i;
        }
        if (state == -2){
            return position;
        }
        i++;
    }
    return i;
}

/*
 * funci�n reconocerString
 * funci�n que reconoce una expresi�n regular (string)
 * @param char *string, cadena de caracteres en la cual se reconocera la expresi�n regular. int position, posici�n desde la cual se comenzara a reconocer la expresi�n regular.
 * @return entero, posici�n que corresponde a la siguiente despu�s de reconocer la expresi�n regular, entrega 0 si no reconoce ninguna expresi�n.
*/
int reconocerString(char *string,int position){
    int state = 1;
    int i=position;
    while( i<=strlen(string) ){
        state = automataString(state,string[i]);
        if (state == -1){
            return i;
        }
        if(state == -2){
            return position;
        }
        i++;
    }
    return i;
}

/*
 * funci�n reconocerIdentificador
 * funci�n que reconoce una expresi�n regular (identificador)
 * @param char *string, cadena de caracteres en la cual se reconocera la expresi�n regular. int position, posici�n desde la cual se comenzara a reconocer la expresi�n regular.
 * @return entero, posici�n que corresponde a la siguiente despu�s de reconocer la expresi�n regular, entrega 0 si no reconoce ninguna expresi�n.
*/
int reconocerIdentificador(char *string, int position){
    int state = 1;
    int i=position;
    while( i<=strlen(string) ){
        state = automataIdentificador(state,string[i]);
        if (state == -1){
            return i;
        }
        if(state == -2){
            return position;
        }
        i++;
    }
    return i;
}

/*
 * funci�n reconocerNumeroReal
 * funci�n que reconoce una expresi�n regular (n�mero real)
 * @param char *string, cadena de caracteres en la cual se reconocera la expresi�n regular. int position, posici�n desde la cual se comenzara a reconocer la expresi�n regular.
 * @return entero, posici�n que corresponde a la siguiente despu�s de reconocer la expresi�n regular, entrega 0 si no reconoce ninguna expresi�n.
*/
int reconocerNumeroReal(char *string, int position){
    int state = 1;
    int i=position;
    int aux = position;
    while( i<=strlen(string) ){
        state = automataNumeroReal(state,string[i]);
        if (state == -1){
            return i;
        }
        if (state == 5){
            aux = i;
        }
        if(state == -2){
            return aux;
        }
        i++;
    }
    return i;
}

/*
 * funci�n findFinal
 * funci�n que busca el final de una posible palabra reservada.
 * @param char *string, string en el que se busca el final. int position, posici�n desde la cual se comeinza a buscar el final
 * @return entero, posici�n del final de una posible palabra reservada.
*/
int findFinal(char *string,int position){
    int i = position;
    while(i<=strlen(string)){
        if(!isCaracter(string[i]) || string[i] == ' ' || isOperator(string[i]) || isPunctuationSign(string[i]))
            return i;
        i++;
    }
    return -1;

}

/*
 * funci�n strsecpy
 * funci�n que copia un string desde una posici�n incial hasta una final.
 * @param char *dest, string destino. char *src, string origen. int start, posici�n inicial.int end, posici�n final.
*/
void strsecpy(char *dest,char *src,int start,int end){
    int i=0;
    while(i<end-start){
        dest[i] = src[start+i];
        i++;
    }
    dest[i] = '\0';
    return;
}

/*
 * funci�n reconocerPalabraReservada
 * funci�n que reconoce si un string es una palabra reservada
 * @param char *string, cadena de caracteres en la cual se reconce la palabra reservada. int position, posici�n desde la cual se comenzara a reconocer la expresi�n regular.
 * @return entero, posici�n que corresponde a la siguiente despu�s de reconocer la palabra reservada, entrega 0 si no reconoce ninguna palabra reservada.
*/
int reconocerPalabraReservada(char *string, int position){
    int final = findFinal(string,position);
    char buffer[300];
    if(final != -1){
        memset(buffer,0,sizeof(buffer));
        strsecpy(buffer,string,position,final);
        //printf("\n\nbuffer:%s\n\n",buffer);
        if(isReservedWord(buffer)){
            return final;
        }
    }
    return position;
}

/*
 * funci�n fprintToken
 * funci�n que escribe en un archivo el tipo de token entregado por par�metro
 * @param int token,FILE *fileOut
*/
void fprintToken(int token,FILE *fileOut){
    switch(token){
        case NUMERO_ENTERO:
            //fprintf(fileOut,"PC: %d,NUMERO_ENTERO\n",pc);
            fprintf(fileOut,"NUMERO_ENTERO\n");
            break;
        case STRING:
            //fprintf(fileOut,"PC: %d,STRING\n",pc);
            fprintf(fileOut,"STRING\n");
            break;
        case IDENTIFICADOR:
            //fprintf(fileOut,"PC: %d,IDENTIFICADOR\n",pc);
            fprintf(fileOut,"IDENTIFICADOR\n");
            break;
        case NUMERO_REAL:
            //fprintf(fileOut,"PC: %d,NUMERO_REAL\n",pc);
            fprintf(fileOut,"NUMERO_REAL\n");
            break;
        /*case NADA:
            fprintf(fileOut,"PC: %d,NADA\n",pc);
            break;*/
        default:
            break;
    }
}

/*
 * funci�n changeToken
 * funci�n encargada de reconocer el token mas largo
 * @param int *token,par�metro por referencia para ir modificando el token cada vez que se reconoce una expresi�n regular. char *string, cadena de caracteres que se esta analizando. int pc, posici�n desde donde se comienza a analizar las expresiones regulares.FILE *fileOut, archivo de salida en el cual se escribe el tipo de expresion regular reconocida.
 * @return entero, posici�n que corresponde a la siguiente despu�s de reconocer alguna expresi�n, entrega 0 si no reconoce ninguna expresi�n.
*/
int changeToken(int *token, char *string, int pc,FILE *fileOut){
    int max = pc;
    int buffer;
    buffer = reconocerPalabraReservada(string,pc);
    if(max<buffer){
        *token = PALABRA_RESERVADA;
        char word[50];
        strsecpy(word,string,pc,buffer);
        //fprintf(fileOut,"PC: %d,%s\n",buffer,word);
        fprintf(fileOut,"%s\n",word);
        return buffer;
    }
    if(isPunctuationSign(string[pc]) || isOperator(string[pc])){
        *token = OPERADOR_PUNTUACION;
        //fprintf(fileOut,"PC: %d,%c\n",pc,string[pc]);
        fprintf(fileOut,"%c\n",string[pc]);
        return pc+1;
    }
    buffer = reconocerNumeroEntero(string,pc);
    if(max<buffer){
        *token = NUMERO_ENTERO;
        max = buffer;
    }
    buffer = reconocerString(string,pc);
    if(max<buffer){
        *token = STRING;
        max = buffer;
    }
    buffer = reconocerIdentificador(string,pc);
    if(max<buffer){
        *token = IDENTIFICADOR;
        max = buffer;
    }
    buffer = reconocerNumeroReal(string,pc);
    if(max<buffer){
        *token = NUMERO_REAL;
        max = buffer;
    }
    if(max == pc){
        *token = NADA;
    }
    fprintToken(*token,fileOut);
    return max;
}

/*
 * funci�n existFile
 * funci�n que verifica si un archivo de texto plano existe
 * @param char* fileName, nombre del archivo
 * @return entero 1 en caso de que si exista y 0 en caso contrario
*/
int existsFile(char* fileName)
{
	FILE* file = NULL;
	file = fopen(fileName,"r");
	if (file == NULL)
		return 0;
	else {
		fclose(file);
		return 1;
	}
	return 0;
}

/*
 * funci�n validarEntradas
 * funci�n que verifica si los par�metros de entrada del programa son v�lidos
 * @param int argc,n�mero de argumentos. char** argv, arreglo de cadena de caracteres que contiene los par�metros de entrada.
 * @return entero 1 en caso de que si los par�metros sean v�lidos y 0 en caso contrario
*/
int validarEntradas(int argc, char** argv){
    //Caso 1

    if (argc == 1){
        printf("Error: Faltan par%cmetros en la l%cnea de comandos.\n",160,161);
        printf("Uso: lexico.exe archivo_entrada archivo_salida\n");
        return 0;
    }
    //Caso 2
    if (argc == 2){
        printf("Error: Falta par%cmetro en la l%cnea de comandos.\n",160,161);
        printf("Uso: lexico.exe archivo_entrada archivo_salida\n");
        return 0;
    }
    //Caso 3
    if( argc > 3 ){
        printf("Error: Demasiados par%cmetros en la l%cnea de comandos.\n",160,161);
        printf("Uso: lexico.exe archivo_entrada archivo_salida\n");
        return 0;
    }
    //Caso 4
    if (!existsFile(argv[1])){
        printf("Error: El archivo de entrada no existe.\n");
        return 0;
    }
    //Caso 5
    if (existsFile(argv[2])){
        printf("Error: El archivo de salida ya existe.\n");
        return 0;
    }
    return 1;
}

/*
 * funci�n lexicalAnalyzer
 * funci�n genera un archivo con los componentes lexicos reconocidos en un archivo de texto de entrada.
 * @param char* fileNameIn, nombre del archivo de texto de entrada. char* fileNameOut, nombre del archivo de texto de salida.
*/
void lexicalAnalyzer(char* fileNameIn, char* fileNameOut){
    FILE *fileIn = fopen(fileNameIn,"r");
    FILE *fileOut = fopen(fileNameOut,"w");
    char buffer[1000];
    int pc;
    int token;
    while(!feof(fileIn)){
        memset(buffer,0,sizeof(buffer));
        pc=0;
        token = NADA;
        fgets(buffer,1000,fileIn);
        //printf("%s\n",buffer);
        while(pc<strlen(buffer)){
            pc = changeToken(&token,buffer,pc,fileOut);
            if(token==NADA){
                pc++;
            }
        }
    }
    fclose(fileIn);
    fclose(fileOut);
}

int main(int argc, char** argv){

    //VALIDANDO ENTRADAS
    if(!validarEntradas(argc,argv)){
        return 0;
    }

    //PROCESADO LA INFORMACI�N
    lexicalAnalyzer(argv[1],argv[2]);

    return 1;
}
