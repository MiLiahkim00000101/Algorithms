#include <stdio.h>

void collatz(long n){
    printf("%ld ", n);
    if (n == 1){
        return;
    }
    else{
        if (n % 2 == 0){
            collatz(n / 2);
        }
        else{
            collatz(n * 3 + 1);
        }
    }
}

int main(){
    long n;
    scanf("%ld", &n);
    collatz(n);
    return 0;
}
