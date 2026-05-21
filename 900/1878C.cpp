#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long n, k, x;
        cin >> n >> k >> x;
        long long mn = k * (1 + k) / 2;
        if(mn > x){
             cout << "NO" << '\n';
             continue;
        }
        long long mx = k * (2 * n - k + 1) / 2;// Sk = k *(2 *n - k + 1 ) / 2
        if(mx < x) cout << "NO" << '\n';
        else {
            cout << "YES" << '\n';
        }
    }
}
