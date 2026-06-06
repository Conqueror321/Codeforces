#include <iostream>
using namespace std;


int main() {
    int t;
    cin >> t;
    while(t--) {
        long long n;
        cin >> n;
        vector<long long> v(n);
        for(long long i = 0; i < n; i++) {
            cin >> v[i];
        }
        long long cnt = 0;
        while(true) {
            bool temp = false;
            for(long long i = n - 1; i >= 1; i--) {
                if(v[i] <= v[i - 1]){
                    if(v[i - 1] <= 0) break;
                    v[i - 1] = floor(v[i - 1] / 2.0);
                    cnt++;
                    temp = true;
                    break;
                }
            }
            if(!temp) break;
        }
        for(auto it : v) cout << it << " ";
        
    }
}
