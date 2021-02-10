#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "utils.h"

int main(void) {

	int c;

	printf("Entrez une chaine de caracteres\n");

	while ((c = getchar()) != '\n') {
		putchar(to_upper_case(c));
	}

	putchar('\n');

	return EXIT_SUCCESS;
}
