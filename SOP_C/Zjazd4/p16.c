#include <stdio.h>

void wyp_licz(int);

int main()
{
	int liczba;
	printf("Podaj liczbe calkowita: \n");
	scanf("%d", &liczba);
	wyp_licz(liczba);

	return 0;
}

void wyp_licz(int liczba)
{
	printf("Podana liczba wynosi: %d\n", liczba);
}
