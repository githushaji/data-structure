#include<stdio.h>
int stack[100],n=10,top=-1;
void push(){
int val;
if(top==n-1){
printf("stack overflow");
}
else{
printf("Enter an element");
scanf("%d",&val);
top++;
stack[top]=val;
}
void pop()
{
int val;
if(top==-1){
printf("stack is empty");
}
else
{
val=stack[top];
top--;
printf("popped element is %d ",val);
}
}
void display()
{
if(top==-1){
printf("stack is empty");
}
else
{
for(int i=top;i>0;i--){
printf("%d\n",stack[i]);
}
}
}
int main()
{
int ch;
do{
printf("\n---------stack operation-------");
printf("1.push\n2.pop\n3.display\n");
printf("enter your choice");
scanf("%d",&ch);
switch(ch)
{
case 1:
push();
break;
case 2:
pop();
break;
case 3:
display();
break;
default:
printf("Invalid Input");
}
while(ch!=3);
}
