#include<stdio.h>
#include<string.h>
#include<math.h>

int is_palindrome(char str[100],int len){
    int i;
    for(i=0;i<len/2;i++)
        if(str[i] != str[len-i-1]) return 0;

    return 1;
}

int transpose_equal(char str[100],int len){
    int side = sqrt(len),count=0,i,j,matrix[10][10];

    for(i=0;i<side;i++)
        for(j=0;j<side;j++)
            matrix[i][j] = str[count++];

    for(i=0;i<side;i++)
        for(j=0;j<i;j++)
            if(matrix[i][j] != matrix[j][i]) return 0;

    return 1;
}

int length_perfect_square(int len){
    int temp = sqrt(len);
    if(temp*temp == len) return 1;
    else return 0;
}

int testcase(){
    char str[100];
    scanf("%s",str);
    int len = strlen(str);
    if( !length_perfect_square(len) ) return 0;
    else{
        if( is_palindrome(str,len) && transpose_equal(str,len) )
            return 1;
        else return 0;
    }
}

int main(){
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        if(testcase()) printf("YES\n");
        else printf("NO\n");

    return 0;
}
