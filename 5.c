#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

long long powe(long long base, long long power, long long m){
    if(power == 1) return base % m;
    long long final = 1;
    final = (base % m ) * ( powe(base, power - 1, m) ) % m;
    return final;
}


int main() {

    long long a = 2, b, m = 10000000000;
    scanf("%lld",&b);
    printf("%lld\n",powe(a,b,m));
    return 0;
}
