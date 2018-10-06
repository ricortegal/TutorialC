#include <stdio.h>

int main(int argc, char **argv)
{
 
	char *nombres[] = {"Alberto","Maribel","Ulises","Jorge","Aroa","JuanFran","Paco","Loli"};

    int asize = sizeof(nombres)/sizeof(void*);

    for(int i=0;i<asize;i++){
        printf("%s\n",*(nombres + i));
        printf("\n");
        printf("%s\n",nombres[i]);
    }

}
