/*
 * tpbiblioteca1.h
 *
 *  Created on: 9 abr. 2022
 *      Author: maril
 */

#ifndef TPBIBLIOTECA1_H_
#define TPBIBLIOTECA1_H_
#include <stdio.h>
#include <stdlib.h>

/**
 * @fn float PedirNumero(char[])
 * @brief Pide el ingreso de un n�mero.
 *
 * @param mensaje, el mensaje que se escribe.
 * @return Devuelve el  n�mero ingresado.
 */
float PedirNumero(char mensaje[]);
/**
 * @fn float ValidarNumero(float)
 * @brief Valida el n�mero ingresado.
 *
 * @param numero, es el n�mero que se ingres�.
 * @return Devuelve el n�mero validado.
 */
float ValidarNumero(float numero);
/**
 * @fn float CalcularDescuento(float)
 * @brief Calcula el descuento con tarjeta de d�bito.
 *
 * @param precio, es el precio ingresado.
 * @return Devuelve el resultado del descuento con tarjeta de d�bito.
 */
float CalcularDescuento(float precio);
/**
 * @fn float CalcularInteres(float)
 * @brief Calcula el inter�s con tarjeta de cr�dito.
 *
 * @param precio, es el precio ingresado.
 * @return Devuelve el resultado del inter�s con tarjeta de cr�dito.
 */
float CalcularInteres(float precio);
/**
 * @fn float CalcularPrecioBitcoin(float)
 * @brief Realiza la conversi�n de pesos argentinos a BITCOIN.
 *
 * @param precio, es el precio ingresado.
 * @return Devuelve el resultado del precio a valor BITCOIN.
 */
float CalcularPrecioBitcoin(float precio);
/**
 * @fn float CalcularPrecioUnitario(float, float)
 * @brief Calcula el precio por kil�metro.
 *
 * @param precio, es el precio ingresado.
 * @param kilometros, son los kil�metros ingresados.
 * @return Devuelve el resultado del costo por kil�metro.
 */
float CalcularPrecioUnitario(float precio, float kilometros);
/**
 * @fn float DiferenciaDePrecioIngresada(float, float)
 * @brief Calcula la diferencia entre los precios ingresados de las dos empresas.
 *
 * @param precio1, es el precio ingresado en y.
 * @param precio2, es el precio ingresado en z.
 * @return Devuelve el resultado de la diferencia de precio.
 */
float DiferenciaDePrecioIngresada(float precio1, float precio2);
/**
 * @fn void CargaForzada(void)
 * @brief Incluye la carga forzada de datos con sus c�lculos correspondientes.
 *
 */
void CargaForzada(void);

#endif /* TPBIBLIOTECA1_H_ */
