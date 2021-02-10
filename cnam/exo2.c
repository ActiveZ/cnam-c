#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main222(void) {
	int a, b, erreur = 0;
	char op;
	float result = 0;

	printf("Entrez 2 entiers et un operateur sous la forme a b operateur (+ - * /):\n");
	scanf("%i %i %c", &a, &b, &op);
	//printf("a= %i, b= %i", a, b);
	//printf("size a= %i\n", sizeof(a));
	if (erreur == 0) {
		switch (op)
		{
			case '+': {
				result = a + b;
				break;
			}
			case '-' : {
				result = a - b;
				break;
			}
			case '*' : {
				result = a * b;
				break;
			}
			case '/' : {
				if (b != 0) result = a / b;
				else erreur = 5;
				break;
			}
			default: {
				erreur = 2;
				break;
			}
		}
	}

	if (erreur == 1) printf("ERREUR: operande invalide");
	else if (erreur == 3) printf("ERREUR: operande invalide");
	else if (erreur == 3) printf("ERREUR: operateur %c inconnu !", op);
	else if (erreur == 5) printf("ERREUR: division par zero !");
	else printf("%i %c %i = %f", a, op, b, result);

	return EXIT_SUCCESS;
}