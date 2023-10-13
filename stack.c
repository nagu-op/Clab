#include <stdio.h>
int top = -1;

void push(int stack[50],int pos,int limit);
void display(int stack[50], int top);
void pop();
void peek(int stack[50]);
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
			top = top + 1;
			push(stack,top,limit);

		}
		else if(choice == 2){
			display(stack,top);
		}
		else if (choice == 3){
			pop();
			}
		else if (choice == 4){
			peek(stack);
			}
		else if (choice == 5){
			break;	
		}
		else{
		printf("invalid input");
		}
	}
		}
	

void push(int stack[50],int top,int limit){
	if (top >= limit){
		printf("OVERFLOW");
		}
	else{	
		printf("Enter the element to appended");
		scanf("%d",&stack[top]);
			}
	}
void display(int stack[50],int top){
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
void peek(int stack[50]){
	if (top == -1){
		printf("UNDERFLOW");
		}
	else{
		printf("%d",stack[top]);
	}
	}	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
