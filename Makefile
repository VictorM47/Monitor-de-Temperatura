CC = gcc
CFLAGS = -Wall -Wextra -O2
SRC = main.c monitor.c sensor.c logger.c
TARGET = thermal_monitor

all:
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

clean:
	rm -f $(TARGET) *.o *.log
