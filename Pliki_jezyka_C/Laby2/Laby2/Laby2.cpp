#include <stdlib.h>
#include <iostream>
#include<conio.h>
#include <stdio.h>
#include <math.h>

int main()
{

	//Cwiczenie 1
	/*char c;

	printf("Podaj litere z klawiatury: \n");
	scanf_s("%c", &c);

	if (c > 96 && c < 123)
	{
		printf("Podano mala litere\n");
	}
	else if (c > 64 && c < 91)
	{
		printf("Podano Duza litere\n");
	}
	else
	{
		printf("Podano liczbe\n");

	}*/

	//Cwiczenie 2
	/*double a, b;
	double suma, roznica, iloczyn, iloraz;
	int choice;

	printf("Podaj liczbe a: \n");
	scanf_s("%lf", &a);

	printf("Podaj liczbe b: \n");
	scanf_s("%lf", &b);

	printf("1. Wykonaj Dodawanie: \n");
	printf("2. Wykonaj Odejmowanie: \n");
	printf("3. Wykonaj Mnozenie: \n");
	printf("4. Wykonaj Dzielenie: \n");
	printf("Podaj numer opcji: \n");
	scanf_s("%d", &choice);

	switch (choice)
	{
	case 1:
		suma = a + b;
		printf("Suma: %lf", suma);
		break;
	case 2:
		roznica = a - b;
		printf("Roznica: %lf", roznica);
		break;
	case 3:
		iloczyn = a * b;
		printf("Iloczyn: %lf", iloczyn);
		break;
	case 4:
		if (b == 0)
		{
			printf("Nie mozna wykonac dzielenia przez 0!\n");
		}
		else
		{
			iloraz = a/b;
			printf("Iloraz: %lf", iloraz);
		}


	}*/

	//Cwiczenie 3
	/*double a,b,x;
	printf("Podaj wsp kierunkowy prostej: \n");
	scanf_s("%lf", &a);

	printf("Podaj wyraz wolny prostej: \n");
	scanf_s("%lf", &b);

	if (a == 0)
	{
		printf("Nie mozna obliczyc dla a = 0!\n");
	}
	else
	{
		x = -b / a;
		printf("Punkt przeciecia dla podanych wsp: %lf", x);
	}*/

	//Cwiczenie 4
	/*int n;
	int x;

	printf("Podaj wartosc x: \n");
	scanf_s("%d", &x);

	printf("Podaj wartosc n: \n");
	scanf_s("%d", &n);

	x >> n;

	printf("wartosc x: %d", x);*/

	//Cwiczenie 5 - plik 1

	// Cwiczenie 6
	
	/*double a, b, c, delta, pierw1, pierw2, pierw0;
	
	printf("Podaj wsp a: \n");
	scanf_s("%lf", &a);

	if (a == 0)
	{
		printf("Podano niewlasciwy wsp a!\n");
		return 0;
	}

	printf("Podaj wsp b: \n");
	scanf_s("%lf", &b);

	printf("Podaj wyraz wolny c: \n");
	scanf_s("%lf", &c);

	delta = b * b - (4 * a * c);

	if (delta > 0)
	{
		pierw1 = (-b + sqrt(delta) / 2 * a);
		pierw2 = (-b - sqrt(delta) / 2 * a);

		printf("Pierwiastek x1: %lf\n", pierw1);
		printf("Pierwiastek x2: %lf\n", pierw2);

	}
	else if (delta == 0)
	{
		pierw0 = -b / 2 * a;
		printf("Jedyny pierwiastek x0: %lf", pierw0);
	}

	else
	{
		printf("Brak pierwiastkow");
	}*/


	// Cwiczenie 7
	
	//double a, b, c, d, e, f, x, y, wynik;

	//printf("Podaj wsp a: ");
	//scanf_s("%lf", &a);

	//printf("Podaj wsp b: ");
	//scanf_s("%lf", &b);

	//printf("Podaj wsp c: ");
	//scanf_s("%lf", &c);

	//printf("Podaj wsp d: ");
	//scanf_s("%lf", &d);

	//printf("Podaj wsp e: ");
	//scanf_s("%lf", &e);

	//printf("Podaj wsp f: ");
	//scanf_s("%lf", &f);

	//y = f / (-d * b * e);

	//printf("y : %lf", y);








	

	




	return 0;
}


