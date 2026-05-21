#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        bool flag = false;
        for(int i = min(a, b); i <= max(a, b); i++) {
            if(i == c || i == d) {
                flag = true;
                break;
            }
        }
        if(min(c, d) != 1 && max(a, b) != 12 && max(c, d) < max(a, b) || flag == false) cout << "NO" << '\n';
        else cout << "YES" << '\n';
    }
}
/*
2 9 10 6
Нужно найти чтобы 10, либо 6 были между 2 и 9
1 4 3 5
max(1, 4) = 4
min(3, 5) = 3

10 12 11 1

*/