#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void llenar(int tablero[],int t);
void mostrar (int tablero[], int t);
void serpes (int tablero[]);
int dado ();

int main ()
{
	int j1=0, j2=0;
	srand(time(NULL));
	int tablero[100], t=100;
	llenar (tablero, t);
	//mostrar (tablero, t);
	serpes (tablero);
	do
	{
		j1+=dado();
		cout<<endl<<"El jugador 1 va en la casilla: "<<j1<<endl;
		j1=tablero[j1];
		j2+=dado();
		cout<<"El jugador 2 va en la casilla: "<<j2<<endl;
		j2=tablero[j2];
		
	} while (j1<=100&&j2<=100);
	if (j1>j2)
	{
		cout<<endl<<"Gana el jugador 1";
	}
	else 
	{
		cout<<endl<<"Gana el jugador 2";
	}
}

void llenar(int tablero[],int t)
{
	for (int i=0; i<t; i++)
	{
		tablero[i]=i+1;
	}
}

void mostrar (int tablero[], int t)
{
	for (int i=0; i<t; i++)
	{
		cout<<"\t"<<tablero[i]<<" ";
	}
}

void serpes (int tablero[])
{
	//serpientes
	tablero [30]=20;
	tablero [40]=30;
	tablero [50]=40;
	tablero [60]=50;
	tablero [70]=60;
	tablero [80]=70;
	tablero [90]=80;
	tablero [35]=10;
	tablero [65]=25;
	tablero [44]=24;
	//escaleras
	tablero [5]=22;
	tablero [15]=33;
	tablero [25]=44;
	tablero [35]=56;
	tablero [45]=66;
	tablero [55]=77;
	tablero [65]=74;
	tablero [75]=82;
	tablero [85]=92;
	tablero [95]=98;
}

int dado()
{
	int num;
	num=1+rand()%6;
	return num;
}

