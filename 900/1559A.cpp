#include <iostream>
using namespace std;

/*
Theory for this problem:
Bitwise AND - key properties:
    1. AND can only turn bits OFF, never ON. Once a bit becomes 0 in some position, it stays 0 forever
    So result is always <= both operands
    2. a & a = a 
    3. a & b = b & a,  (a & b) & c = a & (b & c)

As long as we can take any [l, r], then we can apply bitwise AND for any elements
For example: a1 a2 a3 a4 
Then take [1, 4]
a1 * a4, a2 * a3, a3 * a2, a4 * a2
Then take [1, 2]
a1 * a4 * a2 * a3, a2 * a3 * a1 * a4
So we need just apply bitwise AND to all operands
You cannot go lower than a[1] & a[2] & a[n] -> lowerbound

*/
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
        long long ans = v.front();
        for(long long i = 1; i < n; i++) {
            ans = ans & v[i];
        }
        cout << ans << '\n';
        


    }
}

