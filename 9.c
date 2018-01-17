#include<stdio.h>

int main(){

    int row1,col1,row2,col2,a[100][100],b[100][100];
    int i,j,k,sum=0;

    scanf("%d %d ",&row1,&col1);
    for(i=0;i<row1;i++) for(j=0;j<col1;j++) scanf("%d",&a[i][j]);

    scanf("%d %d",&row2,&col2);
    for(i=0;i<row2;i++) for(j=0;j<col2;j++) scanf("%d",&b[i][j]);

    for(i=0;i<row1;i++)
        for(j=0;j<col2;j++)
            for(k=0;k<col1;k++)
                sum += a[i][k] * b[k][j];

    printf("%d \n",sum);

    return 0;

}
