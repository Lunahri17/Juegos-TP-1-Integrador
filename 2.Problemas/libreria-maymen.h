#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int numero()
{
	int i,num;
	
	srand(time(NULL));
	
	for(i=1;i<999;i++)
	{
		num=1+rand()%(1000-1);
		
	}
	
	return num;
}


void juego(int num1)
{
	int intento,c=1,limitemay,limitemen,puntaje=10;
	
    limitemay=999;
    limitemen=1;
    
	for(c=1;c<=10 and intento!=num1;c++)
	{
		printf("\n Intento %d= ",c);
		scanf("%d",&intento);
		if(intento>999 or intento<1)
		{
			printf("\nEl numero que ingresaste esta fuera de los limites.Intenta nuevamente");
			c=c-1;
		}
		else
		{
			if(intento<num1)
		    {
			    limitemen=intento+1;
			    printf("\nEl numero secreto es mayor y se encuentra entre %d y %d",limitemen,limitemay);
		    }
		    else
		    {
			    if(intento>num1)
			    {
				    limitemay=intento-1;
			        printf("\nEl numero secreto es menor y se encuentre entre %d y %d",limitemen,limitemay);
			    }
			    else
			    {
				    system("cls");
					printf("\n\tAcertaste! El puntaje obtenido es: %d",puntaje-(c-1));
				    printf("\n\n");
				    system("pause");
			    }
	        }
		}
		
	}
	system("cls");
	if(intento!=num1)
	{
		printf("\n\tFallaste! Tu puntaje es 0 y el numero secreto era: %d",num1);
	}

}




