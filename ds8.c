
#include<stdio.h>
int a[50][50],b[50][50],m,n;

void display(int a[50][50], int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d \t",a[i][j]);
        }
        printf("\n");
    }
}

void input(int a[50][50], int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
}

void add(int a[50][50], int b[50][50], int n){
    int c[50][50];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("Resultant Matrix : \n");
    display(c,n);
}

void sub(int a[50][50], int b[50][50], int n){
    int c[50][50];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            c[i][j]=a[i][j]-b[i][j];
        }
    }
    printf("Resultant Matrix : \n");

    display(c,n);
}

void mul(int a[50][50], int b[50][50], int n){
    int c[50][50];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            c[i][j]=0;
            for(int k=0;k<n;k++){
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    printf("Resultant Matrix : \n");
    display(c,n);
}

void main(){
    int ch;

    printf("Enter the size of the matrix 1 : ");
    scanf("%d",&m);
    printf("Enter matrix 1 : ");
    input(a,m);    
    printf("Enter the size of the matrix 2 : ");
    scanf("%d",&n);
    printf("Enter matrix 2 : ");
    input(b,n);
    
    do{
        printf("1. Add\n2. Subtract\n3. Multiply\n4. Exit\nEnter your choice(1-4) : ");
        scanf("%d",&ch);
        switch(ch){
            case 1  :   add(a,b,n);
                        break;
            case 2  :   sub(a,b,n);
                        break;
            case 3  :   mul(a,b,n);
                        break;
        }
    }while(ch>0&&ch<4);
}
