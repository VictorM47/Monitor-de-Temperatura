#include <stdlib.h>
#include "sensor.h"

float ler_temperatura(void) {
	float temperatura = (rand() % 251+150) / 10.0f;
	return temperatura;
}

