#include <iostream>

int arr[100];
int key;

void insertionSort(int arr[], int sayi) {

	int i, j;

	for (i = 1; i < sayi; i++) {
		key = arr[i];
		j = i - 1;
		while (key < arr[j] && j >= 0) {
			arr[j + 1] = arr[j];
			j--;

		}
		arr[j + 1] = key;
	}
}




int main() {
	int i, adet;
	printf("Dizinin eleman sayisini giriniz = ");
	scanf_s("%d", &adet);

	for (i = 0; i < adet; i++) {
		printf("%d. sayiyi giriniz : ", i + 1);
		scanf_s("%d", &arr[i]);


	}
	insertionSort(arr, adet);
	for (i = 0; i < adet; i++) {
		printf("%d ", arr[i]);

	}


	return 0;
}
