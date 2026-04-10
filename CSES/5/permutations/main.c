#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

void search(int n, int idx, int *perm, int8_t *chosen){
    if (idx == n){
        for (int i = 0; i < n; i++){
            printf("%d ", perm[i]);
        }
        printf("\n");
    }
    else{
        for (int i = 1; i <= n; i++){
            if (chosen[i]) continue;
            chosen[i] = 1;
            perm[idx] = i;
            search(n, idx+1, perm, chosen);
            chosen[i] = 0;
        }
    }

}

void init_arr(int8_t *arr, int n){
    for (int i = 0; i < n; i++){
        arr[i] = 0;
    }
}

int main(){

    int n = 3;

    int8_t *chosen = malloc(sizeof(int8_t) * (n + 1));
    int *perm = malloc(sizeof(int) * n);

    init_arr(chosen, 1+n);

    search(n, 0, perm, chosen);

    free(chosen);
    free(perm);

    return 0;
}