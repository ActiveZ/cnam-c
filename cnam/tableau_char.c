void saisir_tab_char(char t[][100], int taille) {
	for (int i = 0; i < taille; i++) {
		printf("Entrez une chaine de caracteres\n");
		scanf("%s", t[i]);
	}
}


void afficher_tab_char(char t[][100], int taille) {
	for (int i = 0; i < taille; i++) {
		printf("str[%i]: %s\n", i, t[i]);
	}
}

void trier_tab_char(char t[][100], int taille) {
	char tmp[100];
	int i, j;

	for (i = 0; i < taille; i++) {
		for (j = 0; j < taille - 1; j++) {
			if (strcmp(t[j], t[j + 1]) > 0) {
				strcpy(tmp, t[j]);
				strcpy(t[j], t[i]);
				strcpy(t[i], tmp);
			}
		}
	}
}