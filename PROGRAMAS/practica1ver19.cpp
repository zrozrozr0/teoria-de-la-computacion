#include "strings.h"
#include "menu.h"


void readstrings(string u, string v) {
    printf("\nLECTURA DE CADENAS");
    printf("\nEscriba la primera cadena (U): > ");
    fflush(stdin);
    scanf("%[^\n]s", u);
    printf("Escriba la segunda cadena (V): > ");
    fflush(stdin);
    scanf("%[^\n]s", v);
}

void showstrings(string u, string v) {
    printf("\nCADENAS ACTUALES:");
    printf("\nPrimera cadena (U): %s, longitud: %d", u, str_length(u));
    printf("\nSegunda cadena (V): %s, longitud: %d\n", v, str_length(v));
}

void concatenation(string u, string v) {
    string u1, v1, aux;
    str(&u1);
    str(&v1);
    str(&aux);
    while (1) {
        str_copy(u1, u);
        str_copy(v1, v);
        switch (menu_concat()) {
            case 1: {
                printf("\nConcatenar AMBAS\n");
                printf("\nCadenas originales:\n  %s\n  %s", u1, v1);
                str_copy(aux, u1);
                str_concat(u1, v1);
                str_concat(v1, aux);
                printf("\nResultado:\n  UV: %s\n  VU: %s\n", u1, v1);
                break;
            }
            case 2: {
                printf("\nConcatenar UV\n");
                printf("\nCadenas originales:\n  %s\n  %s", u1, v1);
                str_concat(u1, v1);
                printf("\nResultado:\n  UV: %s\n", u1);
                break;
            }
            case 3: {
                printf("\nConcatenar VU\n");
                printf("\nCadenas originales:\n  %s\n  %s", u1, v1);
                str_concat(v1, u1);
                printf("\nResultado:\n  UV: %s\n", v1);
                break;
            }
            case 4: {
                return;
            }
        }
    }
}

void prefix(string u, string v) {
    string u1, v1, aux;
    int len;
    str(&u1);
    str(&v1);
    str(&aux);
    while (1) {
        printf("\nEspecifique el tamaño del prefijo: > ");
        fflush(stdin);
        scanf("%d", &len);
        switch (menu_prefix()) {
            case 1: {
                printf("\nPrefijo de AMBAS");
                str_prefix(u1, u, len);
                str_prefix(v1, v, len);
                printf("\nCadenas originales:\n  %s\n  %s", u, v);
                printf("\nResultado:\n  %s\n  %s\n", u1, v1);
                break;
            }
            case 2: {
                printf("\nPrefijo de U");
                str_prefix(u1, u, len);
                printf("\nCadenas originales:\n  %s", u);
                printf("\nResultado:\n  %s\n", u1);
                break;
            }
            case 3: {
                printf("\nPrefijo de V");
                str_prefix(v1, v, len);
                printf("\nCadenas originales:\n  %s", v);
                printf("\nResultado:\n  %s\n", v1);
                break;
            }
            case 4: {
                return;
            }
        }
    }
}

void suffix(string u, string v) {
    string u1, v1, aux;
    int len;
    str(&u1);
    str(&v1);
    str(&aux);
    while (1) {
        printf("\nEspecifique el tamaño del prefijo: > ");
        fflush(stdin);
        scanf("%d", &len);
        switch (menu_prefix()) {
            case 1: {
                printf("\nSufijo de AMBAS");
                str_suffix(u1, u, len);
                str_suffix(v1, v, len);
                printf("\nCadenas originales:\n  %s\n  %s", u, v);
                printf("\nResultado:\n  %s\n  %s\n", u1, v1);
                break;
            }
            case 2: {
                printf("\nSufijo de U");
                str_suffix(u1, u, len);
                printf("\nCadenas originales:\n  %s", u);
                printf("\nResultado:\n  %s\n", u1);
                break;
            }
            case 3: {
                printf("\nSufijo de V");
                str_suffix(v1, v, len);
                printf("\nCadenas originales:\n  %s", v);
                printf("\nResultado:\n  %s\n", v1);
                break;
            }
            case 4: {
                return;
            }
        }
    }
}

void substring(string u, string v) {
    string u1, v1, aux;
    int off_l, off_r;
    str(&u1);
    str(&v1);
    //str(&aux);
    while (1) {
        printf("\nEspecifique el tamaño del prefijo: > ");
        fflush(stdin);
        scanf("%d", &off_l);
        printf("Especifique el tamaño del sufijo: > ");
        fflush(stdin);
        scanf("%d", &off_r);
        switch (menu_substring()) {
            case 1: {
                printf("\nSubcadena de AMBAS");
                str_substr(u1, u, off_l, off_r);
                str_substr(v1, v, off_l, off_r);
                printf("\nCadenas originales:\n  %s\n  %s", u, v);
                printf("\nResultado:\n  %s\n  %s\n", u1, v1);
                break;
            }
            case 2: {
                printf("\nSubcadena de U");
                str_substr(u1, u, off_l, off_r);
                printf("\nCadenas originales:\n  %s", u);
                printf("\nResultado:\n  %s\n", u1);
                break;
            }
            case 3: {
                printf("\nSubcadena de V");
                str_substr(v1, v, off_l, off_r);
                printf("\nCadenas originales:\n  %s", v);
                printf("\nResultado:\n  %s\n", v1);
                break;
            }
            case 4: {
                return;
            }
        }
    }
}

