#include<stdio.h>
void sum1(){
    int a,b;
    printf("Enter 2 numbers : ");
    scanf("%d %d",&a,&b);
    printf("Sum : %d",a+b);
}
void sum2(int a, int b){
    printf("Sum : %d",a+b);
}
int sum3(){
    int a,b;
    printf("Enter 2 numbers : ");
    scanf("%d %d",&a,&b);
    return a+b;
}
int sum4(int a, int b){
    return a+b;
}
void main(){
    int ch,a,b;
    do{
        printf("1. Function without return type and arguments\n2. Function without return type and with arguments\n3. Function with return type and without arguments\n4. Function with return type and arguments\n5. Exit\nEnter your choice(1-4): ");
        scanf("%d", &ch);
        switch(ch){
            case 1: sum1();
                    break;
            case 2: printf("Enter 2 numbers : ");
                    scanf("%d %d",&a,&b);
                    sum2(a,b);
                    break;

            case 3: printf("Sum : %d",sum3());
                    break;
            case 4: printf("Enter 2 numbers : ");
                    scanf("%d %d",&a,&b);
                    printf("Sum : %d",sum4(a,b));
                    break;
        }
    }while(ch>0&&ch<4);
}

