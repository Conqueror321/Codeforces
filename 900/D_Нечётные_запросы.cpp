#include <iostream>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        ll n, q;
        cin >> n >> q;
        vector<ll> num(n);
        ll total = 0;

        for(ll i = 0; i < n; i++) {
            cin >> num[i];
            total += num[i];
        }
        vector<ll> pre(n + 1);
        pre[0] = 0;
        for(ll i = 1; i < n; i++) {
            pre[i] = num[i - 1] + pre[i - 1];
        }

        while(q--){
            ll l, r, k;
            cin >> l >> r >> k;
            ll temp = (r - l + 1) * k;
            if((total - pre[r] - pre[l - 1] + temp) % 2) cout << "YES" << '\n';
            else cout << "NO" << '\n';
            
        }
        
        
    }
}