# C Temperature Monitor

A lightweight hardware temperature monitor and logger for Linux written in C.

## Features
- Reads real CPU thermal sensors directly from Linux sysfs (`/sys/class/thermal/thermal_zone0/temp`), with an automatic fallback simulator when hardware sensors are unavailable.
- Modular architecture separating sensor polling (`sensor.c`), threshold monitoring (`monitor.c`), and persistent file logging (`logger.c`).
- Zero external dependencies (pure C standard library).

## Build & Run

```bash
make
./thermal_monitor
```

## Clean Build Artifacts

```bash
make clean
```
