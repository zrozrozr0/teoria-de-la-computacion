#include <stdio.h>
#include <string.h>
int main() {
    FILE *archivo;
    char aux[256],buscar[100],nombre[250], cad[500];
    char *p;
    int i=0;

    printf("Ingrese el nombre del archivo, incluyendo punto y formato:\n");
    scanf("%[^\n]", &nombre);

    archivo = fopen(nombre,"r");

    if(archivo !=NULL)
	{
           printf("Ingrese la palabra deseada a buscar en el archivo %s:", nombre);
            fflush(stdin);
            scanf("%[^\n]", buscar);

		 while(feof(archivo)==0)
		 {

			fgets(cad,500,archivo);
			//printf("%s",cad);
			            i++;
            if(p=strstr(cad,buscar)) {
                     sscanf(p,"%s",aux);

                     }
                     if(!strcmp(aux,buscar)){
					printf("-------------------------------------------- \n");
			   	    printf("El nombre del archivo es: %s\n ",nombre);
			         printf("El n%cmero de la l%cnea es: %d\n",163,161,i);
    				printf("El contenido de la l%cnea es :%s ",161,cad);

                  	}
		 }

	}else{
		printf("Hay un error al abrir el archivo"  );
		}

	fclose(archivo);


   system("pause");
   return 1;

}
