
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main1(void) { //Affiche la taille des types primitifs C
	char a = 'a';

	printf("Taille d'un char = %lu\n", sizeof(char));
	printf("Taille du char %c = %lu\n", a, sizeof(a));

	printf("Taille d'un short = %lu\n", sizeof(short));
	printf("Taille d'un int = %lu\n", sizeof(int));
	printf("Taille d'un long = %lu\n", sizeof(long));
	printf("Taille d'un long long = %lu\n", sizeof(long long));
	printf("Taille d'un float = %lu\n", sizeof(float));
	printf("Taille d'un double = %lu\n", sizeof(double));
	printf("Taille d'un long double = %lu\n", sizeof(long double));

	return EXIT_SUCCESS;
}

int main2(void) { //Affiche les valeurs MIN et MAX des types entier signés et non signés
	int a = 4;
	int b = 7;
	int c = a += b;
	int d = a =+ b;
	printf(d, '\n');

	printf("valeur de CHAR_MIN = %i et en hexa =%x\n", CHAR_MIN,CHAR_MIN);
	printf("valeur de CHAR_MAX = %i et en hexa =%x\n", CHAR_MAX,CHAR_MAX);
	printf("valeur de UCHAR_MIN = %i et en hexa =%x\n", 0,0);
	printf("valeur de UCHAR_MAX = %i et en hexa =%x\n\n", UCHAR_MAX,UCHAR_MAX);

	printf("valeur de SHRT_MIN = %i et en hexa =%x\n", SHRT_MIN,SHRT_MIN);
	printf("valeur de SHRT_MAX = %i et en hexa =%x\n", SHRT_MAX,SHRT_MAX);
	printf("valeur de USHRT_MIN = %i et en hexa =%x\n", 0,0);
	printf("valeur de USHRT_MAX = %i et en hexa =%x\n\n", USHRT_MAX,USHRT_MAX);


	printf("valeur de INT_MIN = %i et en hexa =%x\n", INT_MIN,INT_MIN);
	printf("valeur de UINT_MIN = %i et en hexa =%x\n", 0,0);
	printf("valeur de INT_MAX = %i et en hexa =%x\n", INT_MAX, INT_MAX);
	printf("valeur de UINT_MAX = %u et en hexa =%x\n\n", UINT_MAX,UINT_MAX);

	return EXIT_SUCCESS;
}

int main3(void) { // conversion implicite de formats entre variables de type entier
	char un = '1';
	short deux = 2;
	int trois = un + deux;
	const int quatre = un + deux + trois;

	printf("valeur de la variable un en caractere ascii=%c et en valeur entiere=%d\n", un, un);
	printf("valeur de la variable deux en caractere ascii=%c et en valeur entiere=%d\n", deux, deux);
	printf("valeur de la variable trois en caractere ascii=%c et en valeur entiere=%d\n", trois, trois);
	printf("valeur de la constante quatre en caractere ascii=%c et en valeur entiere=%d\n\n", quatre, quatre);

	// quatre = 100; cannot assign to variable 'quatre' with const-qualified type 'const int'
	printf("resulat de l'expression (trois * quatre * 100) = %d\n", trois * quatre * 100);
	un = trois * quatre * 100;
	deux = trois * quatre * 100;
	trois = trois * quatre * 100;

	printf("nouvelle valeur de la variable un en entiere=%d\n", un);
	printf("nouvelle valeur de la variable deux en entiere=%d\n", deux);
	printf("nouvelle valeur de la variable trois en entiere=%d\n", trois);

	return EXIT_SUCCESS;
}

int main4(void) { //affichage de litteraux d'entier dans différentes bases

	printf("un litteral char=%c, un litteral d'entier=%i, en octal %o et en hexa=%x\n", 'a', 10,10,10);
	printf("10 en décimal=%i, 10 en octal=%i, 10 en hexa=%i\n", 10,010,0x10);
	printf("litteral float %f, un litteral double %lf  et un litteral de chaine = %s\n", 10.0f,10.0,"10.0");

	return EXIT_SUCCESS;
}

