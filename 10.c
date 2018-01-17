#include<stdio.h>
#include<string.h>

int int_to_int_arr(int n, int num[500]){
    int counter;
    for(counter=0;n>0;n/=10) num[counter++] = n%10;
    return counter;
}

void print_num_arr(int num[500], int len){
    while(len--) printf("%d",num[len]);
    printf("\n\n");
}

int multiply_num_arrs(int num1[500], int num1_len, int num2[500], int num2_len, int result[500]){
    /*
        num1 and num2 are integer arrays in which integers
        are stored digit wise in the reverse order.
        For example : if two numbers 241 and 112 are to be multiplied,
            num1 = [1,4,2] and num2 = [2,1,1]
            num1_len and num2_len are the lengths of the corresponding integers
    */

    int i,j;
    for(i=0;i<500;i++) result[i]=0;

    for(i=0;i<num1_len;i++)
        for(j=0;j<num2_len;j++)
            result[i+j] += num1[i]*num2[j];

    int carry = 0, index = 0;

    do{
        carry += result[index];
        result[index++] = carry % 10;
        carry/=10;
    }while(carry>0 || index < num1_len + num2_len - 1);

    return index;

}

int copy_arr(int target[500], int source[500], int length){
    int i;
    for(i=0;i<length;i++) target[i] = source[i];
    return length;
}


int main(){

    int n,i;
    int num1[500],num2[500],result[500];
    int num1_len = 0, num2_len = 0, res_length;

    scanf("%d",&n);

    if(n == 0){printf("1\n");return 0;}
    else if(n<0){printf("factorial of negative ints not defined"); return 0;}

    num2_len = int_to_int_arr(1,num2);

    for(i=1;i<=n;i++){
        num1_len = int_to_int_arr(i,num1);
        res_length = multiply_num_arrs(num1,num1_len,num2,num2_len,result);
        num2_len = copy_arr(num2,result,res_length);
    }

    print_num_arr(result,res_length);

    return 0;
}
