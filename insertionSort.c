#include <stdio.h>

void main(){


	printf("\nEnter the number of elements to input: ");
	int limit;
	scanf("%d",&limit);
	int arr[limit];
	
	printf("\nEnter the elements");
	for(int i = 0; i<limit; i++){
	
		scanf("%d",&arr[i]);
	
	}
	printf("\nThe array before insertion sorting\n");
	for(int i = 0; i<limit; i++){
		printf("%d  ",arr[i]);
	}
	int temp,j, i = 1;
	while(i<limit){
		j = i;
		while(arr[j]<arr[j-1] && j >0){
		temp = arr[j];
		arr[j] = arr[j-1];
		arr[j-1] = temp;
		j--;
		}
		i++;
	}
	printf("\nThe array after insertion sorting\n");
	for(int i = 0; i<limit; i++){
		printf("%d  ",arr[i]);
	}
	printf("\n");
	
	
	
}


