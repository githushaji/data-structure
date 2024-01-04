#include<stdio.h>
int a[50],n;

void sort(){
for(int i=0;i<n-1;i++){
    for(int j=0;j<n-i-1;j++){
      if(a[j]>a[j+1]){
        int t=a[j];
        a[j]=a[j+1];
        a[j+1]=t;
      }
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

    printf("Array before sorting : ");
    display();
    sort();
    printf("\nArray after sorting : ");
    display();
}
