#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#include "tableau_char.h"


int main(void) {
	// https://www.cours-gratuit.com/langage-c/exercices-langage-c-les-chaines-de-caracteres

	int taille = 3;
	char tab[10][100];

	saisir_tab_char(tab, taille);
	afficher_tab_char(tab, taille);
	trier_tab_char(tab,taille);
	printf("tableau trie:\n");
	afficher_tab_char(tab, taille);

	return EXIT_SUCCESS;
}