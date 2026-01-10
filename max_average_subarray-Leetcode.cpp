#include<stdio.h>
int main(){
	int n,k;
	scanf("%d %d",&n,&k);
	int a[n];
	for(int i=0;i<n;i++)
	 scanf("%d",&a[i]);
	  
	  int sum=0;
	  for(int i=0;i<k;i++){
	  	sum+=a[i];
	  }
	 int max=sum;
	   for(int i=k;i<n;i++){
	   	 sum=sum+a[i]-a[i-k];
	   	  if(max<sum){
	   	  	max=sum;
			 }
	   }
	   double avg=(double)max/k;
	    printf("AVG:%lf",avg);
}