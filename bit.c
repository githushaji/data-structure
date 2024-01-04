#include<stdio.h>
#include<stdlib.h>
int a[11],b[11],u[11],i;
int us[11]={1,2,3,4,5,6,7,8,9,10,11};
void seta()
{
int s1,d1;
printf("Enter the size of first set\n");
scanf("%d",&s1);
printf("Enter elements\n");
for(i=0;i<s1;i++)
{
scanf("%d",&d1);
a[d1]=1;
}
printf("Bitstring of A:\n");
for(i=1;i<11;i++)
{
printf("%d\t",a[i]);
}
printf("\n");
}
void setb()
{
int s2,d2;
printf("Enter the size of second set\n");
scanf("%d",&s2);
printf("Enter elements\n");
for(i=0;i<s2;i++)

{
scanf("%d",&d2);
b[d2]=1;
}
printf("Bitstring of B: \n");
for(i=1;i<11;i++)
{ printf("%d \t",b[i]); }
printf(" \n"); }
void Union()
{
for(i=1;i<11;i++)
{
if(a[i]==1 || b[i]==1)
{ u[i]=1; }
else { u[i]=0; }
}
printf("Union: \n");
for(i=1;i<11;i++)
{ printf("%d \t",u[i]); }
}
void main()
{
seta();
setb();
Union();
}
