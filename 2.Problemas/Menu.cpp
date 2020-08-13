#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//Protipos de funciones:


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
            system("cls");
            system("MAYMEN");
            printf("\n\n");
            system("pause");
            break;
        
        case 2:
            system("cls");
            system("Adivinum");
            break;
        
        case 3:
            system("cls");
            system("WarCoin");
            printf("\n\n");
            system("pause");
            break;
        
        case 4:
            system("cls");
            system("Ahorcado");
            printf("\n\n");
            system("pause");
            break;
        
        case 5:
            printf("\n\tGracias por utilizar el programa.");
            printf("\n\n");
            system("pause");
            break;

        default:
            printf("\nIngresaste una opcion erronea, Vuelva a intentarlo.");
            break;
        }

    } while (opcion!=5);
}