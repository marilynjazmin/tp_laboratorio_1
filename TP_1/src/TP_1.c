#include <stdio.h>
#include <stdlib.h>
#include "tpbiblioteca1.h"

int main(void) {
	setbuf(stdout, NULL);

	int opcion;
	float x;
	float y;
	float z;
	float precioTarjetaDebitoAerolineas;
	float precioTarjetaDebitoLatam;
	float precioTarjetaCreditoAerolineas;
	float precioTarjetaCreditoLatam;
	float precioBitcoinAerolineas;
	float precioBitcoinLatam;
	float precioUnitarioAerolineas;
	float precioUnitarioLatam;
	float diferenciaDePrecio;

	x=0;
	y=0;
	z=0;

	do
	{
		printf("\n1. Ingresar kil�metros: (km = %.2f)", x);
		printf("\n2. Ingresar precio de vuelos:\n-Precio vuelo Aerol�neas: $ %.2f\n-Precio vuelo Latam: $ %.2f", y, z);
		printf("\n3. Calcular todos los costos:\na) Tarjeta de d�bito (descuento 10%%).\nb) Tarjeta de cr�dito (inter�s 25%%).\nc) Bitcoin (1BTC -> 4606954.55 Pesos Argentinos).\nd) Mostrar precio por km (precio unitario).\ne) Mostrar diferencia de precio ingresada (Latam - Aerol�neas).");
		printf("\n4. Informar resultados.");
		printf("\n5. Carga forzada de datos.");
		printf("\n6. Salir.");
		scanf("%d", &opcion);
		switch(opcion)
		{
			case 1:
				x=PedirNumero("\nIngrese los kil�metros: ");
				break;
			case 2:
				y=PedirNumero("\nIngrese el precio del vuelo Aerol�neas: ");
				z=PedirNumero("Ingrese el precio del vuelo Latam: ");
				break;
			case 3:
				if(x==0 || y==0 || z==0)
				{
					printf("\nNo es posible calcular. Por favor, ingrese los datos requeridos.");
				}
				else
				{
					precioTarjetaDebitoAerolineas=CalcularDescuento(y);
					precioTarjetaDebitoLatam=CalcularDescuento(z);
					precioTarjetaCreditoAerolineas=CalcularInteres(y);
					precioTarjetaCreditoLatam=CalcularInteres(z);
					precioBitcoinAerolineas=CalcularPrecioBitcoin(y);
					precioBitcoinLatam=CalcularPrecioBitcoin(z);
					precioUnitarioAerolineas=CalcularPrecioUnitario(y,x);
					precioUnitarioLatam=CalcularPrecioUnitario(z,x);
					diferenciaDePrecio=DiferenciaDePrecioIngresada(y,z);

					printf("\nLos datos se est�s calculando...\n");
				}
				break;
			case 4:
				if(x==0 || y==0 || z==0)
				{
					printf("\nNo es posible mostrar los c�lculos. Por favor, ingrese los datos requeridos.\n");
				}
				else
				{
					printf("\nKMs Ingresados: %.2f km", x);
					printf("\n\nLatam:");
					printf("\na)Precio con tarjeta de d�bito: $ %.2f", precioTarjetaDebitoLatam);
					printf("\nb)Precio con tarjeta de cr�dito: $ %.2f", precioTarjetaCreditoLatam);
					printf("\nc)Precio pagando con bitcoin: %f BTC", precioBitcoinLatam);
					printf("\nd)Precio unitario: $ %.2f", precioUnitarioLatam);
					printf("\n\nAerol�neas:");
					printf("\na)Precio con tarjeta de d�bito: $ %.2f", precioTarjetaDebitoAerolineas);
					printf("\nb)Precio con tarjeta de cr�dito: $ %.2f", precioTarjetaCreditoAerolineas);
					printf("\nc)Precio pagando con bitcoin: %f BTC", precioBitcoinAerolineas);
					printf("\nd)Precio unitario: $ %.2f", precioUnitarioAerolineas);
					printf("\n\nLa diferencia de precio es: $ %.2f", diferenciaDePrecio);
					printf("\n\n");
				}
				break;
			case 5:
				CargaForzada();
				break;
			case 6:
				printf("\nEl programa termin�.");
				break;
			default:
				printf("\nError. Reingrese una opci�n v�lida.\n\n");
				break;
		}
		if(opcion!=6)
		{
			system("pause");
		}

	}while(opcion!=6);


	return EXIT_SUCCESS;
}
