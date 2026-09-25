#include <iostream>
#define ll long long


int main(){ 
    ll n, res = 0;

    std::cin >> n;

    while(n > 0){
        res += n / 5;
        n /= 5;
    }
    
    std::cout << res << std::endl;

    return 0;
}