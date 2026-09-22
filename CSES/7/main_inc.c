#include <stdio.h>


int main(){

    long n;
    long res_prev = 0;
    scanf("%ld", &n);
    for (long i = 1; i <= n; i++){
        long res;
        switch (i)
        {
            case 1:
                res = 0;
                break;
            case 2:
                res = (i * i - 1) * i * i / 2;
                break;
            case 3:
                res = ((i * i - 1) + 8 * (i * i - 3)) / 2;
                break;
            case 4:
                res = (4 * (i * i - 3) + 8 * (i * i - 4) + 4 * (i * i - 5)) / 2;
                break;
            default:
                res = res_prev + (2 * (i - 4)) * (i * i - 5) + 4 * (i * i - 4) + 3 * (i * i - 3) - ((2 * i - 1) * (2 * i - 2) / 2 - 2);
                break;
        }
        printf("%ld", res);
        printf("\n");
        res_prev = res;
    }
    

    return 0;
}