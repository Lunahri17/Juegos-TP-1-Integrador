#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctime>
#include "WarCoin.Libreria.h"

//Protipos de funciones:
void end();
void CompuRetira(int CantidadMinima,int CantidadMaxima,int &PilaMonedas);


//Variables globales:


main()
{
	int CantidadMinima=0,CantidadMaxima=0,PilaMonedas=0;

	printf("\nWARCOIN");
	printf("\n=======");
	
	printf("\nIngresa la cantidad minima de monedas que se pueden retirar: ");
	scanf("%d",&CantidadMinima);

	printf("\nIngresa la cantidad maxima de monedas que se pueden retirar: ");
	scanf("%d",&CantidadMaxima);

	srand(time(0));
	PilaMonedas=10+rand()%41;
	printf("\nLa cantidad inicial de monedas en la pila es: %d\n",PilaMonedas);

	
	if (QuienEmpieza())
	{
		printf("\nInicia la partida la computadora.");

		CompuRetira(CantidadMinima,CantidadMaxima,PilaMonedas);
		
	}
	else
	{
		printf("\nInicia la partida el usuario.");
	}
	
	
	do
	{
		UsuarioRetira(CantidadMinima,CantidadMaxima,PilaMonedas);
		CompuRetira(CantidadMinima,CantidadMaxima,PilaMonedas);

	} while (PilaMonedas!=0 and PilaMonedas>=CantidadMinima);
	
	
	
	
	
	end();
}

void UsuarioRetira(int CantidadMinima,int CantidadMaxima,int &PilaMonedas)
{
	int NumUsuario=0;

	do
	{
		printf("\nIngresa la cantidad de monedas a eliminar");
		scanf("%d",&NumUsuario);

		if (NumUsuario>CantidadMaxima or NumUsuario<CantidadMinima)
		{
			printf("\nERROR: Se deben desapilar entre %d y %d monedas. Volver a intentar!!!!",CantidadMinima,CantidadMaxima);
		}
		
	} while (NumUsuario<CantidadMinima and NumUsuario<CantidadMaxima);
	
	Pila
}



void CompuRetira(int CantidadMinima,int CantidadMaxima,int &PilaMonedas)
{
	PilaMonedas-=(rand()%(CantidadMaxima - CantidadMinima - 1)) + CantidadMinima;

	EstadoPila(PilaMonedas);
}

void end()
{
	printf("\n\n");
	system("pause");
    printf("\n\tGracias por utilizar el programa.");
 	printf("\n\n");
	system("pause");
}