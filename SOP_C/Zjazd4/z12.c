#include <stdio.h>
#include <stdlib.h>

void dodaj();
void odejmij();
void pomnoz();
void podziel();
void menu();
void wybor();

int main()
{
	float l1, l2;
	int opcja;
	for(;;){
		menu();
		scanf("%d", &opcja);
		wybor(opcja);
	}
	return 0;
}

void menu()
{
	printf("\n\n-------MENU-------\n");
	printf("1. Dodaj liczby\n");
	printf("2. Odejmij liczby\n");
	printf("3. Pomnoz liczby\n");
	printf("4. Podziel liczby\n");
	printf("5. Wyjscie\n");
}

void wybor(int opcja)
{
	switch(opcja)
	{
	case 1:
		dodaj();
		break;
	case 2:
		odejmij();
		break;
	case 3:
		pomnoz();
		break;
	case 4:
		podziel();
		break;
	case 5:
		exit(0);
	default:
		exit(0);
	}
}

float dane(){
	float n;
	printf("Wprowadz liczbe: \n");
        scanf("%f", &n);
	return n;
}

void dodaj(){
	float n1, n2;
	n1 = dane();
	n2 = dane();
	printf("Wynik dodawania: %0.2f\n", n1+n2);
}

void odejmij(){
	float n1, n2;
        n1 = dane();
        n2 = dane();
	printf("Wynik odejmowania: %0.2f\n", n1-n2);
}

void pomnoz(){
	float n1, n2;
        n1 = dane();
        n2 = dane();
	printf("Wynik mnozenia: %0.2f\n", (n1*n2));
}

void podziel(){
	float n1, n2;
        n1 = dane();
        n2 = dane();
	printf("Wynik dzielenia: %0.2f\n", (n1/n2));
}
