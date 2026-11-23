#include <stdio.h> 
#include "logger.h"

void registrar_temperatura(float temperatura){
	
	FILE *arquivo;

	arquivo = fopen("temperaturas.log", "a");

	if (arquivo == NULL) {
	       printf("Erro ao abri o arquivo!\n");
       return;
	}

	fprintf(arquivo,"%.2f\n",temperatura);	

	fclose(arquivo);
}
