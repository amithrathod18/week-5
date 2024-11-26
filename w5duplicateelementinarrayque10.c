#include <stdio.h>
int main() {
    int n, i,k, j;
    printf("Enter number of element");
    scanf("%d", &n);

    int a[n];
    printf("Enter element\n");
    for(i = 0; i < n-1; i++) {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n-1; i++) {
        for(j = i + 1; j < n-i-1; j++) {
            if(a[i] < a[j+1]) {
            printf("%d\n",a[i]);
            }}
    }

    return 0;
}

