#include <stdio.h>
int main(){
    int n,i,t;
    printf("Enter numbers of elements in array");
    scanf("%d", &n);

    int a[n];
    printf("Enter elements");
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }

    for(i=0;i<n/2;i++){
        t=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=t;
    }
    printf("reversed array");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}

