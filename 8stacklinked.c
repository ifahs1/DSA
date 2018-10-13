#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
 
struct node
{
    int data;
    struct node *next;
}*top=NULL,*new_node=NULL,*temp;
 
int main()
{
    int ch;
	do
	{
	printf("\n Menu: \n 1.Push \n 2.Pop \n 3.Display \n 4.Exit");
	printf("\n Enter your choice(0-4):");
	scanf("%d",&ch);
	switch(ch)
		{
			case 1: push();
				break;
			case 2: pop();
				break;
			case 3: display();
				break;
			case 4: exit(0);
				break;
			default: printf("\n Inavlid entry");
				 break;
		}
	}while(ch!=4);
 }

int push()
{
    
    new_node=(struct node*)malloc(sizeof(struct node));

	if(new_node==NULL)       
    	{
 	printf("\nStack Overflow");
	}
    	else
    	{
        printf("\n Enter Data:");
	scanf("%d",&new_node->data);
	new_node->next=top;
	top=new_node;
    	}
}




int pop()
{
	if(top==NULL)
	{
		printf("\nStack Underflow");
	}
	else
	{
	temp=top;
	top=top->next;
	printf("Deleted element is %d",temp->data);
	free(temp);
	}
}



int display()
{
	temp=top;
	if(temp==NULL)
	{
		printf("List is empty!!");
	}
	else
	{
        printf("The linked list is:\n");
        while(temp!=NULL)
        	{
            	printf("%d->",temp->data);
            	temp=temp->next;
       		}
	}
}
	
