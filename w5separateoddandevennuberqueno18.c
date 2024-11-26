//QUE NO 18
#include<stdio.h>
int main(){
	int n,i,j,t=0,k=0;
	printf("enter number of elements");
	scanf("%d",&n);
	
	int a[n];
	int odd[n];
	int even[n];
	
	for(i=0;i<n;i++){
		printf("enter elements %d",i+1);
		scanf("%d",&a[i]);
	}
	 
	for(i=0;i<n;i++){
		if(a[i]%2==0){
	   even[t]=a[i];
	   t++;
    }}
    
	if else{
    	odd[k]=a[i];
    	k++;
	}
	 
	 printf("array odd elements are\n");
	 for(i=0;i<k;i++)
	 printf("%d",odd[i]);
	 
	 printf("array even elements are\n");
	 for(i=0;i<t;i++)
	 printf("%d",even[i]);
	 
	 return 0;
}
