#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void end();
int IngresarPalabra(char palabra[20]);


main()
{
    int letras=0;
    char palabra[20];

    letras=IngresarPalabra(palabra);
    
    for (int i = 0; i < letras; i++)
    {
        printf("\t%c",palabra[i]);
    }
    

	
	end();
}

int IngresarPalabra(char palabra[20])
{
    int n=0;
    char caracter;

    do
    {
        printf("\n Ingrese el caracter %d de su palabra, o ingerese Z para terminar: ",n+1);
        scanf("%c",caracter);

        if (caracter!='z')
        {
            palabra[n]=caracter;
            n++;
        }
        
    } while (caracter!='z');
    
    return n;
}

void end()
{
	printf("\n\n");
	system("pause");
    printf("\n\tGracias por utilizar el programa.");
 	printf("\n\n");
	system("pause");
}