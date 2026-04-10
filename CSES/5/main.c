#include <stdio.h>

int main(){

    int n = 0;
    scanf("%d", &n);
    if (n < 4 && n != 1){
        printf("NO SOLUTION\n");
    }
    else{
        long i = 2;
        while(i < n + 1){
            printf("%ld ", i);
            i += 2;
        }
        i = 1;
        while(i < n + 1){
            printf("%ld ", i);
            i += 2;
        }
    }
    

    return 0;
}