#include<stdio.h>
#include<string.h>

int main(){
    char sen[100], word[100];
    strcpy(word,"goodbye");

    scanf("%s",sen);

    int word_len = strlen(word);
    int sen_len = strlen(sen);
    int word_ptr=0,i;
    int result = 0;

    for(i=0;i<sen_len;i++){
        if(sen[i] == word[word_ptr]){
            word_ptr++;
        }
    }

    if(word_ptr == word_len) printf("Yes\n");
    else printf("No\n");

    return 0;
}
