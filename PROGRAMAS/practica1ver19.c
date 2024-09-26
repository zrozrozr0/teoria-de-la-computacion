/**       NOE RODRÍGUEZ OLMOS - 4CM2 - TEORÍA DE LA COMPUTACIÓN             **/
/**         FECHA DE CREACIÓN: 10/03/2022 - Versión: V.1.9.3                **/
/**                  ARCHIVO MAIN.C                                         **/

/*  Programa que dado un alfabeto Σ={0,1}, realice operaciones con cadenas   */

#include "index.h"
#include "cadenas.h"
#include <string.h> // Para la string
#include <stdio.h>  // Para imprimr printf

int main(int argc, const char * argv[]) {
    string u, v;
    str(&u);
    str(&v);
    leercadenas(u, v);
    while(1) {                              //empieza el switch del menu de opciones y operaciones
        switch (menu_main()){
            case 1: {
                leercadenas(u, v);
                break;}

            case 2: {
                mostrarcadenas(u, v);
                break;}

            case 3: {
                opconcatenar(u, v);
                break;}

            case 4: {
                opprefrijo(u, v);
                break;}

            case 5: {
                opsufijo(u, v);
                break;}

            case 6: {
                opsubcadena(u, v);
                break;}

            case 7: {
                opsubsecuencia(u, v);
                break;}

            case 8: {
                opinvertir(u, v);
                break;}

            case 9: {
                oppotencia(u, v);
                break;}

            case 10: {
                exit(0);}

        }}}

void opconcatenar(string u, string v) {         //inicia operacion concatenar
    string u1, v1, aux;
    str(&u1);
    str(&v1);
    str(&aux);
    while (1) {                                 //traslada las cadenas introducidas
        cadenas_copiar(u1, u);
        cadenas_copiar(v1, v);
        switch (menu_concat()) {
            case 1: {                           //seleccion de tipo de concatenación
                printf("\nConcatenar ambas (UV y VU)\n");
                printf("\ncadenas iniciales:\n  %s\n  %s", u1, v1);
                cadenas_copiar(aux, u1);
                concatenar_cadenas(u1, v1);
                concatenar_cadenas(v1, aux);
                printf("\nres =\n  UV: %s\n  VU: %s\n", u1, v1);
                break;
            }
            case 2: {
                printf("\nConcatenar UV\n");
                printf("\ncadenas iniciales:\n  %s\n  %s", u1, v1);
                concatenar_cadenas(u1, v1);
                printf("\nres =\n  UV: %s\n", u1);
                break;
            }
            case 3: {
                printf("\nConcatenar VU\n");
                printf("\ncadenas iniciales:\n  %s\n  %s", u1, v1);
                concatenar_cadenas(v1, u1);
                printf("\nres =\n  UV: %s\n", v1);
                break;
            }
            case 4: {                                   //regresa al menu anterior
                return;}
    }}}

void opprefrijo(string u, string v) {                   //operacion de prefijo
    string u1, v1, aux;
    int len;
    str(&u1);
    str(&v1);
    str(&aux);
    while (1) {
        printf("\nintroduce el tamaño del prefijo: ");  //solicita un tamaño para el prefijo
        fflush(stdin);
        scanf("%d", &len);
        switch (menu_opprefrijo()) {                    //inicia menu de que tipo de prefijo realizar
            case 1: {
                printf("\nprefijo de ambas (UV y VU)");
                opprefijo_cadenas(u1, u, len);
                opprefijo_cadenas(v1, v, len);
                printf("\ncadenas iniciales:\n  %s\n  %s", u, v);
                printf("\nres =\n  %s\n  %s\n", u1, v1);
                break;
            }
            case 2: {
                printf("\nPrefijo de U");
                opprefijo_cadenas(u1, u, len);
                printf("\ncadenas iniciales:\n  %s", u);
                printf("\nres =\n  %s\n", u1);
                break;
            }
            case 3: {
                printf("\nPrefijo de V");
                opprefijo_cadenas(v1, v, len);
                printf("\ncadenas iniciales:\n  %s", v);
                printf("\nres =\n  %s\n", v1);
                break;
            }
            case 4: {                                               //regresa al menu anterior
                return;}
    }}}

