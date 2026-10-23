#include <iostream>
#include <vector>
#include <cmath>

typedef long long ll;
using namespace std;


int main(){
    ll n;
    cin >> n;
    vector<ll> p(n);

    for (ll i = 0; i < n; i++) cin >> p[i];

    ll min_diff = 1000000000;

    for (int b = 0; b < (1 << n); b++){
        ll sum1 = 0, sum2 = 0;
        for (ll i = 0; i < n; i++){
            if (b & (1 << i))
                sum1 += p[i];
            else
                sum2 += p[i];
        }
        min_diff = min(min_diff, abs(sum1 - sum2));
    }

    cout << min_diff << "\n";

    return 0;
    
}