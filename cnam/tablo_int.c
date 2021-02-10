#include "tablo_int.h"
#include <stdio.h>


void saisir_tab_int(int* tab, int taille) {

	for (int i = 0; i < taille; i++) {
		printf("tab[%d] = ", i);
		scanf("%d", tab + i);
	}
}

void afficher_tab_int(const int* tab, int taille) {

	for (int i = 0; i < taille; i++) {
		printf("tab[%d] = %d\n", i, *(tab + i));
	}
}

void saisir_tab_int_2(int tab[], int taille) {

	for (int i = 0; i < taille; i++) {
		printf("tab[%d] = ", i);
		scanf("%d", &tab[i]);
	}
}

void afficher_tab_int_2(const int tab[], int taille) {

	for (int i = 0; i < taille; i++) {
		printf("tab[%d] = %d\n", i, tab[i]);
	}
}

void copy_tab_int(const int tab_source[], int tab_cible[], int taille) {

	for (int i = 0; i < taille; i++) {
		tab_cible[i] = tab_source[i];
	}
	printf("copie du tableau:\n");
}

int min_tab_int(const int* tab, int taille) {
	int min = tab[0];

	for (int i = 0; i < taille; i++) {
		min = tab[i] < min ? tab[i] : min;
	}
	return min;
}

int max_tab_int(const int* tab, int taille) {
	int max = tab[0];

	for (int i = 0; i < taille; i++) {
		max = tab[i] > max ? tab[i] : max;
	}
	return max;
}

void chercher_bornes_tab_int(const int* tab, int taille) {
	int min, max;

	min = max = tab[0];

	for (int i = 0; i < taille; i++) {
		min = tab[i] < min ? tab[i] : min;
		max = tab[i] > max ? tab[i] : max;
	}
	printf("min = %i, max = %i\n", min, max);
}

void BubbleSortAsc(int a[], int array_size) {
	printf("Tableau trie en ordre croissant:\n");
	int i, j, temp;
	for (i = 0; i < (array_size - 1); ++i)
	{
		for (j = 0; j < array_size - 1 - i; ++j)
		{
			if (a[j] > a[j + 1])
			{
				temp = a[j + 1];
				a[j + 1] = a[j];
				a[j] = temp;
			}
		}
	}
}

void BubbleSortDesc(int a[], int array_size) {
	printf("Tableau trie en ordre decroissant:\n");
	int i, j, temp;
	for (i = 0; i < (array_size - 1); ++i)
	{
		for (j = 0; j < array_size - 1 - i; ++j)
		{
			if (a[j] < a[j + 1])
			{
				temp = a[j + 1];
				a[j + 1] = a[j];
				a[j] = temp;
			}
		}
	}
}