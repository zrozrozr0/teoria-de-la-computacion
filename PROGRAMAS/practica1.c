/* Programa: Programa con cadenas en C (ver 1.8) */

#include <math.h>
#include <stdio.h>
#include <ctype.h>

int main()
{
    int n, opc;
	char letra1, letra2;
	
    do
    {
        printf( "\n   1. Concatenaci%cn.", 162 );
        printf( "\n   2. Potencia.");
        printf( "\n   3. Inverso." );
        printf( "\n   4. Prefijos y Sufijos." );
        printf( "\n   5. Subcadenas." );
        printf( "\n   6. Salir." );
        printf( "\n\n   Selecciona una de las operaciones anteriores (1-6): ");

        scanf( "%d", &opc );

        /* Inicio del anidamiento */

        switch ( opc )
        {
            case 1: printf("Ingresa dos cadenas para realizar la operaci%cn:", 162);
    				printf("\n(Solo acepta el caracter A, B)");
    				printf("\N Ej. A (ENTER), B(ENTER)\n\n");
					scanf( "%d", &n );
					if(letra1 >= 'A' && letra1 <= 'B')
					{	printf("\n-> ingresa la segunda cadena");
					}
                    printf( "\n   El doble de %d es %d\n\n", n, n * 2 );
                    break;

            case 2: printf( "\n   Introduzca un n%cmero entero: ", 163 );
                    scanf( "%d", &n );
                    printf( "\n   La mitad de %d es %f\n\n", n, ( float ) n / 2 );
                    break;

            case 3: printf( "\n   Introduzca un n%cmero entero: ", 163 );
                    scanf( "%d", &n );
                    printf( "\n   El cuadrado de %d es %d\n\n", n, ( int ) pow( n, 2 ) );
                    
            case 4: printf( "\n   Introduzca un n%cmero entero: ", 163 );
                    scanf( "%d", &n );
                    printf( "\n   El doble de %d es %d\n\n", n, n * 2 );
                    break;
                    
        	case 5: printf( "\n   Introduzca un n%cmero entero: ", 163 );
                    scanf( "%d", &n );
                    printf( "\n   El doble de %d es %d\n\n", n, n * 2 );
                    break;
                    
         }

         /* Fin del anidamiento */

    } while ( opc != 6 );

    return 0;
}
