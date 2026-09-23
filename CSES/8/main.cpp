#include <iostream>


int main(){
    long n;
    std::cin >> n;
    if (n * (n + 1) / 2 % 2 == 0){
        std::cout << "YES" << std::endl;
        if (n % 2 == 0){
            std::cout << n / 2 << std::endl;
            for (long i = 1; i <= n / 4; ++i){
                std::cout << i << " " << n - (i - 1) << " ";
            }
            std::cout << std::endl;
            std::cout << n / 2 << std::endl;
            for (long i = n / 4 + 1; i <= n / 2; ++i){
                std::cout << i << " " << n -  (i - 1) << " "; 
            } 
        }
        else{
            std::cout << n / 2 << std::endl;
            for (long i = 1; i <= n / 4; ++i){
                std::cout << i << " " << n - i  << " ";
            }
            std::cout << n << std::endl;
            std::cout << n / 2 + 1 << std::endl;
            for (long i = n / 4 + 1; i <= n / 2; ++i){
                std::cout << i << " " << n - i << " "; 
            } 
        }
    }
    else{
        std::cout << "NO" << std::endl;
    }
    
    return 0;
}