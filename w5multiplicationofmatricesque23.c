#include <stdio.h>
int main() {
    int m,n,p,i,j,k;
    printf("Enter number of rows and columns of the first matrix");
    scanf("%d %d",&m,&n);

    printf("Enter number of rows and columns of the second matrix");
    scanf("%d %d",&n,&p); 
    int matrix1[m][n], matrix2[n][p], product[m][p];

    printf("Enter the elements of the first matrix\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
        scanf("%d",&matrix1[i][j]);
        }
    }

    printf("Enter the elements of the second matrix\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < p; j++) {
        scanf("%d", &matrix2[i][j]);
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<p;j++){
        product[i][j]=0;
        }
    }
    for(i=0;i<m;i++){
    for(j=0;j<p;j++){
     for(k=0;k<n;k++){
	         product[i][j]+=matrix1[i][k]*matrix2[k][j];
            }
        }
    }
    printf("\nThe product of the two matrices is:\n");
    for(i=0;i<m;i++){
        for(j=0;j<p;j++){
            printf("%d ",product[i][j]);
        }
        printf("\n");
    }
    return 0;
}

