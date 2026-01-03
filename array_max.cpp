#include<stdio.h>
int main(){
	int n,i;
	printf("Enter the size:");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements:");
	for(i=0;i<n;i++)
	 scanf("%d",&a[i]);
	 int max=a[0];
	for(i=1;i<n;i++){
		if(max<a[i])
		 max=a[i];
	} 
	printf("MAX:%d",max);
	 

}
