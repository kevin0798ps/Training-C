#include <stdio.h>
#include <stdlib.h>

int main () {
	FILE *fptr;
	FILE *out;
	char ch;

	out=fopen("out.txt", "a+");
	fptr=fopen("essay.txt", "r");
	if(fptr==NULL) {
	printf("Cannot open file \n");
	exit(0);  }

	ch=fgetc(fptr);
	while (ch != EOF) {
		fprintf(out,"%c", ch);
		ch=fgetc(fptr);
	}

	fclose(fptr);
	fclose(out);
	return(0);

}
