#include<stdio.h>
int a[50],n;
int l_search(int x){
    for(int i=0;i<n;i++){
        if(x==a[i]){
            return i;
        }
    }
    return -1;
}

int b_search(int x){
    int b=0,l=n-1,m;
    while(b<=l){
        m=(b+l)/2; 
        if(x==a[m]) 
            return m; 
        else if(x>a[m]) 
            b=m+1; 
        else
            l=m-1;
    }
    return -1;
}
#include<stdio.h>
int a[50],n;
int l_search(int x){
    for(int i=0;i<n;i++){
        if(x==a[i]){
            return i;
        }
    }
    return -1;
}

int b_search(int x){
    int b=0,l=n-1,m;
    while(b<=l){
        m=(b+l)/2; 
        if(x==a[m]) 
            return m; 
        else if(x>a[m]) 
            b=m+1; 
        else
            l=m-1;
    }
    return -1;
}

void main(){
    int ch,x,p;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    printf("Enter array : ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    

    printf("Enter the element to be searched : ");
    scanf("%d",&x);
    printf("Select the searching method : ");
    
    do{
        printf("1. Linear Search\n2. Binary Search\n3. Exit\nEnter your    choice(1-3) : ");
        scanf("%d",&ch);
        switch(ch){
            case 1  :   p=l_search(x);

            case 2  :   p=b_search(x);
            
                        if(p==-1){
                        printf("Element not found");
                        }
                        else{
                        printf("Element found at position %d",p+1);
                        }
        }
    }while(ch>0&&ch<3);
}
