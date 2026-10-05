#include <iostream>
#include <cmath>

using namespace std;

void hanoi(int n, int i, int k, int tmp){

    if (n == 1){
        cout << i << " " << k << "\n";
    }
    else{
        hanoi(n - 1, i, tmp, k);
        cout << i << " " << k << "\n";
        hanoi(n - 1, tmp, k, i);
    }

}

int main(){
    int n;
    cin >> n;
    cout << (int) pow(2, n) - 1 << "\n";
    hanoi(n, 1, 3, 2);
    return 0;

}