void opsufijo(string u, string v) {                                 //operacion de sufijo
    string u1, v1, aux;
    int len;
    str(&u1);
    str(&v1);
    str(&aux);
    while (1) {
        printf("\nEspecifique el tamaño del sufijo: ");            //solicita el tamañano del sufijo
        fflush(stdin);
        scanf("%d", &len);
        switch (menu_opprefrijo()) {                                //menu de tipos de opreaciones de prefijo
            case 1: {
                printf("\nsufijo de ambas (UV y VU)");
                opsufijo_cadenas(u1, u, len);
                opsufijo_cadenas(v1, v, len);
                printf("\ncadenas iniciales:\n  %s\n  %s", u, v);
                printf("\nres =\n  %s\n  %s\n", u1, v1);
                break;
            }
            case 2: {
                printf("\nsufijo de U");
                opsufijo_cadenas(u1, u, len);
                printf("\ncadenas iniciales:\n  %s", u);
                printf("\nres =\n  %s\n", u1);
                break;
            }
            case 3: {
                printf("\nsufijo de V");
                opsufijo_cadenas(v1, v, len);
                printf("\ncadenas iniciales:\n  %s", v);
                printf("\nres =\n  %s\n", v1);
                break;
            }
            case 4: {                           //regresa al menu anterior
                return;}
    }}}

void opsubcadena(string u, string v) {              //operacion de subcadenas
    string u1, v1, aux;
    int off_l, off_r;
    str(&u1);
    str(&v1);

    while (1) {                                         //solicita los tamaños del prefijo y sufijo
        printf("\nintroduce el tamaño del prefijo:  ");
        fflush(stdin);
        scanf("%d", &off_l);
        printf("introduce el tamaño del sufijo:  ");
        fflush(stdin);
        scanf("%d", &off_r);
        switch (menu_opsubcadena()) {                   //menu de operaciones de subcadenas
            case 1: {
                printf("\nsubcadena en ambas (UV y VU)");
                subcadena_cadenas(u1, u, off_l, off_r);
                subcadena_cadenas(v1, v, off_l, off_r);
                printf("\ncadenas iniciales:\n  %s\n  %s", u, v);
                printf("\nres =\n  %s\n  %s\n", u1, v1);
                break;
            }
            case 2: {
                printf("\nsubcadena de U");
                subcadena_cadenas(u1, u, off_l, off_r);
                printf("\ncadenas iniciales:\n  %s", u);
                printf("\nres =\n  %s\n", u1);
                break;
            }
            case 3: {
                printf("\nsubcadena de V");
                subcadena_cadenas(v1, v, off_l, off_r);
                printf("\ncadenas iniciales:\n  %s", v);
                printf("\nres =\n  %s\n", v1);
                break;
            }
            case 4: {
                return;}                //return al menu anterior o menu principal
    }}}

void opsubsecuencia(string u, string v) {
    string u1, v1;
    str(&u1);
    str(&v1);
    int l, i, j;
    while (1){
        printf("\nIntroduce el numero de caracteres a remover : ");
        scanf("%d", &l);
        char remove[l];
        for (i = 0; i < l; ++i) {
            printf("\nintroduce que caracter %d > :", (i + 1));
            fflush(stdin);
            scanf("%c", &remove[i]);
        }
        switch (menu_subseq()) {
            case 1: {
                printf("\nsubsecuencia en ambas (UV y VU)");
                opsubsecuen_cadenas(u1, u, remove, l);
                opsubsecuen_cadenas(v1, v, remove, l);
                printf("\ncadenas iniciales:\n  %s\n  %s", u, v);
                printf("\nres =\n  %s\n  %s\n", u1, v1);
                break;
            }
            case 2: {
                printf("\nsubsecuencia de U");
                opsubsecuen_cadenas(u1, u, remove, l);
                printf("\ncadenas iniciales:\n  %s", u);
                printf("\nres =\n  %s\n", u1);
                break;
            }
            case 3: {
                printf("\nsubsecuencia de V");
                opsubsecuen_cadenas(v1, v, remove, l);
                printf("\ncadenas iniciales:\n  %s", v);
                printf("\nres =\n  %s\n", v1);
                break;
            }
            case 4: {
                return;}
    }}}

