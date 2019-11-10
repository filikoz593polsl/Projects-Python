

#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <cstdio>
#define PI 3.1416



int main()
{

	//Cwiczenie 1
	/*char imie[] = "Filip";
	int wiek;

	wiek = 20;
	printf("Imie: %s, Wiek = %d", imie, wiek);*/


	//Cwiczenie 2
	//printf("X X\n");
	//printf(" X\n");
	//printf("X X\n");

	//Cwiczenie 3

	//double a, b;
	//double suma, roznica, iloczyn, iloraz;

	//printf("Podaj a: ");
	//scanf_s("%lf", &a);

	//printf("Podaj b: ");
	//scanf_s("%lf", &b);

	//suma = a + b;
	//roznica = a - b;
	//iloczyn = a * b;
	//iloraz = a / b;

	//printf("Suma = %lf\n", suma);
	//printf("Roznica = %lf\n", roznica);
	//printf("iloczyn = %lf\n", iloczyn);
	//printf("iloraz = %lf\n", iloraz);

	//Cwiczenie 4

	/*double r;
	double powierzchnia_kola;

	printf("Podaj r: ");
	scanf_s("%lf", &r);

	powierzchnia_kola = PI*r*r;

	printf("Pole powierzchnii kola = %lf", powierzchnia_kola);*/


	//Cwiczenie 5
	/*double liczba_stopnii;
	double liczba_radianow;
	int flag;
	double wynik;

	int choice;

	printf("1. Zamien ze Stopni na Radiany\n");
	printf("2. Zamien z Radianow na Stopnie\n");
	scanf_s("%d", &choice);

	switch (choice)
	{
	case 1:
		printf("Podaj liczbe stopnii: ");
		scanf_s("%lf", &liczba_stopnii);
		flag = 1;
		break;
	
	case 2:
		printf("Podaj liczbe radianow: ");
		scanf_s("%lf", &liczba_radianow);
		flag = 0;
		break;

	}

	if (flag == 1)
	{
		wynik = liczba_stopnii * 0.01745329;
	}
	
	else
	{
		wynik = liczba_radianow * 57.2955796;

	}

	printf("Wynik obliczen: %lf", wynik);*/


	//Cwiczenie 6
	//double a, b, c, d, wynik, x;
	//a = 5;
	//b = 3.74;
	//c = -2.3621;
	//d = -13.7;

	//printf("Podaj x dla wielomianu ax3 + bx2 + cx + d\n");
	//scanf_s("%lf", &x);

	//wynik = a * x * x * x + b * x * x + c * x + d;
	//printf("Wartosc wielomianu dla x = %lf, jest rowna: %lf", x, wynik);

	//Cwiczenie 7
	double pb, v, r, pp, h;
	printf("Podaj promien podstawy walca: ");
	scanf_s("%lf", &r);
	if (r <= 0)
	{
		printf("Podano promien r <= 0\n");
		v = 0;
		pp = 0;
		printf("Pole podstawy = %lf\n", pp);
		printf("Objetosc = %lf\n", v);
	}
	else
	{
		printf("Podaj wysokosc walca\n");
		scanf_s("%lf", &h);
		if (h <= 0)
		{
			printf("Podano promien h <= 0\n");
			v = 0;
			printf("Objetosc = %lf\n", v);
			pp = PI * r * r;
			printf("Pole podstawy= %lf\n", pp);
		}
		else
		{
			pb = (2 * PI * r) * h;
			v = pb * h;
			pp = PI * r * r;

			printf("Pole podsawy = %lf\n", pp);
			printf("Pole boczne = %lf\n", pb);
			printf("Objetosc = %lf\n", v);


		}
	}





	





	_getch();
	return 0;

}

