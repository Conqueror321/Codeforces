#include <iostream>
#include <cmath>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        for(ll i = 2; i <= 30; i++) {
            ll s = pow(2, i);
            if(n % (s - 1) == 0) {
                cout << n / (s - 1) << '\n';
                break;
            }
        }
    }
}