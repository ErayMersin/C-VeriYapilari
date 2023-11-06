#include<stdio.h>

int main()
{
	
	int dizi[100], i, j, sayi, temp;

	//Eleman sayisi alma.
	printf("Dizinin eleman sayisini giriniz: ");
	scanf_s("%d", &sayi);

	for (i = 0; i < sayi; i++)
	{
		printf("%d. Eleman: ", i + 1);
		scanf_s("%d", &dizi[i]);
	}

	for (i = 0; i < sayi - 1; i++)
	{
		for (j = 0; j < sayi - i - 1; j++)
		{
			if (dizi[j] > dizi[j + 1])
			{
				temp = dizi[j];
				dizi[j] = dizi[j + 1];
				dizi[j + 1] = temp;
			}
		}
	}
	//BubbleShorta gore listeleme.
	for (i = 0; i < sayi; i++)
	{
		printf("%d\n", dizi[i]);
	}
}