#include "libreria-maymen.h"

main()
{
	int num;
	
	printf("\n\t ==MAYMEN==");
	printf("\n============================");
	printf("\n Este juego consiste en adivinar un numero aleatorio entre 1 y 999, tienes 10 intentos.Buena suerte!");
	
	printf("\n\n");
	system("pause");
	
	num=numero();
	juego(num);
}



