#include<stdio.h>
#define n 5
int a[50], top=-1;
void push(){
    if(top==n-1){
        printf("Stack Overflow");
    }
    else{
        top++;
        printf("Enter the element to be inserted : ");
        scanf("%d",&a[top]);
    }
}
void pop(){
    if(top==-1){
        printf("Stack Underflow");
    }
    else{
        printf("%d is deleted",a[top]);
        top--;
    }
}
void display(){
    if(top==-1){
        printf("Stack Underflow");
    }
    else{
        printf("Stack : ");
        for(int i=top;i>=0;i--)#include<stdio.h>
#define n 5
int a[50], top=-1;
void push(){
    if(top==n-1){
        printf("Stack Overflow");
    }
    else{
        top++;
        printf("Enter the element to be inserted : ");
        scanf("%d",&a[top]);
    }
}
void pop(){#include<stdio.h>
#define n 5
int a[50], top=-1;
void push(){
    if(top==n-1){
        printf("Stack Overflow");
    }
    else{
        top++;
        printf("Enter the element to be inserted : ");
        scanf("%d",&a[top]);
    }
}
void pop(){
    if(top==-1){
        printf("Stack Underflow");
    }
    else{
        printf("%d is deleted",a[top]);
        top--;
    }
}
void display(){
    if(top==-1){
        printf("Stack Underflow");
    }
    else{
        printf("Stack : ");
        for(int i=top;i>=0;i--)#include<stdio.h>
#define n 5
int a[50], top=-1;
void push(){
    if(top==n-1){
        printf("Stack Overflow");
    }
    else{
        top++;
        printf("Enter the element to be inserted : ");
        scanf("%d",&a[top]);
    }
}
void pop(){
    if(top==-1){
        printf("Stack Underflow");
    }
    else{
        printf("%d is deleted",a[top]);
        top--;
    }
}
void display(){
    if(top==-1){
        printf("Stack Underflow");
    }
    else{
        printf("Stack : ");
        for(int i=top;i>=0;i--){
            printf("%d \t",a[i]);
        }
    }
}
void main(){
 int ch;
    do{
        printf("1. Push\n2. Pop\n3. Display\n4. Exit\nEnter your choice(1-4) : ");
        scanf("%d",&ch);

        switch(ch){
            case 1  :   push();
                        break;
            case 2  :   pop();
                        break;
            case 3  :   display();
                        break;
        }
    }while(ch>0&&ch<4);
}

