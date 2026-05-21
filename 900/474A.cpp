#include <iostream>
using namespace std;

int main() {
    char ch;
    cin >> ch;
    string s;
    cin >> s;
    string keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";
    string res = "";
    for(char c : s) {
        int idx = keyboard.find(c);
        if(ch == 'R') res += keyboard[idx - 1];
        else res += keyboard[idx + 1];
    }
    cout << res << '\n';

}