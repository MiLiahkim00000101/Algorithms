#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

long long MIN = 10000000000;

long long sum(vector<long long> &v){
    long long res = 0;
    for (long long i = 0; i < v.size(); i++){
        res += v[i];
    }
    return res;
}

void min_diff_2_groups(vector<long long> &weights, vector<long long> &gr1, vector<long long> &gr2){
    if (weights.empty()){
        long long diff = abs(sum(gr1) - sum(gr2));
        if (MIN > diff) MIN = diff;
    }
    else{
        long long w = weights.back();
        weights.pop_back();

        gr1.push_back(w);
        min_diff_2_groups(weights, gr1, gr2);
        gr1.pop_back();

        gr2.push_back(w);
        min_diff_2_groups(weights, gr1, gr2);
        gr2.pop_back();

        weights.push_back(w);

    }
}

int main(){
    int n;
    cin >> n;
    vector<long long> weights(n, 0);
    vector<long long> group1;
    vector<long long> group2;

    for (int i = 0; i < n; i++){
        long long val;
        cin >> val;
        weights[i] = val;
    } 

    min_diff_2_groups(weights, group1, group2);

    cout << MIN << "\n";
    return 0;

}