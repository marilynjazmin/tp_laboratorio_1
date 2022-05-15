#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#ifndef INPUT_H_
#define INPUT_H_

int PedirNumero(char mensaje []);
void getString(char cadena[], char mensaje[]);
int IngresarEntero(char mensaje []);
int ValidarNumero(char numeros[]);
int ValidarCadena(char cadena[]);
float IngresarFlotante(char mensaje [], float minimo, float maximo);

#endif /* INPUT_H_ */
