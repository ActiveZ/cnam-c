#pragma once


void saisir_tab_int(int* tab, int taille);
void saisir_tab_int_2(int* tab, int taille);

void afficher_tab_int(const int tab[], int taille);
void afficher_tab_int_2(const int tab[], int taille);

int min_tab_int(const int* tab, int taille);
int max_tab_int(const int* tab, int taille);

void copy_tab_int(const int tab_source[], int tab_cible[], int taille);

void BubbleSortAsc(int a[], int array_size); 
void BubbleSortDesc(int a[], int array_size);