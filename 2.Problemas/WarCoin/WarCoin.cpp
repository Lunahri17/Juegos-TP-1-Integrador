#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctime>
#include "WarCoin.Libreria.h"

//Protipos de funciones:
void end();
void CompuRetira(int CantidadMinima,int CantidadMaxima,int &PilaMonedas,bool &stop);
void UsuarioRetira(int CantidadMinima,int CantidadMaxima,int &PilaMonedas,bool &stop);

//Variables globales:


main()
{
	int CantidadMinima=0,CantidadMaxima=0,PilaMonedas=0;
	bool stop=false;

	printf("\nWARCOIN");
	printf("\n=======");
	
	printf("\nIngresa la cantidad minima de monedas que se pueden retirar: ");
	scanf("%d",&CantidadMinima);

	printf("\nIngresa la cantidad maxima de monedas que se pueden retirar: ");
	scanf("%d",&CantidadMaxima);

	srand(time(0));
	PilaMonedas=10+rand()%41;
	printf("\nLa cantidad inicial de monedas en la pila es: %d",PilaMonedas);

	
	if (QuienEmpieza())
	{
		printf("\nInicia la partida la computadora.\n");

		CompuRetira(CantidadMinima,CantidadMaxima,PilaMonedas);
		
	}
	else
	{
		printf("\nInicia la partida el usuario.\n");
	}
	
	
	do
	{
		UsuarioRetira(CantidadMinima,CantidadMaxima,PilaMonedas,stop);
		CompuRetira(CantidadMinima,CantidadMaxima,PilaMonedas,stop);

	} while (stop==false);
	

	end();
}

void UsuarioRetira(int CantidadMinima,int CantidadMaxima,int &PilaMonedas,bool &stop)
{
	int NumUsuario=0;

	if (PilaMonedas!=0 and PilaMonedas>=CantidadMinima)
	{
		do
		{
			printf("\nIngresa la cantidad de monedas a eliminar: ");
			scanf("%d",&NumUsuario);

			if (NumUsuario>CantidadMaxima or NumUsuario<CantidadMinima)
			{
				printf("\nERROR: Se deben desapilar entre %d y %d monedas. Volver a intentar!!!!",CantidadMinima,CantidadMaxima);
			}
			
		} while (NumUsuario<CantidadMinima and NumUsuario<CantidadMaxima);
		
		PilaMonedas-=NumUsuario;
		EstadoPila(PilaMonedas);
	}
	else
	{
		printf("\nLA COMPUTADORA GANO!!! Puntaje obtenido: 0");
		
		stop=true;
	}
	
	
}



void CompuRetira(int CantidadMinima,int CantidadMaxima,int &PilaMonedas,bool &stop)
{
	int NumCompu=0;

	NumCompu=(rand()%(CantidadMaxima - CantidadMinima - 1)) + CantidadMinima;
	printf("\nLa computadora saco %d monedas de la pila.",NumCompu);
	
	PilaMonedas-=NumCompu;
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