/**     NOE RODRÍGUEZ OLMOS - 4CM2 - TEORÍA DE LA COMPUTACIÓN
            FECHA DE CREACIÓN: 18/02/2022 - Versión: V.1.7          **/

/* Programa para saber si una palabra (cadena) es un palíndromo,
    es decir, si se lee igual de izquierda a derecha que de
    derecha a izquierda en C */

#include <string.h> // Para la string
#include <stdio.h>  // Para imprimr printf



// Función recursiva
int Lrecursivo(char * string, int ini, int fin);

// Función main
int main() {

    // tamaño de la palabra (cadena)
    char string[50];
    // imprime instrucciones (%c, 161 para la tilde en la í de palíndromo)
    printf("\tEscribe una cadena para saber si es un pal%cndromo o no: \n\t",161);
    // ingrsar una string
    scanf("%s", &string);

    // saber el inicio y fin de la palabra (cadena)
    int strlong = strlen(string);
    int resr = Lrecursivo(string, 0, strlong - 1);
    // imprimir  si es palíndromo
    if (resr) {
        printf("\t%s es un palindromo\n", string);
    // imprimir si no es palíndromo
    } else {
        printf("\t%s no es un palindromo\n", string);
    }
}


// funcion recursiva

int Lrecursivo(char * string, int ini, int fin) {

    // compara si la cadena tiene 1 o menos de un caracter
    // o si solo hay un caracter que comparar

    if (ini >= fin) return 1;

    // imprime las comparaciones de los caracteres iniciales y finales
    printf("\t%c es igual con %c\n", string[ini], string[fin]);

    // si tiene mas de 1 caracter se compara el primer y último
    if (string[ini] == string[fin]) {

        /*  En caso de que sean iguales los caracteres a comparar se
            acorta la cadena (al inicio se recorre a la derecha un caracter
            y en el final se recorre a la izquierda) */

        return Lrecursivo(string, ini + 1, fin - 1);
    } else {

        /*  si el primer caracter de inicio y fin no son iguales, se termina la funcion
            y se retorna a 0 */
        return 0;
    }
}
