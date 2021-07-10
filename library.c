#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {

	FILE *file;
	char string[1024];

	int lines_in_file = 0;

	file = fopen("library","r");
	if (!file) {
		return 0;
	}

	while (fgets(string, 1000, file) != NULL) {
		printf(string);
		lines_in_file++;
	}

	printf("%d", lines_in_file);
	printf("\n");

	fclose(file);
	return 0;

}
