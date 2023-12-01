#include<stdio.h>
void parent(int pos);
void child(int pos,int numberOfElements);
int Tree[100];
void main(){
	printf("Enter the number of elements\n");
	int numberOfElements;
	
	scanf("%d",&numberOfElements);
	printf("Enter the elements in to the tree\n");
	for(int i = 1; i<=numberOfElements; i++){
		scanf("%d",&Tree[i]);
	}
	int choice = 1;
	printf("The elements and their position are:\n");
	for(int i = 1; i<=numberOfElements; i++){
		printf("%d pos ->%d",Tree[i],i);
		printf("\n");
	}
	printf("\n");
	printf("1.Display the details\n 0.Exit\n");
	while(choice != 0){
		printf("Enter you choice:\n");
		scanf("%d",&choice);
		if (choice == 1){
			int pos;
			printf("Enter the postion");
			scanf("%d",&pos);
			parent(pos);
			child(pos,numberOfElements);		
		}	
	}
}
void parent(int pos){
	if (pos/2 == 0){
		printf("%d has no parent\n",Tree[pos]);
	}
	else{
		printf("Parent of %d is %d\n",Tree[pos],Tree[pos/2]);
	}
	
}
void child(int pos,int numberOfElements){
	if(2*(pos) > numberOfElements){
		printf("The %d  has no child\n",Tree[pos]);
	}
	else if((2*pos)+1 > numberOfElements){
		printf("Left child  of %d is %d and has no Right child \n",Tree[pos],Tree[2*pos]);
	}
	else{
		printf("Left child  of %d is %d and Right child of %d is %d \n",Tree[pos],Tree[2*pos],Tree[pos],Tree[(2*pos)+1]);
	}
	
}
