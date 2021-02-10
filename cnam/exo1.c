#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main111(void) {

	int c;

	printf("Entrez une chaine de caracteres\n");
	
	while ((c = getchar()) != '\n') {
		if (isalpha(c)) putchar(toupper(c));
		else if (isdigit(c)) putchar('*');
		else putchar('_');
	}
	putchar('\n');


	//char s[100];
	//scanf('%s',s);
	//printf("longeur tableau s: %i\n", sizeof(s));
	//for (int i = 0; s[i]!='\0' ; i++) {
	//	putchar(s[i]);
	//}

return EXIT_SUCCESS;
}
