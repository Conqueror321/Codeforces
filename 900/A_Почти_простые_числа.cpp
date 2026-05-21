#include <iostream>
#include <vector>
using namespace std;

const int N = 1e7;
vector<int> sphere(N + 1, 1);


int main() {
    int n;
    cin >> n;
    sphere[0] = 0;
    sphere[1] = 0;
    for(int i = 2; i * i <= N; i++) {
        if(sphere[i]) {
            for(int j = i * i; j <= N; j+=i) {
                sphere[j] = 0;
            }
        }
    }
    int cnt = 0;
    for(int i = 1; i <= n; i++) {
        int localCnt = 0;
        for(int j = 2; j <= i; j++) {
            if(sphere[j] && i % j == 0) localCnt++;
        }
        if(localCnt == 2) cnt++;
    }
    cout << cnt << '\n';
}