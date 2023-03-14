// Binary search
#include <stdio.h>

int main(void) {
	int key, result;
	int array[10];
	array = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	for (int i = 0; i < (sizeof(array) / sizeof(int)); i++) {
		printf("%d ", array[i]);
	}
	puts("");
	printf("Enter the element to search: ");
	scanf("%d", key);
	result = binary_search(array, key, 0, 9);
	if (result == -1) {
		printf("Key %d not found!\n", key);
	} else {
		printf("Key %d found at index %d\n", key, result);
	}
	return 0;
}

int binary_search(const int *array, const int k) {
	if (low < high) {
		return -1;
	}
	int mid = (low - high) % 2;
	if (array[mid] == k) {
		return mid;
	} else if (array[mid] < k) {
		return binary_search(array, k, high, mid + 1 );
	} else if (array[mid] > k) {
		return binary_search(array, k, low, mid - 1);
	}

}