void subsequence(string u, string v) {
    string u1, v1;
    str(&u1);
    str(&v1);
    int l, i, j;
    while (1){
        printf("\nCuantos caracteres quiere quitar? : > ");
        scanf("%d", &l);
        char remove[l];
        for (i = 0; i < l; ++i) {
            printf("\nCaracter %d > :", (i + 1));
            fflush(stdin);
            scanf("%c", &remove[i]);
        }
        switch (menu_subseq()) {
            case 1: {
                printf("\nSubsecuencia de AMBAS");
                str_subseq(u1, u, remove, l);
                str_subseq(v1, v, remove, l);
                printf("\nCadenas originales:\n  %s\n  %s", u, v);
                printf("\nResultado:\n  %s\n  %s\n", u1, v1);
                break;
            }
            case 2: {
                printf("\nSubsecuencia de U");
                str_subseq(u1, u, remove, l);
                printf("\nCadenas originales:\n  %s", u);
                printf("\nResultado:\n  %s\n", u1);
                break;
            }
            case 3: {
                printf("\nSubsecuencia de V");
                str_subseq(v1, v, remove, l);
                printf("\nCadenas originales:\n  %s", v);
                printf("\nResultado:\n  %s\n", v1);
                break;
            }
            case 4: {
                return;
            }
        }
    }
}

void invert(string u, string v) {
    string u1, v1;
    str(&u1);
    str(&v1);
    while (1) {
        switch (menu_invert()) {
            case 1: {
                printf("\nInvertir AMBAS");
                str_invert(u1, u);
                str_invert(v1, v);
                printf("\nCadenas originales:\n  %s\n  %s", u, v);
                printf("\nResultado:\n  %s\n  %s\n", u1, v1);
                break;
            }
            case 2: {
                printf("\nInvertir U");
                str_invert(u1, u);
                printf("\nCadenas originales:\n  %s", u);
                printf("\nResultado:\n  %s\n\n", u1);
                break;
            }
            case 3: {
                printf("\nInvertir U");
                str_invert(v1, v);
                printf("\nCadenas originales:\n  %s", v);
                printf("\nResultado:\n  %s\n", v1);
                break;
            }
            case 4: {
                return;
            }
        }
    }
}

void power(string u, string v) {
    int pow, i;
    string u1, v1;
    str(&u1);
    str(&v1);
    while (1) {
        printf("\nEspecifique la potencia: > ");
        fflush(stdin);
        scanf("%d", &pow);
        if(pow > 0) {
            str_copy(u1, u);
            str_copy(v1, v);
        } else {
            pow = pow * -1;
            str_invert(u1, u);
            str_invert(v1, v);
        }
        switch (menu_power()) {
            case 1: {
                printf("\nPotencia de AMBAS");
                printf("\nCadenas originales:\n  %s\n  %s", u, v);
                printf("\nResultado:\n  ");
                for (i = 0; i < pow; ++i) {
                    printf("%s", u1);
                }
                printf("\n  ");
                for (i = 0; i < pow; ++i) {
                    printf("%s", v1);
                }
                printf("\n");
                break;
            }
            case 2: {
                printf("\nPotencia de U");
                printf("\nCadenas originales:\n  %s", u);
                printf("\nResultado:\n  ");
                for (i = 0; i < pow; ++i) {
                    printf("%s", u1);
                }
                printf("\n");
                break;
            }
            case 3: {
                printf("\nPotencia de U");
                printf("\nCadenas originales:\n  %s", v);
                printf("\nResultado:\n  ");
                for (i = 0; i < pow; ++i) {
                    printf("%s", v1);
                }
                printf("\n");
                break;
            }
            case 4: {
                return;
            }
        }
    }
}

int main(int argc, const char * argv[]) {
    string u, v;
    str(&u);
    str(&v);
    readstrings(u, v);
    while(1) {
        switch (menu_main()){
            case 1: {
                readstrings(u, v);
                break;
            }
            case 2: {
                showstrings(u, v);
                break;
            }
            case 3: {
                concatenation(u, v);
                break;
            }
            case 4: {
                prefix(u, v);
                break;
            }
            case 5: {
                suffix(u, v);
                break;
            }
            case 6: {
                substring(u, v);
                break;
            }
            case 7: {
                subsequence(u, v);
                break;
            }
            case 8: {
                invert(u, v);
                break;
            }
            case 9: {
                power(u, v);
                break;
            }
            case 10: {
                exit(0);
            }
        }
    }
}
