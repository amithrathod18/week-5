#include <stdio.h>
int main() {
    int n,i,j;
    printf("Enter number of elements i array");
    scanf("%d",&n);

    int a[n];
    printf("Enter elements");
    
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
	}
	for(j=i+1;j<n;j++){
		if(a[i]==a[j]){
			printf("%d",a[i]);
			i=n;
		}
    }
    return 0;
}

