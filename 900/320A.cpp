#include <iostream>
#include <set>
using namespace std;

int main() {
    string s;
    cin >> s;
    set<int> st;
    int cnt_4s = 0;
    int mx_4s = 0;
    bool flag = false;
    if(s[0] == '4') flag = true;

    for(char ch : s) {
        if(ch == '4') {
            cnt_4s++;
        } else {

            mx_4s = max(mx_4s, cnt_4s);
            cnt_4s = 0;
        }
        if(ch != '1' && ch != '4'){
            flag = true;
            break;
        }
    }
    mx_4s = max(mx_4s, cnt_4s);
    cout << (flag || mx_4s >= 3 ? "NO" : "YES") << '\n';
    
}