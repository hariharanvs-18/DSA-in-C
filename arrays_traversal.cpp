#include<stdio.h>
int main(){

int n,i;
printf("Enter the size:");
scanf("%d",&n);
int a[n];
printf("Enter the elements:");
for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 
 for(i=0;i<n;i++)
  printf("%d\t",a[i]);
}