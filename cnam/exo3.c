#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main333(void) {
	// noel 2000 -> lundi
	int year, day, ok = 0, stop = 0;
	char rep[20];
	while (!stop) {
		while (!ok ) {
			printf("Entrez l'annee entre 2000 et 2100 (0 pour sortir):\n");
			ok = scanf("%i", &year) == 1 && year > 1999 && year < 2101 || year == 0;
			stop = year == 0;
			fseek(stdin, 0, SEEK_END);
		}
	
		if (!stop) {
			ok = 0;
			day = (year - 2000 + (year - 2000) / 4)  % 7;
			//printf("day: %i\n", day);
			switch (day) {
			case 0: strcpy(rep, "lundi"); break;
			case 1: strcpy(rep, "mardi"); break;
			case 2: strcpy(rep, "mercredi"); break;
			case 3: strcpy(rep, "jeudi"); break;
			case 4: strcpy(rep, "vendredi"); break;
			case 5: strcpy(rep, "samedi"); break;
			case 6: strcpy(rep, "dimanche"); break;
			}
			printf("En %i, noel est un %s\n", year, rep);
		}
		else printf("Au revoir !\n");
	}
	return 0;
}