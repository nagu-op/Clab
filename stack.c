#include <stdio.h>
int top = -1;
int stack[50];
void push(int limit);
void display();
void pop();
void peek();
void main(){
	int stack[50];
	int key = 1;
	int limit;
	printf("Enter the stack limit:");
	scanf("%d",&limit);
	
	while (key == 1){
		printf("\n 1.push \n 2. display \n 3. pop\n 4.peek\n 5.exit\n");
		printf("Enter the choice");
		int choice;
		scanf("%d",&choice);
		
		if (choice == 1){
			
			push(limit);

		}
		else if(choice == 2){
			display();
		}
		else if (choice == 3){
			pop();
			}
		else if (choice == 4){
			peek();
			}
		else if (choice == 5){
			break;	
		}
		else{
		printf("invalid input");
		}
	}
		}
void push(int limit){
	if (top >= limit){
		printf("OVERFLOW");
		}
	else{	
		printf("Enter the element to appended");
		top = top+1;
		scanf("%d",&stack[top]);
			}
	}
void display(){
	for (int i = 0; i<top+1;i++){
		printf("%d ",stack[i]);
		}
	}
void pop(){
	if (top == -1){
	printf("UNDERFLOW");
	}	
	else{
	top = top -1;
	}
	}
void peek(){
	if (top == -1){
		printf("UNDERFLOW");
		}
	else{
		printf("%d",stack[top]);
	}
	}	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
