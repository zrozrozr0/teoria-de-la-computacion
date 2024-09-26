#include <stdio.h>

int main ()
{
    char letra;
    printf("Ingresa dos cadenas para realizar la operaci%cn:", 162);
    printf("\n(Solo acepta el caracter A, B)");
    printf("\N Ej. AB (ENTER), AA(ENTER)\n\n");
    scanf("%c",&letra);
    if(letra >= 'a' && letra <= 'z')
        printf("\n-> Es minuscula ");
    else if(letra >= 'A' && letra <= 'Z')
        printf("\n-> Es mayuscula ");
    else
        printf("\n-> No es una letra ");

    getch();
    return 0;
}
