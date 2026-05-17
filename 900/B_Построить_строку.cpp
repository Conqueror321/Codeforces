#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, a, b;
        cin >> n >> a >> b;
        string podstroka = "";
        string alphabet = "qwertyuiopasdfghjklzxcvbnm";
        string res;
        for(int i = 0; i < b; i++) {
            podstroka += alphabet[i];
        }
        while(podstroka.length() < a) {
            podstroka += podstroka.front();
        }
        for(int i = 0; i < n; i++) {
            if(res.length() >= n) break;
            res += podstroka[i % a];
        }
        cout << res << '\n';

    }
}