#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt_0s = 0;
    int cnt_1s = 0;
    for(char ch : s) {
        if(ch == '0') cnt_0s++;
        else cnt_1s++;
    }
    cout << n - min(cnt_1s, cnt_0s) * 2 << '\n';
}