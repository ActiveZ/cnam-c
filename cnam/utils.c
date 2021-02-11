#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int saisie_int_intervalle(int min, int max) {
	int code_retour, valeur;

	do {
	printf("Entrez une annee comprise entre [%i-%i] :", min, max);
	fseek(stdin, 0, SEEK_END);
	code_retour = scanf("%d", &valeur);
	if (code_retour != 1 || (valeur < min || valeur > max))
		printf("Erreur dans saisie de la valeur \n");
	else
		return valeur;
	} while (1);
}

/////////////////////////////////////////////////////////////////////

char to_upper_case(char c) {
	//if (isalpha(c)) return(toupper(c));
	//return c;
	return(toupper(c));
}

/////////////////////////////////////////////////////////////////////

