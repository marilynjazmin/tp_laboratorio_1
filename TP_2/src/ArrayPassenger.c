#include "ArrayPassenger.h"

int initPassengers(sPassenger list[], int len)
{
	int retorno;
	retorno=-1;

	for(int i=0;i<len;i++)
	{
		list[i].isEmpty=LIBRE;
		retorno=0;
	}

	return retorno;
}

int buscarEspacioLibre(sPassenger list[], int len)
{
	int index;

	index=-1;

	for(int i=0;i<len;i++)
	{
		if(list[i].isEmpty==LIBRE)
		{
			index=i;
			break;
		}
	}

	return index;
}

int addPassenger(sPassenger list[], int len)
{
	sPassenger pasajero;
	int validacion;
	int index;
	int retorno;
	retorno=-1;

	index=buscarEspacioLibre(list, len);
	if(index!=-1)
	{
		pasajero.isEmpty=OCUPADO;
		pasajero.id=incrementarId(list, len);
		getString(pasajero.name, "Ingrese su nombre: ");
		validacion=ValidarCadena(pasajero.name);
		while(validacion==0)
		{
			getString(pasajero.name, "Error, reingrese su nombre: ");
			validacion=ValidarCadena(pasajero.name);
		}
		getString(pasajero.lastName, "Ingrese su apellido: ");
		validacion=ValidarCadena(pasajero.lastName);
		while(validacion==0)
		{
			getString(pasajero.lastName, "Error, reingrese su nombre: ");
			validacion=ValidarCadena(pasajero.lastName);
		}
		pasajero.price=IngresarFlotante("Ingrese el precio: ", 1, 1000000);
		getString(pasajero.flycode, "Ingrese su código de vuelo: ");
		pasajero.typePassenger=PedirNumero("Ingrese su tipo de pasajero (1, 2 o 3): ");
		pasajero.statusFlight=PedirNumero("Ingrese el estado del vuelo (4, 5 o 6):  ");

		list[index]=pasajero;
		mostrarPassenger(list[index]);

		retorno=0;
	}

	return retorno;
}


int incrementarId(sPassenger list[], int len)
{
	int contadorId;
	contadorId=1;

	for(int i=0;i<len;i++)
	{
		if(list[i].isEmpty==OCUPADO)
		{
			contadorId++;
		}
	}

	return contadorId;
}

void mostrarPassenger(sPassenger pasajero)
{
	printf("%4d %10s %4s  %.2f  %s %d %d\n", pasajero.id, pasajero.name, pasajero.lastName, pasajero.price, pasajero.flycode, pasajero.typePassenger, pasajero.statusFlight);
}

int printPassenger(sPassenger list[], int len)
{
	int retorno;
	retorno=-1;
	for(int i=0;i<len;i++)
	{
		if(list[i].isEmpty==OCUPADO)
		{
			mostrarPassenger(list[i]);
			retorno=0;
		}
	}

	return retorno;
}

int findPassengerById(sPassenger list[], int len, int id)
{
	int index=-1;

	if(list!=NULL && len>0)
	{
		for(int i=0;i<len;i++)
		{
			if(list[i].id==id && list[i].isEmpty==0)
			{
				index=i;
				break;
			}
		}
	}

	return index;
}

int menuModificaciones()
{
	int opcion;

	printf("1.ID: \n");
	printf("2.Nombre: \n");
	printf("3.Apellido: \n");
	printf("4.Precio: \n");
	printf("5.Código de vuelo: \n");
	printf("6.Tipo de pasajero: \n");
	printf("7.Estado de vuelo: \n");

	return opcion;
}

int modificarPassenger(sPassenger list[], int len)
{
	int modificado;
	int confirmar;
	int index;
	int id;
	char auxName[51];
	char auxLastName[51];
	float auxPrice;
	char auxFlyCode[10];
	int auxTypePassenger;
	int auxStatusFlight;

	modificado=-1;

	printPassenger(list, len);
	printf("Ingrese el ID: ");
	scanf("%d", &id);

	index=findPassengerById(list, len, id);
	if(index==-1)
	{
		printf("No se encontró pasajero con el ID: %d", id);
	}
	else
	{
		mostrarPassenger(list[index]);
		printf("¿Acepta realizar la modificación?: ");
		fflush(stdin);
		scanf("%c", &confirmar);
		if(confirmar=='s')
		{
			switch(menuModificaciones())
			{
				case 1:
					getString(auxName, "Ingrese el nuevo nombre: ");
					strcpy(list[index].name, auxName);
					break;
				case 2:
					getString(auxLastName, "Ingrese el nuevo apellido: ");
					strcpy(list[index].lastName, auxLastName);
					break;
				case 3:
					auxPrice=IngresarFlotante("Ingrese el nuevo precio: ", 1, 1000000);
					list[index].price=auxPrice;
					break;
				case 4:
					getString(auxFlyCode, "Ingrese el nuevo código de vuelo: ");
					strcpy(list[index].flycode, auxFlyCode);
					break;
				case 5:
					auxTypePassenger=PedirNumero("Ingrese el tipo de pasajero: ");
					list[index].typePassenger=auxTypePassenger;
					break;
				case 6:
					auxStatusFlight=PedirNumero("Ingrese el nuevo estado del vuelo: ");
					list[index].statusFlight=auxStatusFlight;
					break;
				default:
					printf("Opción inválida.\n");
			}
	}





	return modificado;
}

