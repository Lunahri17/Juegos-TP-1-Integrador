#include<stdio.h>
#include<stdlib.h>
#include<cstring>
#include<string>
#include "Ahorcado.Libreria.h"


//Prototipos de funciones:
int IngresarPalabra(char palabra[20]);
void Inicio(char palabraMostrar[20],int letras);
char IngresarLetra(int Jugada);
void Resultado(char palabra[20],char palabraMostrar[20],char letraIngresada,int letras,int &Jugada);
void Puntaje();

//Variables Globales:
int Vida=10;
char LetrasIngresadas[200];


main()
{
    int letras=0,Jugada=1,i=0;
    char palabra[20],palabraMostrar[20],letraIngresada;
    bool stop=false;

    letras=IngresarPalabra(palabra);
    strupr(palabra); //Convierte las letras de minuscula a mayuscula.
    system("cls");

    Inicio(palabraMostrar,letras);

    printf("\nAHORCADO");
    printf("\n========");
    printf("\nPalabra a adivinar: ");
    Mostrar(palabraMostrar,letras);
    
    do
    {
        letraIngresada=IngresarLetra(Jugada);
        Resultado(palabra,palabraMostrar,letraIngresada,letras,Jugada);
        
        if (isdigit(letraIngresada)!=0)
        {
            printf("\nERROR! El caracter ingresado no corresponde a una letra!");
        }
        
        if (Vida==0)
        {
            printf("\n\nHas perdido la partida.");
           
            printf("\nLa palabra era: ");
            Mostrar(palabra,letras);
            
            printf("\nEl puntaje obtenido es de: 0 PUNTOS.");
            
            stop=true;
        }

        if (ComprobarIgualdad(palabra,palabraMostrar,letras))
        {
            printf("\nHAS GANADO LA PARTIDA!!!");
            
            Puntaje();
            
            stop=true;
        }
    }
    while(stop==false);
}

int IngresarPalabra(char palabra[20])
{
    int n=0;

    do
    {
        printf("\n Ingrese la letra %d de su palabra, o ingrese z para terminar: ",n+1);
        scanf("%s",&palabra[n]);
       
        if (palabra[n]!='z' and palabra[n]!='Z')
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
    } while (palabra[n]!='z' and palabra[n]!='Z');

    return n;
}

//Esta función lo que hace que genera un vector con la cantidad de guines que tiene de letras la palabra original.
void Inicio(char palabraMostrar[20],int letras)
{
    for (int i = 0; i < letras; i++)
    {
        palabraMostrar[i]='_';
    }
    
}

char IngresarLetra(int Jugada)
{
    char letraIngresada;

    printf("\nJugada #%d",Jugada);
    printf("\nIngrese una letra: ");
    scanf("%s",&letraIngresada); 
    strupr(&letraIngresada);

    return letraIngresada;
}

void Resultado(char palabra[20],char palabraMostrar[20],char letraIngresada,int letras,int &Jugada)
{
    bool EstaLetra=false;
    
    printf("\nRESULTADO JUGADA #%d",Jugada);

    for (int i = 0; i < letras; i++)
    {
        if (palabra[i]==letraIngresada)
        {
            palabraMostrar[i]=palabra[i];
            EstaLetra=true;
        }
    }

    if (EstaLetra==false)
    {
        Vida--;
    }

    printf("\nPalabra a adivinar:");
    Mostrar(palabraMostrar,letras);
    
    EstadoJugador(Vida);

    LetrasIngresadas[Jugada]=letraIngresada;
    printf("\nLetras ya ingresadas:");
    Mostrar(LetrasIngresadas,Jugada);

    Jugada++;
}

void Puntaje()
{
    int Partes=0;
    
    Partes=10-Vida;

    printf("\nEl puntaje obtenido es de: %d PUNTOS.",50-(2*Partes));
}

