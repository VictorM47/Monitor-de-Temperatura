#include <stdio.h>
#include "sensor.h"
#include "logger.h"
#include "monitor.h"
#include <unistd.h>

int main() {
	

	while (1){
		float temperatura = ler_temperatura();
		 registrar_temperatura( temperatura);
		 printf("%.1f\n", temperatura);
		 verificar_temperatura(temperatura);
		 sleep(2);
	}
	return 0;
}
