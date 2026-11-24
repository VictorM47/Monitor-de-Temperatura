#include <stdio.h>
#include <stdlib.h>
#include "sensor.h"

float ler_temperatura(void) {
    FILE *fp = fopen("/sys/class/thermal/thermal_zone0/temp", "r");
    if (fp != NULL) {
        int milli_celsius = 0;
        if (fscanf(fp, "%d", &milli_celsius) == 1) {
            fclose(fp);
            return milli_celsius / 1000.0f;
        }
        fclose(fp);
    }

    
    return (rand() % 251 + 150) / 10.0f;
}
