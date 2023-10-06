#include <stdio.h>

void main(){
	int limit,i,count =0;
	count++;
	printf("Enter the limit: ");
	scanf("%d",&limit);
	count++;
	int a[limit];
	printf("Enter the elements : ");
	count++;
	for(i = 0; i<limit; i++){
		scanf("%d",&a[i]);
		count++;
	}
	int y,yes = 0;
	count++;
	printf("Enter the element to be searched: ");
	scanf("%d", &y);
	count++;
	for (i = 0; i<limit; i++){
	count++;

		if (y == a[i]){
			count++;
			yes ++;
			printf("found\n");
			count++;
			count++;
			printf("time_complexity is %d \nspace_complexity %d",count,20+limit*4);
			break;
			}
	count++;
	}
	count++;
	
	if (yes == 0){
		printf("not found \n");
	count++;
	count++;
	printf("time_complexity is %d \n space_complexity %d \n",count,20+limit*4);
	
	}
	
	
	
}
