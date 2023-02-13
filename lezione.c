#include <stdio.h>

int main(int argc, char *argv[])
{

	double n1, n2, risultato;

	do
	{
		printf("n1\n");
		scanf("%f", &n1);
		printf("n2\n");
		scanf("%f", &n1);

		if (n1 > n2)
			risultato = n2/n1;
		else
			risultato = n1/n2;
		printf("\nIl prodotto è: %f\n", risultato);
	} while (n1 != 0 && n2 != 0);

	return 0;
}