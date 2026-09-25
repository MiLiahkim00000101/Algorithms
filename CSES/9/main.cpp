#include <iostream>


int main(){
    long n, res = 1;
    std::cin >> n;
    for (long i = 0; i < n; ++i){
        res *= 2;
        res %= 1000000000 + 7;
    }
    std::cout << res << std::endl;
    
    return 0;
}