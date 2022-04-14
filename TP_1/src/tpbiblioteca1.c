#include "tpbiblioteca1.h"

float PedirNumero(char mensaje[])
{
	float numeroIngresado;

	printf("%s", mensaje);
	scanf("%f", &numeroIngresado);
	numeroIngresado=ValidarNumero(numeroIngresado);

	return numeroIngresado;
}
float ValidarNumero(float numero)
{
	while(numero<1)
	{
		printf("Incorrecto. Reingrese un número válido.");
		scanf("%f", &numero);
	}

	return numero;
}
float CalcularDescuento(float precio)
{
	float precioConDescuento;

	precioConDescuento=precio*0.9;

	return precioConDescuento;
}
float CalcularInteres(float precio)
{
	float precioConInteres;

	precioConInteres=precio*1.25;

	return precioConInteres;
}
float CalcularPrecioBitcoin(float precio)
{
	float precioBitcoin;

	precioBitcoin=precio/4606954.55;

	return precioBitcoin;
}
float CalcularPrecioUnitario(float precio, float kilometros)
{
	float precioUnitario;

	precioUnitario=precio/kilometros;

	return precioUnitario;
}
float DiferenciaDePrecioIngresada(float precio1, float precio2)
{
	float diferenciaPrecio;

	if(precio1>precio2)
	{
		diferenciaPrecio=precio1-precio2;
	}
	else
	{
		diferenciaPrecio=precio2-precio1;
	}

	return diferenciaPrecio;
}

void CargaForzada(void)
{
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

	x=7090;
	y=162965;
	z=159339;

	precioTarjetaDebitoAerolineas=CalcularDescuento(y);
	precioTarjetaDebitoLatam=CalcularDescuento(z);
	precioTarjetaCreditoAerolineas=CalcularInteres(y);
	precioTarjetaCreditoLatam=CalcularInteres(z);
	precioBitcoinAerolineas=CalcularPrecioBitcoin(y);
	precioBitcoinLatam=CalcularPrecioBitcoin(z);
	precioUnitarioAerolineas=CalcularPrecioUnitario(y,x);
	precioUnitarioLatam=CalcularPrecioUnitario(z,x);
	diferenciaDePrecio=DiferenciaDePrecioIngresada(y,z);

	printf("\nKMs Ingresados: %.2f km", x);
	printf("\n\nLatam:");
	printf("\na)Precio con tarjeta de débito: $ %.2f", precioTarjetaDebitoLatam);
	printf("\nb)Precio con tarjeta de crédito: $ %.2f", precioTarjetaCreditoLatam);
	printf("\nc)Precio pagando con bitcoin: %f BTC", precioBitcoinLatam);
	printf("\nd)Precio unitario: $ %.2f", precioUnitarioLatam);
	printf("\n\nAerolíneas:");
	printf("\na)Precio con tarjeta de débito: $ %.2f", precioTarjetaDebitoAerolineas);
	printf("\nb)Precio con tarjeta de crédito: $ %.2f", precioTarjetaCreditoAerolineas);
	printf("\nc)Precio pagando con bitcoin: %f BTC", precioBitcoinAerolineas);
	printf("\nd)Precio unitario: $ %.2f", precioUnitarioAerolineas);
	printf("\n\nLa diferencia de precio es: $ %.2f", diferenciaDePrecio);
	printf("\n\n");
}





