#include <stdio.h>

int main()
{
	int l;
	float num[100];
	float sum = 0;

	printf("Ile liczb chcesz sumowac: \n");
	scanf("%d", &l);
	for(int i = 1; i <= l; i ++){
		printf("Podaj %i liczbe: \n", i);
		scanf("%f", &num[i]);
		sum = sum + num[i];
	}
	printf("Suma wynosi: %0.2f\n", sum);
	return 0;
}
