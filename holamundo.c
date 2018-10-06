#include <stdio.h>

int main(int argc, char **argv)
{
	printf("holamundo\n%d parametros\n", argc);
	for (int i = 0; i < argc; i++)
	{
		printf("\t%s\n", *(argv + i));
	}
	getchar();
	return 0;
}

