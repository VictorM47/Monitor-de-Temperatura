#include <stdio.h>
#include "monitor.h"

#define TEMP_MAX 80.0f
#define TEMP_MIN 30.0f

void verificar_temperatura(float temperatura) {
    if (temperatura > TEMP_MAX) {
        printf("Temperatura alta (%.1f C)\n", temperatura);
    } else if (temperatura < TEMP_MIN) {
        printf("Temperatura baixa (%.1f C)\n", temperatura);
    } else {
        printf("Temperatura normal\n");
    }
}
