#include<stdio.h>
#include<stdlib.h>
struct node
{
    int value;
    struct node *next;
    struct node *prev;
};
struct node *head=NULL, *ptr;
void create()
{
    struct node *temp=NULL;
    temp=malloc(sizeof(struct node));
    if(temp==NULL)
    {
        printf("Memory not allocated...");
    }
    else
    {
        printf("Memory allocated sucessfully...");
    }
}
void insertbegin(int item)
{
    struct node *temp=NULL;
    temp=malloc(sizeof(struct node));
    if(temp==NULL)
    {
       printf("Insufficient memory...");
    }    
    else
    {
        temp->value=item;
        temp->prev=NULL;
        temp->next=NULL;
    }
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        temp->next=head;
        temp->next->prev=temp;
        head=temp;
    }
    printf("node inserted with value = %d",item);
}

void insertlast(int item)
{
    struct node *temp=NULL;
    temp=malloc(sizeof(struct node));
    if(temp==NULL)
    {
       printf("Insufficient memory...");
    }    
    else
    {
        temp->value=item;
        temp->prev=NULL;
        temp->next=NULL;
    }
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        ptr=head;
        while(ptr->next != NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=temp;
        temp->prev=ptr;
    }
    printf("node inserted at LAST with value = %d",item);
}

void deletefirst()
{
if(head==NULL)
{
printf("Underflow...!");
}
else
{
ptr=head;
ptr->next->prev=NULL;
head=head->next;
free(ptr);
}
printf("node deleted");

}

void deletelast()
{
if(head==NULL)
{
printf("Underflow...!");
}
else
{
ptr=head;
while(ptr->next != NULL)
{
ptr=ptr->next;
}
ptr->prev->next=NULL;
free(ptr);
printf("Node deleted from last");
}
}

void search(int s_item)
{
int count=0;
if(head==NULL)
{
printf("Underflow...!");
}
else
{
ptr=head;
while(ptr != NULL)
{
count++;
if(ptr->value == s_item)
{
printf("item found at position %d",count);
break;

}
else
{
ptr=ptr->next;
}
}
if(ptr == NULL)
{
printf("Item not present");
}

}
}

void count()
{
int count=0;
if(head==NULL)
{
printf("Undeflow...!");
}
else
{
ptr=head;
while(ptr != NULL)
{
ptr=ptr->next;
count++;
}
}
printf("The total number of node is : %d",count);
}

void traverse()
{
if(head==NULL)
{
printf("Underflow...!");
}
else
{
ptr=head;
while(ptr != NULL)
{
printf("%d\t",ptr->value);
ptr=ptr->next;
}
}
}

void main()
{
int ch,item,s_item;
printf("The operations available are:\n1.Creation\n2.Count the number of nodes\n3.Insertion at begining\n4.Insertion at end\n5.Deletion from first\n6.Deletion from last\n7.Searching\n8.Traversal");
do{
printf("\nSelect an option:");
scanf("%d",&ch);

switch(ch)
{
case 1:
create();
break;

case 2:
count();
break;

case 3:
printf("Enter the item to be inserted:");
scanf("%d",&item);
insertbegin(item);
break;

case 4:
printf("Enter the item to be inserted:");
scanf("%d",&item);
insertlast(item);
break;

case 5:
deletefirst();
break;

case 6:
deletelast();
break;

case 7:
printf("Enter the element to search:");
scanf("%d",&s_item);
search(s_item);
break;

case 8:
traverse();
break;

default:
printf("Invalid option");
}
}while(ch<10);
}



	

