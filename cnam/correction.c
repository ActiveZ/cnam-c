#include <stdio.h>
#include <stdlib.h>

//saisir un tableau d'entiers de N éléments, 
//en faire la somme
//afficher cette somme
int main4() {
	int tab[50];
	int somme = 0;
	int nb_elem;
	printf("Entrez le nombre d'elements = "); scanf("%d", &nb_elem);
	for (int i = 0; i < nb_elem; i++) {
		printf("tab[%d] = ", i);
		scanf("%d", &tab[i]);
	}
	for (int i = 0; i < nb_elem; i++) {
		somme += tab[i];
	}
	printf("somme = %d\n", somme);

}

//Afficher le jour de la semaine où tombe Noël
//pour une année saisie au clavier et compris entre 2000 et 2100
//En 2000 Noël tombe un lundi ...

int main1() {
	int annee;
	int jour_num;

	annee = saisie_int_intervalle(2000, 2100);

	jour_num = ((annee - 2000) + (annee - 2000) / 4) % 7;

	switch (jour_num)
	{
	case 0: printf("En %d, Noel est un lundi\n", annee); break;
	case 1: printf("En %d, Noel est un mardi\n", annee); break;
	case 2: printf("En %d, Noel est un mercredi\n", annee); break;
	case 3: printf("En %d, Noel est un jeudi\n", annee); break;
	case 4: printf("En %d, Noel est un vendredi\n", annee); break;
	case 5: printf("En %d, Noel est un samedi\n", annee); break;
	case 6: printf("En %d, Noel est un dimanche\n", annee); break;
	}
}

//développer une petite calculatrice ....
// saisir 2 entiers et l'opérateur correspondant à l'opération à exécuter
// Exécuter cette opération et afficher son résultat
int main2() {

	int op1, op2;
	char operateur;
	char choix;
	do {
		printf("entrez deux entiers : ");
		while (scanf("%d %d", &op1, &op2) != 2) {
			fseek(stdin, 0, SEEK_END);
			printf("Erreur dans saisie des 2 entiers \n");
		}

		fseek(stdin, 0, SEEK_END);
		printf("entrez un operateur [+ - * / ] : ");
		scanf("%c", &operateur);
		switch (operateur)
		{
		case '+': printf("%d %c %d = %d\n", op1, operateur, op2, op1 + op2); break;
		case '-': printf("%d %c %d = %d\n", op1, operateur, op2, op1 - op2); break;
		case '*': printf("%d %c %d = %d\n", op1, operateur, op2, op1 * op2); break;
		case '/': printf("%d %c %d = %d\n", op1, operateur, op2, op1 / op2); break;
		default: printf("erreur dans saisie de l'operateur\n");
		}
		printf("Une autre operation ... [o/n]?");
		fseek(stdin, 0, SEEK_END);
		choix = getchar();
		if (choix == 'o' || choix == 'O')
			break;
	} while (1);

	return EXIT_SUCCESS;
}


//Faire l'écho sur la console de ce qui est saisi au clavier ...
int main112() {

	for (int c = getchar(); c != '\n'; c = getchar()) {
		putchar(c);
	}

	char s[100];
	scanf("%s", s);
	for (int i = 0; s[i] != '\0'; i++) {
		putchar(s[i]); printf("%c", s[i]);
	}

	return EXIT_SUCCESS;
}