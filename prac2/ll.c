#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
       	    int data;
            struct node *next;
}Node;
Node *head=NULL;
void insertAtBegining(Node **,int);
void insertAtEnd(Node **,int );
void display(Node *);
void main(){
		int n;
		Node *head=NULL;
	int ch;
	do{

	printf("\tMenu:\n1.insertion begining\n2.Insert end");
	scanf("%d",&ch);
	switch(ch){
		
	case 1:	
	    printf("Enter a data:");
	    scanf("%d",&n);
	    insertAtBegining(&head,n);
		display(head);
		break;
	case 2:
	    printf("Enter a data:");
	    scanf("%d",&n);
		insertAtEnd(&head,n);
		display(head);
		break;
}
}while(ch<=3);
}
void insertAtBegining(Node **head,int n)
{   Node *temp;
    temp=(Node**)malloc(sizeof(struct node));
    if(temp==NULL) 
	{	printf("Failure");}
    temp->data=n;
    if(*head==NULL) 
    {    temp->next=NULL;
	}
    else{   

	temp->next=*head;

	
	}
	*head=temp;
	
   }
void display(Node *head)
{	Node *p;
	if(head==NULL)
	{	printf("Empty");}

		p=head;
		while(p!=NULL)
		{

			printf("%d->",p->data);
			p=p->next;


		}
	

	
}

void insertAtEnd(Node **head,int n)
{   Node *temp,*p;
    temp=(Node**)malloc(sizeof(struct node));
    if(temp==NULL) 
	{	printf("Failure");}
    temp->data=n;
    temp->next=NULL;
    if(*head==NULL) 
    {    *head=temp;
	}
else{
      p=*head;
	while(p->next!=NULL)
	{ p=p->next;
	} 

	p->next=temp;

	
	}
	
	
   }

