#include <stdio.h>
#include <stdlib.h>

void printbitarr(char *arr, size_t n){
    for (int i = 0; i < n; i++){
        char c = arr[i];
        for (int j = 7; j >= 0; j--){
            char mask = 1 << j;
            printf("%d", (mask & c)?1:0);
        }
        printf(" ");
    }
    printf("\n");
}

int main(){
    long n;
    scanf("%ld", &n);
    int cba = sizeof(int);
    char *arr = malloc(sizeof(char) * (n / 8 + 1)); 
    if (arr == NULL){
        printf("Memory was not allocated");
        return 1;
    }
    for (int i = 0; i < n / 8 + 1; i++){
        arr[i] = 0;
    }
    // printbitarr(arr, (n / 8 + 1));
    // Write the bitarray with numbers
    for (int j = 0; j < n - 1; j++){
        long c;
        scanf("%ld", &c);
        arr[c / 8] = arr[c / 8] | (1 << (c % 8));
        // printf("%d ", arr[c / 8]);
    }
    // printbitarr(arr, (n / 8 + 1));


    for (long k = 1; k < n + 1; k++){
        
        char mask = 1 << (k % 8);

        // printf("%d ", mask & arr[k / 8]);
        // printf("%d\n", mask);
        if ((mask & arr[k / 8])){ 
            continue;
        }
        printf("%ld ", k);
        break;

        
    }
    free(arr);

    return 0;
}
