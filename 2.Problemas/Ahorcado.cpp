#include<stdio.h>
#include<stdlib.h>
#include<cstring>
#include<string>

void end();
int IngresarPalabra(char palabra[20]);
void Inicio(char palabraMostrar[20],int letras);
void Mostrar(char vector[20],int letras);

main()
{
    int letras=0,Jugada=1;
    char palabra[20],palabraMostrar[20],letraIngresar;

    letras=IngresarPalabra(palabra);
    
    strupr(palabra); //Convierte las letras de minuscula a mayuscula.
    system("cls");

    Inicio(palabraMostrar,letras);

    printf("\nAHORCADO");
    printf("\n========");
    printf("\nPalabra a adivinar:");
    Mostrar(palabraMostrar,letras);
    
    IngresarLetra(letraIngresar,letra,Jugada);

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
            if(isdigit(palabra[n])!=0)
            {
                printf("\n Solo se puede ingresar letras, vuelva a intentarlo.");
            }
            else
            {
                n++;
            }
        }
    } while (palabra[n]!='z');

    return n;
}

void Inicio(char palabraMostrar[20],int letras)
{
    for (int i = 0; i < letras; i++)
    {
        palabraMostrar[i]='_';
    }
    
}

void Mostrar(char vector[20],int letras)
{
    for (int i = 0; i < letras; i++)
    {
        printf(" %c",vector[i]);
    }
}

void IngresarLetra(char &letraIngresar,int letras,int Jugada)
{
    printf("\nJugada #%d",Jugada);
    printf("\nIngrese una letra: ");
    scanf("%c",&letraIngresar);    
}

void end()
{
	printf("\n\n");
	system("pause");
    printf("\n\tGracias por utilizar el programa.");
 	printf("\n\n");
	system("pause");
}