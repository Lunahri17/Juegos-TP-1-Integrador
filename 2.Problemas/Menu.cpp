#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//Protipos de funciones:
void end();


//Variables globales:


main()
{
	int opcion;


    do
    {
        system("cls");
        printf("\n\tBienvenidos a los juegos de consola!!");
        printf("\n\nCategoria: Juegos numericos.");
        printf("\n\n1.MayMen.");
        printf("\n\n2.Adivinum.");
        printf("\n\n3.WarCoin.");
        printf("\n\nCategoria: Juegos de letras.");
        printf("\n\n4.Ahorcado.");
        printf("\n\n5. Salir.");
        printf("\n\nIngrese el numero del juego que dsesea abrir: ");
        scanf("%d",&opcion);

        switch (opcion)
        {
        case 1:
            
            break;
        
        default:
            break;
        }


    } while (opcion!=5);
    
	
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