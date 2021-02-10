#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX 10

int main(void) {
	int n, sum = 0;
	int arr[MAX];

	printf("Nombre delements:");
	scanf("%i", &n);
	for (int i = 0; i < n; i++) {
		printf("arr[%i] = ", i);
		scanf("%i", &arr[i]);
	}

	for (int i = 0; i < n; i++) {
		sum += arr[i];
	}

	printf("Somme = %i", sum);
}

//arr[i] != '\0'