#include <stdio.h>
#include <stdlib.h>

void printbitarr(char *arr, size_t n){
    for (int i = 0; i < n; i++){
        unsigned char c = (unsigned char)arr[i];
        for (int j = 0; j < sizeof(char) * 8; j++){
            char mask = 1 << j;
            printf("%d", (mask & c)?1:0);
        }
        printf(" ");
    }
}

int main(){
    size_t N = 2 / 8 + 1;
    char *arr = malloc(sizeof(char) * N);
    for(int i = 0; i < N; i++){
        arr[i] = 0;
    }
    printbitarr(arr, N);
    return 0;
}