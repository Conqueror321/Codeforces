#include <iostream>
using namespace std;


int main() {
    int t;
    cin >> t;
    while(t--) {
        long long n, a, b;
        cin >> n >> a >> b;
        long long total = 0;
        if(b <= a) { // correct 100%
            long long cnt = (n + 2) / 3;
            total = b * cnt;
        } else if((a * 3) <= b) { // correct 100%
            total = a * n;
        }
        else if(n <= 3) { // correct 100%
            total = min(n * a, b);
        } else { 
            long long ostatok = n % 3;
            total = (n / 3) * b;
            total += min(b, ostatok * a);
        }
        cout << total << '\n';

    }
}
/*
4, 10, 50
ostatok = 1
total = 1 * 50 = 50

 
*/