int main5(void) { // évaluations d'expressions, priorité des opérateurs

	printf("resultat de l'expression 10 - 20 * 2 = %d\n", 10 - 20 * 2);
	printf("resultat de l'expression 10 - 20 * 2 = %d\n", 10 - (20 * 2));
	printf("resultat de l'expression 10 - 20 * 2 = %d\n\n", (10 - 20) * 2);

	printf("resultat de l'expression 15 / 7 = %d\n", 15 / 7);
	printf("resultat de l'expression 15 %% 7 = %d\n", 15 % 7);
	printf("resultat de l'expression 15 / 7.Of = %f\n", 15 / 7.0f);

	return EXIT_SUCCESS;
}

int c1;
int main6(void) { //valeur initiale d'une variale globale et locale, expressions booléennes

	int a = 10;
	int b = 20;
	int c2;
	printf("valeur initiale d'une variale globale non initialisée = %d\n", c1);
	//printf("valeur initiale d'une variale locale non initialisée = %d\n", c2);
	printf("resultat de l'expression a > b = %d\n", a > b);
	printf("resultat de l'expression a == b = %d\n", a == b);
	printf("resultat de l'expression a < b = %d\n", a < b);
	printf("resultat de l'expression a = b = %d\n", a = b);
	printf("apres a vaux %d\n", a );
	c1 = a = b = 10*10;
	printf("c1=%d, b=%d et a=%d\n", c1, b, a);

	printf("valeur de l'expression  !0=%d\n",!0);

	return EXIT_SUCCESS;
}

int main7(void) { //opérateurs de chaines de bits (masque)

	int a = 10;
	printf("resultat de l'expression a &= 0xFFFFFFFF =%d\n", (a &= 0xFFFFFFFF));
	printf("valeur de a=%d\n", a);
	printf("resultat de l'expression a &= 0x00000000 =%d\n", (a &= 0x00000000));
	printf("valeur de a=%d\n", a);
	printf("resultat de l'expression a |= v =%d\n", (a |= 0xFFFFFFFF));
	printf("valeur de a=%d\n", a);

	return EXIT_SUCCESS;
}

int main8(void) { //Comportement d'expressions logiques

	printf("resultat de l'expression 0 && printf(\"&&\") %d\n", 0 && printf("&&\n"));
	printf("resultat de l'expression 1 && printf(\"&&\") %d\n", 1 && printf("&&\n"));
	printf("resultat de l'expression 0 || printf(\"||\") %d\n", 0 ||  printf("||\n"));
	printf("resultat de printf(\"bonjour\\n\")=%d\n", printf("bonjour\n"));
	return EXIT_SUCCESS;
}

int main9(void) { //comportement des opérateurs pré et post fixés
	int a = 10;
	int b = 20;
	int c = ++b - a--;

	printf("resultat de l'expression c = ++b - a-- %d\n", c);
	printf("valeur de a%d, valeur de b=%d, valeur de c=%d\n", a,b,c);
	return EXIT_SUCCESS;
}

int main10(void) { //comportement de l'opérateur ternaire
	int a = 10;
	int b = 20;
	int plus_grand = a>b ? a  : b;

	printf("resultat de l'expression max = a>b ? a  : b=%d\n", plus_grand);
	return EXIT_SUCCESS;
}

int main11(void) { //conversion explicite de format (cast)
	float a = 10.0f;
	printf("taille de a=%lu et taille de (double)a=%lu\n", sizeof(a), sizeof((double)a));
	return EXIT_SUCCESS;
}

int main12(void) { // différents formatages du printf

	printf("justifie a gauche 5 digits = %-5dfin\n", 10 - 20 * 2);
	printf("justifie a droite 10 digits = %10d \n", 10 - (20 * 2));
	printf("justifie a droite 15 digits = %15d \n\n", (10 - 20) * 2);

	printf("resultat de l'expression 15 / 7 = %-5dfin\n", 15 / 7);
	printf("resultat de l'expression 15 %% 7 = %05d\n", 15 % 7);
	printf("resultat de l'expression 15 / 7.Of = %8.5f\n", 15 / 7.0f);

	return EXIT_SUCCESS;
}

