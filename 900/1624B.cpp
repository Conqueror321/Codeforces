#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int a, b, c;
        cin >> a >> b >> c;
        int na = 2 * b -c;
        int ba = -1;
        if((a + c) % 2 == 0) {
            ba = (a + c) / 2;
        }
        int ca = 2 * b - a;
        if((na > 0 && na % a == 0) || (ba > 0 && ba % b == 0) || (ca > 0 && ca % c == 0)) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
}