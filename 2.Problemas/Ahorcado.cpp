#include<stdio.h>
#include<stdlib.h>
#include<cstring>
#include<string>

void end();
int IngresarPalabras(char palabra[20]);



main()
{
    int letras=0;
    char palabra[20];

    IngresarPalabra(palabra);
    
    
/*    for (int i = 0; i < n; i++)
    {
        printf("%c",palabra[i]);
    }*/


	end();
}

int IngresarPalabras(char palabra[20])
{
    int n=0;

    do
    {
        printf("\n Ingrese la letra %d de su palabra, o ingrese z para terminar: ",n+1);
        scanf("%s",&palabra[n]);
       
        if (palabra[n]!='z')
        {
            n++;
        }

    } while (palabra[n]!='z');

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