int main13(void) { //saisie formatée des données au clavier (scanf), notion d'adresse

	char a;
	int b;
	float c;
	double d;
	char e[10];


	printf("Entrez un caractere : "); scanf("%c", &a);
	printf("Entrez un entier : "); scanf("%d",&b);
	printf("Entrez un float : "); scanf("%f",&c);
	printf("Entrez un double : "); scanf("%lf",&d);
	printf("Entrez une chaine : "); scanf("%9s",e);

	printf("a=%c, b=%d, c=%.2f, d=%.5f, e=%s\n", a,b,c,d,e);

	return EXIT_SUCCESS;
}

int main14(void) { //saisie d'un flux de caractère au clavier (getchar()), notion de EOF (ctl d linux ou ctlz windows pour sortir

	int c;
	while ((c=getchar()) != EOF) {
		putchar(c); putchar('\n');
	}
	printf("%d\n",c);
	return EXIT_SUCCESS;
}

int main15(void) { // convertit les caractères minscules en majuscles les majuscule en * et les autres en -

	int c;
	while ((c=getchar()) != EOF) {
		if(c>= 'a' && c<='z') // caractere minuscule
			c = c - ('a' - 'A');
		else if(c < 'A' || c > 'Z') // caractere autres que minuscule et majuscule
			c = '-';
		else
			c = '*';
		putchar(c);
	}
	printf("%d\n",c);
	return EXIT_SUCCESS;
}

int main16(void) { // construction d'expressions arithmétiques
	int a,b;
	char ope;

	printf("Entrez 2 valeurs entieres  : ");
	scanf("%d %d",&a, &b);
	getchar();
	printf("Entrez l'operateur '+' '-' '*' '/' '%%'  : ");
	scanf("%c",&ope);

	int resultat;

	switch (ope) {
		case '+': resultat = a + b; break;
		case '-': resultat = a - b; break;
		case '*': resultat = a * b; break;
		case '/': resultat = a / b; break;
		case '%': resultat = a % b; break;
		default:
			printf("erreur dans la saisie de l'aoperateur ...");
			return EXIT_FAILURE;
	}
	printf("resultat de l'expression %d %c %d = %d\n", a, ope, b, resultat);
	return EXIT_SUCCESS;
}

#define TRUE 1
int main17(void) {
	// saisie de caractères au clavier
	// affichage des lettres uniquement
	// et sortie sur reconnaissance du caractère 'q' ou 'Q'

	int c;
	while (TRUE) {
		c=getchar(); // caractere minuscule
		if(c == 'q' || c == 'Q')
			break;
		else if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
			putchar(c);
	}
	printf("fini ...\n");
	return EXIT_SUCCESS;
}

int main18(void) {
	// Calculer le nombre de caractères par ligne saisis au clavier

	int c=0;
	int nbLigne = 1;
	while (TRUE) {
		int nbCar;
		for(nbCar = -1, c = 0; c != '\n'; nbCar++) { // caractere minuscule
			c = getchar();
		}

		fseek(stdin,0,SEEK_END);
		printf("nb caracteres saisis dans la ligne %d=%d\n", nbLigne, nbCar);
		nbLigne++;
	}
	printf("fini ...\n");
	return EXIT_SUCCESS;
}

int main19(void) {
	// Calculer le nombre de caractères de la ligne courante
	// et répéter le traitement jusqu'à une certaine condition

	int c=0;
	char choix;
	do {
		fseek(stdin,0,SEEK_END);
		int nbCar;
		for(nbCar = -1, c = 0; c != '\n'; nbCar++) { // caractere minuscule
			c = getchar();
		}
		printf("nb caracteres saisis dans la ligne=%d\n",nbCar);
		printf("on recommence [o/n] ?"); scanf("%c",&choix);
	} while(choix != 'n');
	printf("fini ...\n");
	return EXIT_SUCCESS;
}

