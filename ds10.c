#include <stdio.h>

int a[100];
int size, element;
int front = -1, rear = -1;





void enqueue()
{
    printf("Enter the element to insert:");
    scanf("%d", &element);
   
    if (rear == size - 1)
    {
        printf("\nOverflow...\n");
    }
    else
    {
        if (front == -1 && rear == -1)
        {
            front = 0;
            rear = 0;
        }
        else
        {
            rear = rear + 1;
        }
        a[rear] = element;
        printf("The element %d inserted\n", element);
    }
}
void dequeue()
{
    if (front == -1 && rear == -1)
    {
        printf("Underflow...");
    }
    else
    {
        element = a[front];
        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            front = front + 1;
        }
        printf("Value %d deleted\n", element);
    }
}

void display()
{
    if (rear == -1)
    {
        printf("Empty queue");
    }
    else
    {
        printf("The present Queue is:");
        for (int i = front; i <= rear; i++)
        {
            printf("%d ", a[i]);
        }
    }
}

int main() {
    int ch;
    printf("Enter the size:");
    scanf("%d", &size);


    do{
        printf("\nOperation available are:1\n1.Insert\n2.Deletion\n3.Display\n");
        printf("\nEnter a choice:");
        scanf("%d", &ch);
        switch (ch) {
            case 1: {
                enqueue();
                break;
            }
            case 2: {
                dequeue();              
                break;
            }
            case 3:
            {
                display();
                break;
            }
            default:
        	 printf("Invaild Choice");
        		
        }
    }while(ch<3);
    return 0;
}


