#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void adv(int Num1,int Nume);
void descomposicion(int Num1, int &a, int &b, int &c, int &d);

main()
{
	int Num,Nume;
	adv(Num,Nume);
}

void adv(int Num1,int Nume)
{
	int control=0,dec,con=1,a1,b1,c1,d1;
	int a,b,c,d,mismaPos=0,DisPos=0,puntaje;
	srand(time(NULL));
	Nume=1000+rand() % (10000-1000);
	
		printf("\t==Adivinum==\n");
		printf("\nAdivine el numero de 4 cifras");
		
		do
		{
				printf("\nIntento %d: ",con);
				scanf("%d",&Num1);
				if(Num1>=1000 and Num1<=9999)
			{
				descomposicion(Num1,a,b,c,d);
				descomposicion(Nume,a1,b1,c1,d1);
					if(a==a1)
				{
					mismaPos++;
				}		
			if(a==b1 or a==c1 or a==d1)
			{
				DisPos++;
			}
				if(b==b1)
			{
				mismaPos++;
			}
			if(b==a1 or b==c1 or b==d1)
			{
				DisPos++;
			}
				if(c==c1)
			{
				mismaPos++;
			}
				if(c==a1 or c==b1 or c==d1)
			{
				DisPos++;
			}
				if(d==d1)
			{
				mismaPos++;
			}
				if(d==a1 or d==b1 or d==c1)
			{
				DisPos++;
			}
		printf("Cant. Misma Posicion: %d - Cant. Distinta Posicion: %d\n",mismaPos,DisPos);
		mismaPos=0;
		DisPos=0;
				if(Num1==Nume)
			{
				printf("\nAdivinaste el numero, Felicidades\n");
			}
			else
			{
				con++;
			}
		}
		else
		{
			printf("Error, el numero ingresado no es de 4 cifras");
		}
		
		}while(Num1!=Nume and con<=10);
		puntaje=11-con;
		if(con>10)
		{
			printf("\nHas Perdido el numero era: %d\n",Nume);
		}
		printf("\nTu Puntaje es de %d\n",puntaje);
		system("pause");
}
	
void descomposicion(int Num1, int &a, int &b, int &c, int &d)
{
	d= Num1 % 10;
	c=((Num1-d)/10) % 10;
	b=((Num1 - d -(c*10))/100)%10;
	a=((Num1 - d - (c*10) - (b*100))/1000)%10;
	
}
	
