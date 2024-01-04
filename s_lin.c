#include<stdio.h>
#include<stdlib.h>

struct node{
    int value;
    struct node*next;
};
struct node *head=NULL, *ptr;

void create(int value)
{
    struct node *temp=NULL;
    temp=malloc(sizeof(struct node));
}


void insertbegin(int value)
{
    struct node *temp=NULL;
    temp=malloc(sizeof(struct node));
    temp->value=value;
    temp->next=NULL;
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        temp->next=head;
        head=temp;
    }
}

void insertposition(int value,int pos)
{
    struct node *temp=NULL;
    temp=malloc(sizeof(struct node));
    temp->value=value;
    temp->next=NULL;
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        struct node *prev;
        int count=1;
        ptr=head;
        while(ptr!=NULL)
        {
            prev=ptr;
            ptr=ptr->next;
            count++;
            if(count==pos)
            {
                temp->next=prev->next;
                prev->next=temp;
            }
        }
    }
}

void deletebegin()
{
    if(head==NULL)
    {
        printf("List empty, No element to delete...");
    }
    else
    {
        ptr=head;
        head=head->next;
        ptr->next=NULL;
        free(ptr);
    }
}

void deleteend()
{
    if(head==NULL)
    {
        printf("List empty, No element to delete...");
    }
    else
    {
        struct node *prev;
        ptr=head;
        while(ptr->next!=NULL)
        {
            prev=ptr;
            ptr=ptr->next;
        }
        prev->next=NULL;
        free(ptr);
       
    }
}

void display()
{
    if(head==NULL)
    {
        printf("The list is empty...");
    }
    else
    {
        ptr=head;
        while(ptr!=NULL)
        {
            printf("%d\t%p\t,",ptr->value,ptr->next);
            ptr=ptr->next;
        }
    }
}

void main()
{
   
    int ch,value,pos;
    printf("The Operations available are:\nCreation:\n2)Insert at begining:\n3)Insert at a position:\n4)Delete from begining:\n5)Delete from end:\n6)Exit:");
    do{
    printf("\nEnter an option:");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        {
            create(value);
            printf("LL created with No elements");
            break;
        }
        case 2:
        {
            printf("Enter the value:");
            scanf("%d",&value);
            insertbegin(value);
            display();
            break;
        }
        case 3:
        {
            printf("Enter the value:");
            scanf("%d",&value);
            printf("Enter the position to insert the new node:");
            scanf("%d",&pos);
            insertposition(value,pos);
            display();
            break;
        }
        case 4:
        {
            deletebegin();
            display();
            break;
        }
        case 5:
        {
            deleteend();
            display();
            break;
        }
       
        default:
        {
            printf("Invalid option...");
            break;
        }
    }
        }while(ch<6);
   
}












	

