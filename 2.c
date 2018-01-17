#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main(){
    int c=0;
    int* count;
    // count = (int*)malloc(sizeof(int));
    count = &c;
    int  len,i;
    char short_str[100], long_str[100];

    scanf("%[^\n]%*c",short_str);
    int short_len = strlen(short_str);
    scanf("%[^\n]%*c",long_str);
    int long_len = strlen(long_str);

    for(i=0;i<long_len;i++)
        if(long_str[i] = short_str[0]){
            char* temp = &long_str[i];
            temp++;
            int i;
            for(i=1;i<short_len;i++)
                if(*temp)

        }

    printf("%d",*count);

    return 0;

}
