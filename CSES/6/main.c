#include <stdio.h>
#include <math.h>

unsigned long power(unsigned long x, unsigned long exp){
    unsigned long res = 1;
    for (unsigned long i = 0; i < exp; i++){
        res *= x;
    }
    return res;
}

int main(){
    int n;
    scanf("%d", &n);
    
    unsigned long x, y; 

    for (int i = 0; i < n; i++){
        scanf("%lu %lu", &y, &x);
        unsigned long answer;
        if (x == y){
            answer = power(x, 2) - x + 1;
        }
        if(y < x){
            if (x%2){
                answer = power(x, 2) - (y - 1);
            }
            else{
                answer = power(x-1, 2) + y;
            }
        }
        else{
            if (y%2){
                answer = power(y-1, 2) + x;
            }
            else{
                answer = power(y, 2) - (x - 1);
            }
        }
        printf("%lu\n", answer);

    }
    return 0;
}