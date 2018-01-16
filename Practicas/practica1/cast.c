#include <stdio.h>

int main() {
    int a = 4;
    int j;
    int *p;
    float f = 7.5;
    int max = 2147483647;
    long d;
    int b = a + (int)f; // 11
    float c = a*f;

    // (arreglo + 1) cuanto me tengo que desplazar, es una direccion
    // (arreglo + 1) = 20 es lo mismo que arreglo[1] = 20
    int arreglo[5] = {0,2};
    d = (long)max * max;
    p = arreglo;

    // sizeof(arreglo)/sizeof(arreglo[0]), 20/4
    for(int k = 0; k< sizeof(arreglo)/sizeof(arreglo[0]); k++){
        *p = 67;
        p++;
        // arreglo[k] = 67; o p[k] = 67;
    }

    // *(arreglo + 1) se refiere al contenido, *(arreglo + 1) = 250;
    // un * antes de un apuntador se refiere al contenido, *p = 7;

    // %p = pointer (guarda la direccion de una variable)
    // &a te da la direccion de esa variable
    printf(" p= %p, a= %d, j= %d, b= %d, d= %ld \n", p, a, j, b, d); 
    printf(" f = %f, c = %f, arreglo[1] = %d \n ", f,c, arreglo[1]);
    return 0;
} 