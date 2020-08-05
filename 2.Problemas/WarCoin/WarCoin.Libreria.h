
//Esta función determina la cantidad de monedas que tendrá la pila
int PilaRandom()
{
    int num=0;
    bool stop=false;
    
    do //utilice un do while porque había veces que tomaba numeros mayores a 50.
    {
        num=10+rand()%50;
        printf("\t %d", num);
        if (num>9 and num<51)
        {
            stop=true;
        }
        
    } while (stop==false);
    
    return num;
}