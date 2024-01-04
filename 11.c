#include<stdio.h>
#include<stdlib.h>


 
int queue[10];  
int front=-1;  
int rear=-1;  

void enqueue(int element)  
{  
    if(front==-1 && rear==-1)  
    {  
        front=0;  
        rear=0;  
        queue[rear]=element;  
    }  
    else if((rear+1)%10==front)
    {  
        printf("Queue is overflow..");  
    }  
    else  
    {  
        rear=(rear+1)%10;        
        queue[rear]=element;      
    }  
}  
 
 
int dequeue()  
{  
    if((front==-1) && (rear==-1))  
    {  
        printf("\nQueue is underflow..");  
    }  
 else if(front==rear)  
{  
   printf("\nThe dequeued element is %d", queue[front]);  
   front=-1;  
   rear=-1;  
}  
else  
{  
    printf("\nThe dequeued element is %d", queue[front]);  
   front=(front+1)%10;  
}  
}  
 
void display()  
{  
    int i=front;  
    if(front==-1 && rear==-1)  
    {  
        printf("\n Queue is empty..");  
    }  
    else  
    {  
        printf("\nElements in a Queue are :");  
        while(i<=rear)  
        {  
            printf("%d,", queue[i]);  
            i=(i+1)%10;  
        }  
    }  
}  
int main()  
{  
    int choice=1,x;   // variables declaration  
     
    while(choice<4 && choice!=0)   // while loop  
    {  
    printf("Press 1: Insert an element\n");  
    printf("Press 2: Delete an element\n");  
    printf("Press 3: Display the element\n");  
    printf("Enter your choice :\n");  
    scanf("%d", &choice);  
     
    switch(choice)  
    {  
         
        case 1:  
     
        printf("Enter the element which is to be inserted :");  
        scanf("%d", &x);  
        enqueue(x);  
        break;  
        case 2:  
        dequeue();  
        break;  
        case 3:  
        display();  
 
    }}  
    return 0;  
}  
