#include<stdio.h>
#include<stdlib.h>

int stack[100],i,n,top=-1;

void push();
void pop();
void display();
void main()
{
	printf("Enter number of items:");
	scanf("%d",&n);
	printf("\n****** Operations ******\n");
	printf("\n1.Push\n2.Pop\n3.Display\n4.Exit\n");
	int choice=0;
	while(choice!=4)
	{
		printf("\nEnter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:push();break;
			case 2:pop();break;
			case 3:display();break;
			case 4:exit(0);
			default:printf("You entered wrong key");
		}
	}
}
void push()
{
	int item;
	if(top==n)
	printf("\nOverflow");
	else
	{
		printf("\nEnter the item:");
		scanf("%d",&item);
		top=top+1;
		stack[top]=item;
		printf("\nPush is performed");
	}
}
void pop()
{
	if(top==-1)
	printf("\nUnderflow");
	else
	{
		top=top-1;
		printf("\nPop is performed");
	}
}
void display()
{
	if(top==-1)
	printf("\nUnderflow");
	else
	{
		int i;
		printf("\nStack: ");
		for(i=top;i>=0;i--)
		{
			printf("%d ",stack[i]);
		}
	}
}
