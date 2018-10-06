#include <stdio.h>

int main(int argc, char const **argv)
{
    int a = 17;   // variable de valor entero
    int *puntero; // puntero a entero

    puntero = &a;

    printf("El valor de b es %d (desde puntero) : %d (desdevalor) \n",*puntero,a);
    printf("direccion %p (desde puntero) : %p (desde valor)",puntero,&a);
    return 0;
}