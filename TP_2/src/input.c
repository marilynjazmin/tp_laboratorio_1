#include "input.h"

int PedirNumero(char mensaje [])
{
	int numeroIngresado;

	printf("%s", mensaje);
	scanf("%d", &numeroIngresado);

	return numeroIngresado;
}

void getString(char cadena[], char mensaje[])
{
	printf("%s", mensaje);
	fflush(stdin);
	scanf("%[^\n]", cadena);
}

int IngresarEntero(char mensaje [])
{
    char numeroIngresado;
    int validacion;

    printf("%s", mensaje);
    fflush(stdin);
    scanf("%d", &numeroIngresado);
    validacion=ValidarNumero(numeroIngresado);
    while(validacion==0)
    {
        printf("\n Vuelva a ingresar el número (sin letras). \n");
        fflush(stdin);
        scanf("%d", &numeroIngresado);
        validacion= ValidarNumero(numeroIngresado);
    }

    return numeroIngresado;
}

int ValidarNumero(char numeros[])
{
    int validacion=-1;
    for(int i=0;i<strlen(numeros);i++)
    {
        if(!(numeros[i] == 46 || (numeros[i]>=48 && numeros[i]<=57)))
        {
            validacion=0;
        }
    }
    return validacion;
}

int ValidarCadena(char cadena[])
{
    int size = strlen(cadena);
    int validacion=-1;
    for(int i=0;i<size;i++)
    {
        if(isdigit(cadena[i]) || isalpha(cadena[i]) == 0)
        {
            validacion=0;
        }
    }
    return validacion;
}

float IngresarFlotante(char mensaje [], float minimo, float maximo)
{
    float retorno;
    char numeroIngresado[100];
    int validacion;

    printf("%s", mensaje);
    fflush(stdin);
    gets(numeroIngresado);
    validacion=ValidarNumero(numeroIngresado);
    while(validacion==0)
    {
        printf("\n Vuelva a ingresar el número (sin letras). \n ");
        fflush(stdin);
        gets(numeroIngresado);
        validacion= ValidarNumero(numeroIngresado);
    }

    retorno=atof(numeroIngresado);

    while(retorno < minimo || retorno > maximo)
    {
        printf("\nError, vuelva a ingresar el número en los límites correspondientes. \n");
        fflush(stdin);
        gets(numeroIngresado);
        validacion= ValidarNumero(numeroIngresado);
        while(validacion==0)
            {
                printf("\n Vuelva a ingresar el número (sin letras). \n");
                fflush(stdin);
                scanf("%s", numeroIngresado);
                validacion= ValidarNumero(numeroIngresado);
            }
        retorno=atof(numeroIngresado);
    }
    return retorno;
}