void opinvertir(string u, string v) {
    string u1, v1;
    str(&u1);
    str(&v1);
    while (1) {
        switch (menu_opinvertir()) {
            case 1: {
                printf("\ninvetir ambas (UV y VU)");
                opinvertir_cadenas(u1, u);
                opinvertir_cadenas(v1, v);
                printf("\ncadenas iniciales:\n  %s\n  %s", u, v);
                printf("\nres =\n  %s\n  %s\n", u1, v1);
                break;}

            case 2: {
                printf("\ninvertir U");
                opinvertir_cadenas(u1, u);
                printf("\ncadenas iniciales:\n  %s", u);
                printf("\nres =\n  %s\n\n", u1);
                break;}

            case 3: {
                printf("\ninvertir V");
                opinvertir_cadenas(v1, v);
                printf("\ncadenas iniciales:\n  %s", v);
                printf("\nres =\n  %s\n", v1);
                break;}

            case 4: {
                return;}
    }}}

void oppotencia(string u, string v) {
    int oppotencia_cadenas, i;
    string u1, v1;
    str(&u1);
    str(&v1);

    while (1) {
        printf("\nIntroduce a que potencia hacer la operacion: ");
        fflush(stdin);
        scanf("%d", &oppotencia_cadenas);

        if(oppotencia_cadenas > 0) {
            cadenas_copiar(u1, u);
            cadenas_copiar(v1, v);
        } else {
            oppotencia_cadenas = oppotencia_cadenas * -1;
            opinvertir_cadenas(u1, u);
            opinvertir_cadenas(v1, v);}

        switch (menu_oppotencia()) {
            case 1: {
                printf("\nPotenciar ambas (UV y VU)");
                printf("\ncadenas iniciales:\n  %s\n  %s", u, v);
                printf("\nres =\n  ");
                for (i = 0; i < oppotencia_cadenas; ++i) {
                    printf("%s", u1);
                }
                printf("\n  ");
                for (i = 0; i < oppotencia_cadenas; ++i) {
                    printf("%s", v1);
                }
                printf("\n");
                break;}

            case 2: {
                printf("\npotencia de U");
                printf("\ncadenas iniciales:\n  %s", u);
                printf("\nres =\n  ");
                for (i = 0; i < oppotencia_cadenas; ++i) {
                    printf("%s", u1);
                }
                printf("\n");
                break;}

            case 3: {
                printf("\npotencia de V");
                printf("\ncadenas iniciales:\n  %s", v);
                printf("\nres =\n  ");
                for (i = 0; i < oppotencia_cadenas; ++i) {
                    printf("%s", v1);
                }
                printf("\n");
                break;}

            case 4: {
                return;}
    }}}

void leercadenas(string u, string v) {                      //pantalla de inicio, info y solicitud de candenas
    printf("\nRodriguez Olmos Noe - 4SCM2\n");
    printf("\nIngresa una cadena binaria    - Ej. (U): 0 (V): 1");
    printf("\no tambien una cadena de texto - Ej. (U): A (V): B\n");
    printf("\nIngresa la 1ra cadena (U):  ");
    fflush(stdin);
    scanf("%[^\n]s", u);
    printf("Ingresa la 2da cadena (V):  ");
    fflush(stdin);
    scanf("%[^\n]s", v);}

void mostrarcadenas(string u, string v) {                    //imprime en pantalla las cadenas previamente ingresadas
    printf("\nCadenas en el programa:");
    printf("\n1ra cadena (U): %s, longitud de: %d caracter(es)", u, longitud_cadena(u));
    printf("\n2da cadena (V): %s, longitud de: %d caracter(es)\n", v, longitud_cadena(v));}

