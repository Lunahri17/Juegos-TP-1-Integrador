#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctime>
#include "WarCoin.Libreria.h"

//Protipos de funciones:
void end();
bool QuienEmpieza();


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
		printf("\nempieza la pc");
	}
	else
	{
		printf("\nempieza el jugador");
	}
	
	
	
	end();
}

bool QuienEmpieza()
{
	int num;

	num=1+rand()%10;

	if (num % 2 == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}


void end()
{
	printf("\n\n");
	system("pause");
    printf("\n\tGracias por utilizar el programa.");
 	printf("\n\n");
	system("pause");
}