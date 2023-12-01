#include <stdio.h>
int arr[50];
int limit;
void readArray();

void swap(int *a, int *b) {
	int t = *a;
	*a = *b;
	*b = t;
}

int partition(int arr[], int low, int high) {
	int pivot = arr[high];
	int i = (low - 1);

	for (int j = low; j <= high - 1; j++) {
		if (arr[j] < pivot) {
			i++; 
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i + 1], &arr[high]);

	return (i + 1);
}

void quickSort(int arr[], int low, int high) {
	if(low < high) {
		int pi = partition(arr, low, high);
		quickSort(arr, low, pi - 1);
		quickSort(arr, pi + 1, high);
	}
}

void printArray(int arr[], int size) {
	for(int i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

int main() {
	readArray();
	int n = limit;
    
    printf("Unsorted array : \n");
    printArray(arr, n);

	quickSort(arr, 0, n - 1);
	printf("\nSorted array : \n");
	printArray(arr, n);
	return 0;
}

void readArray(){
	printf("Enter the limit of the array: ");
	scanf("%d",&limit);
	printf("Enter the elements of the array\n");
	for(int i = 0; i<limit; i++){
	
		scanf("%d",&arr[i]);
	}

}




