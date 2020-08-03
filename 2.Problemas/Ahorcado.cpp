#include<stdio.h>
#include<stdlib.h>
#include<cstring>
#include<string>


//Prototipos de funciones:
void end();
int IngresarPalabra(char palabra[20]);
void Inicio(char palabraMostrar[20],int letras);
void Mostrar(char vector[20],int letras);
char IngresarLetra(int Jugada);
void Resultado(char palabra[20],char palabraMostrar[20],char letraIngresar,int letras,int &Jugada);

//Variables Globales:
int Vida=10;


main()
{
    int letras=0,Jugada=1,i=0;
    char palabra[20],palabraMostrar[20],letraIngresar;

    letras=IngresarPalabra(palabra);
    
    strupr(palabra); //Convierte las letras de minuscula a mayuscula.
    system("cls");

    Inicio(palabraMostrar,letras);

    printf("\nAHORCADO");
    printf("\n========");
    Mostrar(palabraMostrar,letras);
    

    while (i<letras)
    {
        letraIngresar=IngresarLetra(Jugada);
        Resultado(palabra,palabraMostrar,letraIngresar,letras,Jugada);
        
        if (isdigit(letraIngresar)==0)
        {
            i++;
        }
        else
        {
            printf("\nERROR! El caracter ingresado no corresponde a una letra!");
        }
        
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

void Inicio(char palabraMostrar[20],int letras)
{
    for (int i = 0; i < letras; i++)
    {
        palabraMostrar[i]='_';
    }
    
}

void Mostrar(char vector[20],int letras)
{
    printf("\nPalabra a adivinar:");

    for (int i = 0; i < letras; i++)
    {
        printf(" %c",vector[i]);
    }
}

char IngresarLetra(int Jugada)
{
    char letraIngresar;

    printf("\nJugada #%d",Jugada);
    printf("\nIngrese una letra: ");
    scanf("%s",&letraIngresar); 
    strupr(&letraIngresar);

    return letraIngresar;
}

void Resultado(char palabra[20],char palabraMostrar[20],char letraIngresar,int letras,int &Jugada)
{
    bool EstaLetra=false;
    
    printf("\nRESULTADO JUGADA #%d",Jugada);

    for (int i = 0; i < letras; i++)
    {
        if (palabra[i]==letraIngresar)
        {
            palabraMostrar[i]=palabra[i];
            EstaLetra=true;
        }
    }

    if (EstaLetra==false)
    {
        Vida--;
    }
    
    
    Mostrar(palabraMostrar,letras);
    EstadoJugador(Vida);

    Jugada++;
}

void EstadoJugador(int V)
{
    switch (V)
    {
    case 9:
        printf("Cabeza");
        break;

    case 8:
        printf("Cabeza - Tronco");
        break;

    case 7:
        printf("Cabeza - Tronco - Brazo izquierdo");
        break;

    case 6:
        printf("Cabeza - Tronco - Brazo izquierdo - Brazo derecho");
        break;

    case 5:
        printf("Cabeza - Tronco - Brazo izquierdo - Brazo derecho - Pierna izquierda");
        break;

    case 4:
        printf("Cabeza - Tronco - Brazo izquierdo - Brazo derecho - Pierna izquierda - Pierna derecha");
        break;

    case 3:
        printf("Cabeza - Tronco - Brazo izquierdo - Brazo derecho - Pierna izquierda - Pierna derecha -");
        printf("\tMano Izquierda");
        break;

    case 2:
        printf("Cabeza - Tronco - Brazo izquierdo - Brazo derecho - Pierna izquierda - Pierna derecha -");
        printf("\tMano Izquierda - Mano derecha");
        break;

    case 1:
        printf("Cabeza - Tronco - Brazo izquierdo - Brazo derecho - Pierna izquierda - Pierna derecha -");
        printf("\t Mano Izquierda - Mano derecha - Pie izquierdo");
        break;

    case 0:
        printf("Cabeza - Tronco - Brazo izquierdo - Brazo derecho - Pierna izquierda - Pierna derecha -");
        printf("\t Mano Izquierda - Mano derecha - Pie izquierdo - Pie derecho");
        break;

    default:
        printf("\n\tPor alguna extraña razón llegaste a este mensaje, lo cual no debería suceder.");
        break;
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