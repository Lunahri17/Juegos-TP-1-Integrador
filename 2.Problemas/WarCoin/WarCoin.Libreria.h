
//Función que determina quien empieza la partida.
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


void EstadoPila(int PilaMonedas)
{
	printf("\nQuedan %d monedas.",PilaMonedas);
}

void end()
{
	printf("\n\n");
	system("pause");
    printf("\n\tGracias por utilizar el programa.");
 	printf("\n\n");
	system("pause");
}