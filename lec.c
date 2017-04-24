#include <stdio.h>
#include <stdlib.h>

int main () {
	FILE *fptr;
	char ch;

	fptr=fopen("essay.txt", "r");
	if(fptr==NULL) {
	printf("Cannot open file \n");
	exit(0);  }

	ch=fgetc(fptr);
	while (ch != EOF) {
		printf("%c", ch);
		ch=fgetc(fptr);
	}

	fclose(fptr);
	return(0);

}
