#ifndef ARRAYPASSENGER_H_
#define ARRAYPASSENGER_H_
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "input.h"
#define LIBRE 0
#define OCUPADO 1
#define PREMIUM 2

typedef struct
{
	int id;
	char name[51];
	char lastName[51];
	float price;
	char flycode[10];
	int typePassenger;
	int statusFlight;
	int isEmpty;
}sPassenger;

int initPassengers(sPassenger list[], int len);
int buscarEspacioLibre(sPassenger list[], int len);
int addPassenger(sPassenger list[], int len);
int incrementarId(sPassenger list[], int len);
int printPassenger(sPassenger list[], int len);
void mostrarPassenger(sPassenger pasajero);
int findPassengerById(sPassenger list[], int len, int id);
int menuModificaciones();
int modificarPassenger(sPassenger list[], int len);


#endif /* ARRAYPASSENGER_H_ */
