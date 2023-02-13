#include <stdio.h>

int main(int argc, char *argv[])
{

	int a, b;
	double r;

	do
	{
		printf("n1\n");
		scanf("%d", &a);
		printf("n2\n");
		scanf("%d", &b);

		if (a > b)
			r = (double)b / (double)a;
		else
			r = (double)a / (double)b;
		printf("\nIl prodotto è: %f\n", r);
	} while (a != 0 && b != 0);

	return 0;
}