#include <iostream>
#include <unordered_map>
#define ll long long
using namespace std;

int main() {
    char ch;
    cin >> ch;
   
    string s;
    cin >> s;
    unordered_map<char, pair<char, char>> mp = {
        {'q', {'/', 'w'}},
        {'w', {'q', 'e'}},
        {'e', {'w', 'r'}},
        {'r', {'e', 't'}},
        {'t', {'r', 'y'}},
        {'y', {'t', 'u'}},
        {'u', {'y', 'i'}},
        {'i', {'u', 'o'}},
        {'o', {'i', 'p'}},
        {'p', {'o', 'a'}},
        {'a', {'p', 's'}},
        {'s', {'a', 'd'}},
        {'d', {'s', 'f'}},
        {'f', {'d', 'g'}},
        {'g', {'f', 'h'}},
        {'h', {'g', 'j'}},
        {'j', {'h', 'k'}},
        {'k', {'j', 'l'}},
        {'l', {'k', ';'}},
        {';', {'l', 'z'}},
        {'z', {';', 'x'}},
        {'x', {'z', 'c'}},
        {'c', {'x', 'v'}},
        {'v', {'c', 'b'}},
        {'b', {'v', 'n'}},
        {'n', {'b', 'm'}},
        {'m', {'n', ','}},
        {',', {'m', '.'}},
        {'.', {',', '/'}},
        {'/', {'.', 'a'}},
    };
    string res = "";
    for(char c : s) {
        if(ch == 'R') res += mp[c].first;
        else res += mp[c].second;
    }
    cout << res << '\n';

}