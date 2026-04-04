#include<stdio.h>
#include<stdlib.h>

int main(){

    long n;
    scanf("%ld", &n);
    // long *arr = malloc(sizeof(long) * n);
    long prev, curr, min_steps = 0, delta;
    scanf("%ld", &prev);
    for (long i = 1; i < n; i++){
        scanf("%ld", &curr);
        delta = prev - curr; 
        if (curr < prev){
            min_steps += delta;
            prev = curr + delta;
        }
        else
            prev = curr;
    }
    printf("%ld", min_steps);
    
    return 0;
}