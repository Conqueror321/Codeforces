#include <iostream>
using namespace std;

/*
a, b, c, d are different


*/
int main() {
    int t;
    cin >> t;
    while(t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if(b < a) b+=12;
        if(c < a) c+=12;
        if(d < a) d+=12;
        if((c < b) ^ (d < b)) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
}