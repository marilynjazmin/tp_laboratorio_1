/*
 ============================================================================
 Name        : TP_2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "input.h"
#include "ArrayPassenger.h"
#define T 4

int main(void) {
	setbuf(stdout,NULL);

	sPassenger listaPasajeros[T];

	int opcion;
	int retorno;

    retorno=initPassengers(listaPasajeros, T);

	do
	{
		opcion=PedirNumero("\nElija una opción:\n1.ALTA de pasajeros.\n2.MODIFICAR lista.\n3.BAJA de pasajeros.\n4.Informar.\n");

		switch(opcion)
		{
		case 1:
			retorno=addPassenger(listaPasajeros, T);
			switch(retorno)
			{
			case 0:
				printf("Cargado exitosamente.\n");
				break;
			case -1:
				printf("No se pudo cargar.\n");
				break;
			}
			break;
		case 2:
			printPassenger(listaPasajeros, T);
			break;
		}

	}while(opcion!=6);



	return EXIT_SUCCESS;
}
