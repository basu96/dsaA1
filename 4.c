#include<stdio.h>
#include<string.h>

void reverse(char* start, int length){

    int traverse=0;
    for(traverse = 0;traverse < length/2;traverse++){
        char temp;
        temp = *(start + traverse);
        // printf("%c\n",temp);
        *(start + traverse) = *(start + length - traverse - 1);
        *(start + length - traverse - 1) = temp;
    }
}

void encode(char* start, int length){

    reverse(start, length);
    int count;
    for(count = 0;count<length;count++)
        *(start + count) = 'a' + (( *(start + count)+3 ) % 'a') % 26;
}

void decode(char* start, int length){

    reverse(start, length);
    int count;
    for(count = 0; count<length ; count++)
        if ((( *(start + count)-3 - 'a') % ('a') ) < 0) *(start + count) = (( *(start + count)-3 - 'a') % ('a') ) + 'z' + 1 ;
        else *(start + count) = (( *(start + count)-3 - 'a') % ('a') ) + 'a';
}


int main(){

    int encode_switch = 1;
    printf("encode[1]/decode[0] ?");
    scanf("%d ",&encode_switch);

    char str[1000],result[1000], *start, *end;
    scanf("%[^\n]%*c",str);
    start = str;
    int len = strlen(str),count=0;

    int length = 0;
    for(end = str ; count<=len ; end++,count++){
        if(*end == ' ' || *end == '\0'){
            if(encode_switch == 1) encode(start,length);
            else decode(start, length);
            start = end + 1;
            length = 0;
            if(*end == '\0') break;
        }
        else length++;
    }

    printf("%s\n",str);
    return 0;

}
