
//Esta función se encarga de mostrar los mensajes del estado del muñeco.
void EstadoJugador(int V)
{
    printf("\nEstado del muneco: ");
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
        printf("\n\t\t\tMano Izquierda");
        break;

    case 2:
        printf("Cabeza - Tronco - Brazo izquierdo - Brazo derecho - Pierna izquierda - Pierna derecha -");
        printf("\n\t\t\tMano Izquierda - Mano derecha");
        break;

    case 1:
        printf("Cabeza - Tronco - Brazo izquierdo - Brazo derecho - Pierna izquierda - Pierna derecha -");
        printf("\n\t\t\tMano Izquierda - Mano derecha - Pie izquierdo");
        break;

    case 0:
        printf("Cabeza - Tronco - Brazo izquierdo - Brazo derecho - Pierna izquierda - Pierna derecha -");
        printf("\n\t\t\tMano Izquierda - Mano derecha - Pie izquierdo - Pie derecho");
        break;

    default:
        printf("\n\tPor alguna extraña razón llegaste a este mensaje, lo cual no debería suceder.");
        break;
    }
}