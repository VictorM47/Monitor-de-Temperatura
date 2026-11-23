#include <stdio.h>
#include "monitor.h"


void verificar_temperatura(float temperatura){

	if(temperatura > 35){
		printf("Temperatura alta\n");
	}else if(temperatura < 18){
		printf("Temperatura baixa\n");
	}else{
		printf("Temperatura normal\n");
	}
}



