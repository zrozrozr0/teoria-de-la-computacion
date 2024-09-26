/**       NOE RODRÍGUEZ OLMOS - 4CM2 - TEORÍA DE LA COMPUTACIÓN             **/
/**         FECHA DE CREACIÓN: 10/03/2022 - Versión: V.1.9.3                **/
/**                  LIBRERIA INDEX.C                                       **/

/*  Programa que dado un alfabeto Σ={0,1}, realice operaciones con cadenas   */

#ifndef pra1_menuopcadenas
#define pra1_menuopcadenas
#include <stdio.h>
#include "cadenas.h"
#include <string.h> // Para la string
#include <stdio.h>  // Para imprimr printf

// funciones de menus de operaciones
int menu_concat();
int menu_opsubcadena();
int menu_subseq();
int menu_opinvertir();
int menu_oppotencia();
int menu_opprefrijo();
int menu_opsufijo();

// menu principal y obterner opcion
void imprimiropc_menu(string[], string, int);
int obteneres_menu();
int menu_main();

int menu_main() {
    int respuesta;
    string options[] = {
            "Reingresar cadenas",
            "Cadenas actuales",
            "Concatenar",
            "Prefijo",
            "Sufijo",
            "Subcadena",
            "Subsecuencia",
            "Inverso",
            "Potencia",
            "Exit"
    };
    do {
        imprimiropc_menu(options, "inicial", 10);
        respuesta = obteneres_menu();
    } while (!menu_validaterespuestawer(respuesta, 10));
    return respuesta; }

void imprimiropc_menu(string options[], string title, int opt_len) {
    printf("\nmenu %s:", title);
    for (int i = 0; i < opt_len; ++i) {
        printf("\n%0d: %s", (i + 1), options[i]);
    }
}

int obteneres_menu() {
    string respuesta;
    str(&respuesta);
    fflush(stdin);
    printf("\nSelecciona una opcion o operacion:   ");
    scanf("%[^\n]s", respuesta);
    return atoi(respuesta);
}

int menu_validaterespuestawer(int respuesta, int max) {
    if(respuesta > 0 && respuesta <= max)
        return 1;
    printf("\n>> error: introduce una opcion o operacion valida!");
    return 0;
}

int menu_concat() {
    int respuesta;
    string options[] = {
            "ambas (UV y VU)",
            "UV",
            "VU",
            "volver al menu anterior"
    };
    do {
        imprimiropc_menu(options, "concatenar", 4);
        respuesta = obteneres_menu();
    } while (!menu_validaterespuestawer(respuesta, 4));
    return respuesta;
}

int menu_opprefrijo() {
    int respuesta;
    string options[] = {
            "ambas (UV y VU)",
            "UV",
            "VU",
            "volver al menu anterior"
    };
    do {
        imprimiropc_menu(options, "prefijos", 4);
        respuesta = obteneres_menu();
    } while (!menu_validaterespuestawer(respuesta, 4));
    return respuesta;
}

int menu_opsufijo() {
    int respuesta;
    string options[] = {
            "ambas (UV y VU)",
            "UV",
            "VU",
            "volver al menu anterior"
    };
    do {
        imprimiropc_menu(options, "sufijos", 4);
        respuesta = obteneres_menu();
    } while (!menu_validaterespuestawer(respuesta, 4));
    return respuesta;
}

int menu_opsubcadena() {
    int respuesta;
    string options[] = {
            "ambas (UV y VU)",
            "UV",
            "VU",
            "volver al menu anterior"
    };
    do {
        imprimiropc_menu(options, "subcadenas", 4);
        respuesta = obteneres_menu();
    } while (!menu_validaterespuestawer(respuesta, 4));
    return respuesta;}

int menu_subseq() {
    int respuesta;
    string options[] = {
            "ambas (UV y VU)",
            "UV",
            "VU",
            "volver al menu anterior"
    };
    do {
        imprimiropc_menu(options, "subsecuencias", 4);
        respuesta = obteneres_menu();
    } while (!menu_validaterespuestawer(respuesta, 7));
    return respuesta;}

int menu_opinvertir() {
    int respuesta;
    string options[] = {
            "ambas (UV y VU)",
            "UV",
            "VU",
            "volver al menu anterior"
    };
    do {
        imprimiropc_menu(options, "invertir", 4);
        respuesta = obteneres_menu();
    } while (!menu_validaterespuestawer(respuesta, 4));
    return respuesta;}

int menu_oppotencia() {
    int respuesta;
    string options[] = {
            "ambas (UV y VU)",
            "UV",
            "VU",
            "volver al menu anterior"
    };
    do {
        imprimiropc_menu(options, "potencias", 4);
        respuesta = obteneres_menu();
    } while (!menu_validaterespuestawer(respuesta, 4));
    return respuesta;}

#endif
