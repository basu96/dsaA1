#include<stdio.h>

long long ans(long long n){
    long long count = 0;
    while(n>0){
        if(n%2 == 1) count++;
        n/=2;
    }
    return count;
}


int main(){
    long long n;
    scanf("%lld",&n);
    printf("%lld",ans(n));
    return 0;
}