int main20(void) {
	// faire la somme des caractères numeriques saisis dans une ligne
	char choix;
	do {
		int c;
		int somme = 0;
		fseek(stdin,0,SEEK_END);
		while((c = getchar()) != '\n') { // caractere minuscule
			if(c<'0' || c>'9')
				continue;
			somme +=c-'0';
		}
		printf("somme des caractères numeriques de la ligne=%d\n",somme);
		printf("on recommence [o/n] ?"); scanf("%c",&choix);
	} while(choix != 'n');
	printf("fini ...\n");
	return EXIT_SUCCESS;
}

int plus_grand(int a, int b) {
	return a>b? a : b;
}

int main21(void) { //définition de la fonction plus_grand et appel de cette fonction
	int a;
	int b;
	printf("Entrez deux entiers : "); scanf("%d %d",&a, &b);
	printf("la valeur la plus grande entre %d et %d est %d\n", a,b,plus_grand(a,b));
	return EXIT_SUCCESS;
}

int power(int valeur, int exposant) {
	if(exposant == 1)
		return valeur;
	else
		return valeur * power(valeur, exposant-1);
}

int main22(void) { //fonction power ecrite de manière récursive
	int valeur;
	int exposant;
	printf("Entrez une valeur et un exposant : "); scanf("%d %d",&valeur, &exposant);
	printf("%d à la puissance %d = %d\n", valeur,exposant,power(valeur,exposant));
	return EXIT_SUCCESS;
}

int foo(int, int); //prototype de fonction
int main23(void) { //Invocation d'une fonction prototypé
	int valeur;
	int exposant;
	printf("Entrez une valeur et un exposant : "); scanf("%d %d",&valeur, &exposant);
	printf("%d à la puissance %d = %d\n", valeur,exposant,foo(valeur,exposant));
	return EXIT_SUCCESS;
}

int foo(int a, int b) { return power(a,b); }

#include "module.h"
int main24(void) { //Utilisation de la programmation modulaire (fichier .h et fichier .c associé)
	entier valeur;
	entier exposant;
	printf("Entrez une valeur et un exposant : "); scanf("%d %d",&valeur, &exposant);
	power_2(valeur, exposant);
	printf("Résultat = %d\n",var_globale);
	return EXIT_SUCCESS;
}

int main25(void) { // affiche la plus petite et la plus grande valeurs d'un tableau d'entiers
	int tab[] = {12,-2,8,34,0,-3};
	int max = INT_MIN;
	int min = INT_MAX;
	for(int i = 0; i< sizeof(tab)/sizeof(int);i++) {
		if(tab[i] > max)
			max = tab[i];
		if(tab[i] < min)
			min = tab[i];
	}

	printf("la valeur min=%d et la valeur max=%d\n", min, max);
	return EXIT_SUCCESS;
}

int find_lower(int tab[], int taille) { // restitue la plus petite valeur d'un tableau d'entiers

	int min = INT_MAX;
	for(int i = 0; i< taille;i++) {
		if(tab[i] < min)
			min = tab[i];
	}
	return min;
}

int main26(void) { // affiche la plus petite valeur d'un tableau d'entiers saisis au clavier
	int tab[100];
	printf("Entrez des valeurs entieres positives ou -1 pour finir la saisie du tableau\n");
	int i = 0;
	do {
		printf("tab[%d] = ",i);scanf("%d",&tab[i]);
	}while(tab[i++] != -1);
	printf("la valeur min=%d\n", find_lower(tab,i-1));
	return EXIT_SUCCESS;
}

int fill_with_char(char tab[]) { // remplit un taleau par des chars saisis au clavier et fini par '0'
	int i = 0;
	while((tab[i++] = getchar()) != '0');
	tab[--i]=0;
	return i;
}

int main27(void) { // appel fill_with_char et exploite le résultat comme une chaine de cars
	char tab[100];
	printf("Entrez des caractères au clavier jusqu'à '0' \n");
	int nbCars = fill_with_char(tab);
	printf("chaine de %d cars saisie = %s",nbCars,tab);
	return EXIT_SUCCESS;
}

int main28(void) { // affiche verticalement le contenu d'une chaine saisie au clavier
	char buffer[100];
	printf("Entrez un chaine de caractères : ");
	scanf("%s", buffer);
	int i = 0;
	while(buffer[i])
		printf("%c\n", buffer[i++]);

	return EXIT_SUCCESS;
}




