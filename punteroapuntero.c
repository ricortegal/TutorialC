#include <stdio.h>
int main()
{
	int i;
	int *ptrToi;           /* Puntero a entero */
	int **ptrToPtrToi;     /* Puntero a puntero a entero */

	ptrToPtrToi = &ptrToi; /* Puntero contiene direcci�n de puntero */
	ptrToi = &i;           /* Puntero contiene direcci�n de entero */

	i = 10;                /* Asignaci�n directa */
	*ptrToi = 20;          /* Asignaci�n indirecta */
	**ptrToPtrToi = 30;    /* Asignaci�n con doble indirecci�n */

	return 0;
}