#include<stdio.h>
int a[50],p,x,n;

void insert(){
    printf("Enter the element and it's position : ");
    scanf("%d %d",&x,&p);
    if(p>n){
        printf("Invalid Position");
    }
    else{
        n++;
        for(int i=n-1;i>=p;i--){
            a[i]=a[i-1];
        }
        a[p-1]=x;
    }
}
void del(){
    printf("Enter position of the element to be deleted : ");
    scanf("%d",&p);
    if(p>n){
        printf("Invalid Position");
    }
    else{
        n–;
        printf("%d is deleted",a[p-1]);
        for(int i=p-1;i<=n-1;i++){
            a[i]=a[i+1];
        }
    }
}
void display(){
    printf("Array : ");
    for(int i=0;i<n;i++){
        printf("%d \t",a[i]);
    }
}
void main(){
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    printf("Enter array : ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int ch;
    do{
        printf("1. Insert\n2. Delete\n3. Display\n4. Exit\nEnter your choice(1-4) : ");
        scanf("%d",&ch);
        switch(ch){
            case 1  :   insert();
                        break;
            case 2  :   del();
                        break;
            case 3  :   display();
                        break;
        }
    }while(ch>0&&ch<4);
}

