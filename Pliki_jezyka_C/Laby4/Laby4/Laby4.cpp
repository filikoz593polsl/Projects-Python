#include <math.h>
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>

int main()
{
	//Cwiczenie 1
	/*int i = 0;
	int n;
	printf("Podaj n: ");
	scanf_s("%d", &n);

	for (i; i <=n; i++)
	{
		printf("%d\n", i);
	}*/


	//Cwiczenie 2

	//int i, j;
	//for (i=1; i <= 10; i++)
	//{
	//	for (j=1; j <= 10; j++)
	//		printf("%4d", i * j);
	//	printf("\n");
	//}

	//Cwiczenie 3
	/*int tab[1024], max;
	int n;
	printf("Podaj n: ");
	scanf_s("%d", &n);



	for (int i = 0; i < n; i++)
	{
		printf("podaj liczbe nr %d: ", i);
		scanf_s("%d", &tab[i]);
	}

	max = tab[0];

	for (int i = 1; i < n; i++)
	{
		if (tab[i] > max)
		{
			max = tab[i];
		}
		
	}

	printf("%d", max);

	return 0;*/

	//Cwiczenie 4
	/*int tab[1024], max, suma;
	double average;
	int n;

	suma = 0;
	printf("Podaj n: ");
	scanf_s("%d", &n);



	for (int i = 0; i < n; i++)
	{
		printf("podaj liczbe nr %d: ", i);
		scanf_s("%d", &tab[i]);
	}

	for (int i = 0; i < n; i++)
	{
		suma += tab[i];
	}

	average = suma / n;

	printf("%lf", average);*/

	//Cwiczenie 5

	/*double a1, a2;
	double b1, b2;
	double iloczyn_skalarny;

	printf("Podaj 1wsp wektora 1: ");
	scanf_s("%lf", &a1);

	printf("Podaj 2wsp wektora 1: ");
	scanf_s("%lf", &a2);

	printf("Podaj 1wsp wektora 2: ");
	scanf_s("%lf", &b1);

	printf("Podaj 2wsp wektora 2: ");
	scanf_s("%lf", &b2);

	iloczyn_skalarny = a1 * b1 + a2 * b2;

	printf("Iloczyn skalarny: %lf", iloczyn_skalarny);*/

	//Cwiczenie 6
	
	/*int tab[1024], max;
	int n;
	int temp;
	printf("Podaj n: ");
	scanf_s("%d", &n);



	for (int i = 0; i < n; i++)
	{
		printf("podaj liczbe nr %d: ", i);
		scanf_s("%d", &tab[i]);
	}

	for (int j = 0; j < n ;j++)
	{
		for (int m = 0; m < n - 1; m++)
		{
			if (tab[m] > tab[m + 1])
			{
				temp = tab[m];
				tab[m] = tab[m + 1];
				tab[m + 1] = temp;

			}
		}
	}

	printf("Posorotwanie: \n");
	for (int i = 0; i < n; i++)
	{
		printf("%d\n", tab[i]);
	}*/


}


