#include<stdlib.h>
#include<stdio.h>
#include<string.h>

void sort_array(char str[1000]){
    int len = strlen(str);
    int i,j;
    for(i=0;i<len-1;i++)
        for(j=i+1;j<len;j++)
            if(str[i]>str[j]){
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
}

int main(){
    char str[1000];
    scanf("%[^\n]s",str);

    sort_array(str);

    int i;
    int len = strlen(str);
    char curr = str[0];
    int counter = 1;
    for(i=1;i<len;i++)
        if(str[i] != curr || i == len-1){
            printf("%c %d\n",curr,counter);
            counter = 1;
            curr = str[i];
        }
        else counter++;

    return 0;
}
