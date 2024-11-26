#include <stdio.h>
int main() {
    int n,i,t,j;
    printf("Enter the number of elements even\n");
    scanf("%d",&n);

    int a[n];
    printf("Enter elements");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n - 1; i += 2) {
        for(j=0;j<n-i-1;j=+2)
        t=a[j];
        a[j]=a[j+1];
        a[j+1]=t;
    }
    
    for (i = 0; i < n; i++) {
        printf("%d\n ", a[i],a[j+1]);
    }
    printf("\n");

    return 0;
}

