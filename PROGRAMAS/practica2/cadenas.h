/**       NOE RODRÍGUEZ OLMOS - 4CM2 - TEORÍA DE LA COMPUTACIÓN             **/
/**         FECHA DE CREACIÓN: 10/03/2022 - Versión: V.1.9.3                **/
/**                  LIBRERIA CADENAS.H                                     **/

/*  Programa que dado un alfabeto Σ={0,1}, realice operaciones con cadenas   */

#include <stdlib.h>
#ifndef pra1_opcadenas
#define pra1_opcadenas
#include <string.h> // Para la string
#include <stdio.h>  // Para imprimr printf

typedef char * string;
void str(string *);
int longitud_cadena(string);                            /*obtener valor de la longitud*/
void cadenas_copiar(string, string);
void concatenar_cadenas(string, string);                /*obtener concatenacion de cadenas*/
void opprefijo_cadenas(string, string, int);            /*obtener prefijo de las cadenas*/
void opsufijo_cadenas(string, string, int);             /*obtener sufijo de las cadenas*/
void subcadena_cadenas(string, string, int, int);       /*obtener subcadena de las cadenas*/
void opsubsecuen_cadenas(string, string, char [], int); /*obtener subsecuencia de las cadenas*/
void opinvertir_cadenas(string, string);                /*obtener el inverso de las cadenas*/
int str_ispalindrome(string);                           /*al invertir la cadena verifica si es palindromo*/
int arr_contains(char, char [], int);                   /*verifica su contenido*/

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

void cadenas_copiar(string destination, string origin) {
    int i = 0;
    while (*(origin + i) != 0) {
        *(destination + i) = *(origin + i);
        i++;}
    *(destination + i) = 0;}

void concatenar_cadenas(string destination, string origin) {
    int i = 0;
    int j = longitud_cadena(destination);
    while (*(origin + i) != 0) {
        *(destination + j) = *(origin + i);
        i++;
        j++;}
    *(destination + j) = 0;}

void opprefijo_cadenas(string destination, string origin, int opprefrijo_length) {
    int i;
    if(opprefrijo_length > longitud_cadena(origin) || opprefrijo_length < 0) {
        cadenas_copiar(destination, "[El prefijo no puede ser calculado]");
        return;}
    for (i = 0; i < opprefrijo_length; ++i) {
        *(destination + i) = *(origin + i);}
    *(destination + i) = 0;}

void opsufijo_cadenas(string destination, string origin, int opsufijo_length) {
    int i, j = 0;
    if(opsufijo_length > longitud_cadena(origin) || opsufijo_length < 0) {
        cadenas_copiar(destination, "[El sufijo no puede ser calculado]");
        return;
    }
    for (i = longitud_cadena(origin) - opsufijo_length; i < longitud_cadena(origin); ++i) {
        *(destination + j) = *(origin + i);
        j++;}
    *(destination + i) = 0;}

void subcadena_cadenas(string destination, string origin, int offset_left, int offset_right) {
    int i, j = 0;
    if(offset_left < 0 || offset_right < 0 || offset_left +  offset_left > longitud_cadena(origin))
        return;
    for (i = offset_left; i < longitud_cadena(origin) - offset_right; ++i) {
        *(destination + j) = *(origin + i);
        j++;
    }
    *(destination + i) = 0;}

void opsubsecuen_cadenas(string destination, string origin, char remove[], int length) {
    int i, offset = 0;

    for (i = 0; i < longitud_cadena(origin); ++i)

        if (arr_contains(*(origin + i), remove, length))
            offset++;
        else
            *(destination + i - offset) = *(origin + i);

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

int arr_contains(char character, char array[], int length) {
    int i;
    for(i = 0; i < length; ++i) {
        if(array[i] == character)
            return 1;}
    return 0;}

#endif
