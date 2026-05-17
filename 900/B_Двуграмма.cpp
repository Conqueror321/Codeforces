#include <iostream>
#include <unordered_map>
using namespace std;


int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    unordered_map<string, int> mp;
    for(int i = 0; i < n - 1; i++) {
        string r = "";
        r += s[i];
        r += s[i + 1];
        mp[r] += 1;
    }
    int mx = 0;
    for(auto it : mp) {
        mx = max(mx, it.second);
     }
     for(auto it : mp) {
        if(it.second == mx) {
            cout << it.first << '\n';
            break;
        }
     }
}