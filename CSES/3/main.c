#include <stdio.h>
#include <math.h>

int main(){
    int max_len = 1;
    int cur_len = 1;
    char prev_c, curr_c;
    scanf("%c", &prev_c);
    do {
        curr_c = getchar();
            
        if (prev_c == curr_c){
            cur_len++;
        }
        else{
            cur_len = 1;
        }
        prev_c = curr_c;
        max_len = (max_len >=cur_len)?max_len:cur_len;
        (cur_len, max_len);
    } while (curr_c != '\n');
    printf("%d\n", max_len);
    return 0;
}