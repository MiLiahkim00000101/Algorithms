#include <iostream>

long f(long n){
    long res = (n * n) * (n * n - 1);
    res -= 4 * 2;
    res -= 8 * 3;
    res -= 4 * 4;
    res -= (n - 4) * 4 * 4;
    res -= (n - 4) * 4 * 6;
    res -= (n - 4) * (n - 4) * 8;
    res /= 2;
    return res; 
}

int main(){
    long n;
    std::cin >> n;
    for (long i = 1; i <= n; i++){
        std::cout << f(i) << std::endl;
    }
    
    return 0;
}