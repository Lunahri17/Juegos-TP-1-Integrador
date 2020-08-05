#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctime>

//Protipos de funciones:
void end();


//Variables globales:


main()
{
	int CantidadMinima=0,CantidadMaxima=0,PilaMondeas=0;

	printf("\nWARCOIN");
	printf("\n=======");
	
	printf("\nIngresa la cantidad minima de monedas que se pueden retirar: ");
	scanf("%d",&CantidadMinima);

	printf("\nIngresa la cantidad maxima de monedas que se pueden retirar: ");
	scanf("%d",&CantidadMaxima);

	srand(time(0));
	PilaMonedas=10+rand()%50;
	printf("\nLa cantidad inicial de monedas en la pila es: %d\n",PilaMonedas);
	
	end();
}



void end()
{
	printf("\n\n");
	system("pause");
    printf("\n\tGracias por utilizar el programa.");
 	printf("\n\n");
	system("pause");
}