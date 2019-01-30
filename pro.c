#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) 
{
	float n,i,x,suma,g;
	int arre[100];
	do
	{
		printf("cuantas monedas desea agregar\n");
		scantf("%i",&n);
		printf("1.- $0.50\n2.- $1\n3.- $2\n4.- $5\n6.- $10\ndigite el numero respectivo de su valor"); 
		for (i=0;i<n;i++)
		{
			scanf("%f",&x);
			if(x<1 || x>6)
			{
				printf("error");
				i=i--;
			}
			else
			{
				suma=suma+x;
			}
		}
		printf("el resultado es: ",suma);
		printf("deseas continuar\n si=1\n no=2\n");
		scanf("i",&g);
	}while(g<2);
	
	return 0;
}
