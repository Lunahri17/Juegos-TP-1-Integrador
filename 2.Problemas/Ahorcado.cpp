#include<stdio.h>
#include<stdlib.h>
#include<cstring>
#include<string>

void end();
int IngresarPalabra(char palabra[20]);



main()
{
    int letras=0;
    char palabra[20];

    letras=IngresarPalabra(palabra);
    
    
    for (int i = 0; i < letras; i++)
    {
        printf("%c",palabra[i]);
    }


	end();
}

int IngresarPalabra(char palabra[20])
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
        if (palabra[n]<=0 or palabra[n]>0)
        {
            printf("\n No puede ingresar numero, vuelva a intentarlo.");
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