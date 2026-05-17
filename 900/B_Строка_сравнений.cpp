#include <iostream>
using namespace std;


int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int cnt = 0;
        int mx = 0;
        for(int i = 0; i < s.size() - 1; i++){
            if(s[i] == s[i + 1]) {
                cnt++;
            } else {
                mx = max(mx, cnt + 1);
                cnt = 0;
            }
        }
        mx = max(mx, cnt + 1);
        cout << mx + 1 << '\n';
    }
}