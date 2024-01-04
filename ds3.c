#include<stdio.h>
int sum(int x, int y){
    return x+y;
}
void main(){
    int a,b;
    printf("Enter 2 numbers : ");
    scanf("%d %d",&a,&b);
    printf("Sum : %d",sum(a,b));
}
