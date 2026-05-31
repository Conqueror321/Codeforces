#include <iostream>
#define ll long long
using namespace std;

/*
a - max. time ->  min(c + xi, a) 
b - initial time
n - no of instruments (x1, x2, x3, ..., xn)

a = 5  b = 3  n = 3
1 1 7 

1s: b = 2 
2s: b = 1
3s: first instrument  b = 2 -> b = 1 
4s: second instument  b = 2 -> b = 1
5s: b = min(1 + 7, 5) = 5 -> b = 4
6s: b = 3
7s: b = 2
8s: b = 1
9s: b = 0 BOOM

we need a formula, because brute force cause a TLE:
    1 1 7 -> 1 1 5  (because a = 5)
    sum(1, 1, 5) = 7
    7 + b - 1 = 9

7 1 5
1 2 5 6 8
sum(1, 2, 5, 6, 7) = 21
21 + b - 1 = 21 + 1 - 1 

a = 5 b = 3 n = 1
100
1s: b = 2
2s: b = 1
3s: b = 5 -> b = 4
4s: b = 3
5s: b = 2
6s: b = 1
7s: b = 0




*/
int main() {
    int t;
    cin >> t;
    while(t--) {
        ll a, b, n; 
        cin >> a >> b >> n; 
        ll total = 0;
        for(ll i = 0; i < n; i++){
            ll val;
            cin >> val;
            if(val >= a) total--;
            total += min(val, a);
        }
     
        total+=b;
        
        cout << total << '\n';

    

    }
}