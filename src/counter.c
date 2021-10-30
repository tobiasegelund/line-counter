#include <stdio.h>
#include <stdlib.h>

#define MAXLINE 10000

void line_counter(char *file);

int main(int argc, char *argv[]) {
	 if (argc < 2) {
        printf("ERROR: You need at least one argument.\n");
        return 1;
   }
	printf("\tCount\t Name\n");
	for (int i = 1; i < argc; i++){
		line_counter(argv[i]);
	}

	return 0;
}

void line_counter(char *filename){
	int c, nl;
	nl = 0;

	FILE *file = fopen(filename, "r");
	while(!feof(file))
	{
		c = fgetc(file);
		if(c == '\n')
		{
			nl++;
		}
	}
	printf("\t%d\t %s\n", nl, filename);
}

