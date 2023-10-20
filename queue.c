#include<stdio.h>
int rear=-1, front = 0;
void enqueue(int limit);
void display(int limit);
void dequeue();
int queue[100];
void main(){
	int limit, key = 1;
	printf("\nEnter the limit");
	scanf("%d",&limit);
	int choice;
	printf("\n1. Enqueue\n2.Dequeue\n3.Display\n4.Exit \n");
	while (key == 1){
	printf("\nEnter the choice\n");
	scanf("%d",&choice);
	if (choice == 1){
		enqueue(limit);
		}
	else if(choice == 2){
		dequeue();
	}
	
	
	else if(choice == 3){
		display(limit);
	}
	
	else if(choice == 4){
		printf("Exiting the program....\n");
		break;}
	else{
	printf("Invalid choice");
	}
	
	
	}
	}
	


void enqueue(int limit){
	if (rear == limit -1){
		printf("OVERFLOW");
		}	
	else{
		rear += 1;
		printf("Enter the element to append\n");
		scanf("%d",&queue[rear]);
		}
	}

void display(int limit){
	if (rear == -1){
		printf("The Queue is empty");
		}	
	else{
		printf("The queue is \n");
		for(int i = 0; i < limit; i++){
			printf("%d",queue[i]);
			}
		printf("\n");
		}
	}
void dequeue(){
	if (rear < front){
		printf("The Queue is empty\n");
		}
	
	else if (front == rear){
		printf("The deleted element is %d",queue[front]);
		front = 0;
		rear = -1;
	}
	else{
	printf("The deleted element is %d",queue[front]);
	front +=1;
	}
	
}







