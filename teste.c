#include <stdio.h>

int main () {
	FILE *teste;
	teste = fopen("teste.log", "a");

	fprintf(teste, "Meu primeiro registro de arquivo em C\n");

	fclose(teste);
}
