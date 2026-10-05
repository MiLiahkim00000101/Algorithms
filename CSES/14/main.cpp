#include <iostream>
#include <cmath>

// i - source of the last disk
// k - destination of the last disk
void hanoi(int n, int i, int k){
    if (n == 1){
        std::cout << i << " " << k << std::endl;
    }
    else{
        int tmp = 6 - i - k;
        hanoi(n - 1, i, tmp);
        std::cout << i << " " << k << std::endl;
        hanoi(n - 1, tmp, k);
    }
}

int main(){ 
    int n;
    std::cin >> n;
    std::cout << (int) pow(2, n) - 1 << "\n";
    hanoi(n, 1, 3);

    return 0;
}