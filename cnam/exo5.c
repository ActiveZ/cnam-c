#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#include "utils.h"
#include "tablo_int.h"


int main55(void) {

	int c;

	printf("Entrez une chaine de caracteres\n");

	while ((c = getchar()) != '\n') {
		putchar(to_upper_case(c));
	}
	putchar('\n');

	return EXIT_SUCCESS;
}


int main555() {
	char buf[] = "abc";
	char* p = buf;

	printf("%s %s %zi %zi\n", buf, p, sizeof(buf), strlen(buf));

	printf("%i %i %i", strcmp("aab", "aaa"),strcmp("aaa", "aaa"),strcmp("aaa", "aab"));

	//printf("%s %s");

	return 0;

	int t[10];
	int t_cible[10];

	printf("saisie du tableau:\n");
	saisir_tab_int(t, 5);
	printf("affichage du tableau:\n");
	afficher_tab_int(t, 5);

	//saisir_tab_int(t, 8);
	//afficher_tab_int(t, 5);

	// recherche min du tableau
	printf("Minimum du tableau: %i\n", min_tab_int(t, 5));

	// recherche maximun du tableau
	printf("Maximum du tableau: %i\n", max_tab_int(t, 5));

	// copie du tableau source -> tableau cible
	copy_tab_int(t, t_cible, 10);
	afficher_tab_int(t_cible, 5);

	// tri par ordre ascendant
	BubbleSortAsc(t, 5);
	afficher_tab_int(t, 5);

	// tri par ordre descendant
	BubbleSortDesc(t, 5);
	afficher_tab_int(t, 5);

	return 0;
}