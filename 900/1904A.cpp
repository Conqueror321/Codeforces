#include <iostream>
#include <set>
using namespace std;

/*
2 1 
0 0
3 3

*/
int main() {
    int t;
    cin >> t;
    while(t--) {
        int a, b;
        cin >> a >> b;
        int xk, yk;
        cin >> xk >> yk;
        int xq, yq;
        cin >> xq >> yq;
        set<pair<int, int>> pairs;
        pairs.insert(make_pair(xk + a, yk + b));
        pairs.insert(make_pair(xk + a, yk - b));
        pairs.insert(make_pair(xk - a, yk + b));
        pairs.insert(make_pair(xk - a, yk - b));
        pairs.insert(make_pair(xk + b, yk + a));
        pairs.insert(make_pair(xk + b, yk - a));
        pairs.insert(make_pair(xk - b, yk + a));
        pairs.insert(make_pair(xk - b, yk - a));

        int cnt = 0;
        cnt += pairs.count(make_pair(xq + a, yq + b));
    cnt += pairs.count(make_pair(xq + a, yq - b));
    cnt += pairs.count(make_pair(xq - a, yq + b));
    cnt += pairs.count(make_pair(xq - a, yq - b));
    cnt += pairs.count(make_pair(xq + b, yq + a));
    cnt += pairs.count(make_pair(xq + b, yq - a));
    cnt += pairs.count(make_pair(xq - b, yq + a));
    cnt += pairs.count(make_pair(xq - b, yq - a));
    if(a == b) cnt /= 2;
    cout << cnt << '\n';
    }
}