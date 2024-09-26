#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#ifndef MAX
#define MAX 100
#endif

int main() {
    const char* str1 = "hello there 1";
    const char* str2 = "hello there 2";

    char buffer[MAX];
    strcat(strcpy(buffer, str1), str2);
    printf("%s\n", buffer);

    char buffer2[MAX];
    strcat(strcpy(buffer2, "Hello there, "), "Josh");
    strcat(buffer2, "!\nTemporary...");
    printf("%s\n", buffer2);

    exit(EXIT_SUCCESS);
}
