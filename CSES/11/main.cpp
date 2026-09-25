#include <iostream>
#define ll long long

int main(){ 

    ll n, m, k;

    std::cin >> n;

    for (ll i = 0; i < n; i++){
        std::cin >> m >> k;
        ll tmp = std::min(m,k);
        m = std::max(m,k);
        k = tmp;

        if ((m <= 2 * k) && ((m + k) % 3 == 0))
            std::cout << "YES" << std::endl;
        else
            std::cout << "NO" << std::endl;

    }
    

    return 0;
}