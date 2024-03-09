#include <stdio.h>
void f(){
    char c1[100]= "Hello world";
    char c2[100]= ", I am Rosa Villarreal Hornero";
    char c1[100]= "HOLA ";
    char c2[100]= ", habra conflicto?";
    printf("%s\n", strcat(c1, c2));
    return 0;
}