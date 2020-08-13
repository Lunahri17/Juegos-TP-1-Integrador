#include<stdio.h>
#include<stdlib.h>
#include<math.h>

main()
{
	int opcion;


    do
    {
        system("cls");
        printf("\n\tBienvenidos a los juegos de consola!!");
        printf("\n\n Categoria: Juegos numericos.");
        printf("\n\n 1. MayMen.");
        printf("\n\n 2. Adivinum.");
        printf("\n\n 3. WarCoin.");
        printf("\n\n Categoria: Juegos de letras.");
        printf("\n\n 4. Ahorcado.");
        printf("\n\n 5. Salir.");
        printf("\n\n Ingrese el numero del juego que dsesea abrir: ");
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
            printf("\n Ingresaste una opcion erronea, vuelva a intentarlo.");
            printf("\n\n");
            system("pause");
            break;
        }

    } while (opcion!=5);
}