#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *replace(char *A, const char *B, const char *C){
    int i,j;
    for(i=0;*(A+i)!='\0';i++){
        int count=0,k=0,l=0;
        char *D=(char*)malloc(1000*sizeof(char));
        for(count=0;*(A+i+count)==*(B+count);count++){};
        if(count==strlen(B)-1){ // Búsqueda exitosa
            for(k=0;*(A+i+strlen(B)-1+k)!='\0';k++){
                *(D+k)=*(A+i+strlen(B)-1+k); // Copie las cadenas siguientes para prepararse para el desplazamiento
                *(A+i+strlen(B)-1+k)=0; //Vacío
            }
            *(A+i+strlen(B)-1+k)=0; //
            for(j=0;j<strlen(C)-1;j++){
                *(A+i+j)=*(C+j);    // Insertar caracteres
            }
            for(l=0;l<schintrlen(D)-1;l++){
                *(A+i+j+l)=*(D+l); // Agregar caracteres posteriores
            }
            *(A+i+j+l)='\0';
            i=i+j-1;
        }
    }
    return A;
}

int main(){
    char A[1000], B[100], C[100];
    printf("input A:");
    fgets(A,1000,stdin);
    printf("input B:");
    fgets(B,100,stdin);
    printf("input C:");
    fgets(C,100,stdin);
    printf("output A:");
    printf("%s",replace(A,B,C));
    return 0;
}

