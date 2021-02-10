#include "module.h"

static int power(int valeur, int exposant) {
	// exemple d'une définition de fonction invocable à uniquement à l'intérieur du module (utilitaire)
	if(exposant == 1)
		return valeur;
	else
		return valeur * power(valeur, exposant-1);
}

entier var_globale; // exemple de définition d'une variable globale

void power_2(int valeur, int exposant) {
	// exemple d'une définition de fonction invocable à l'exterieur du module
	var_globale = power(valeur, exposant);
}
