#include <iostream>
using namespace std;

int main() {
    int k;
    cin >> k;
    vector<int> grow_per_day(12);
    for(int i = 0; i < 12; i++) {
        cin >> grow_per_day[i];
    }
    sort(grow_per_day.begin(), grow_per_day.end(), greater<int>());

    int total = 0;
    int cnt = 0;
    while(total < k and cnt < 12) {
        total += grow_per_day[cnt];
        cnt++;
    }
    if(cnt == 12 and total < k) cout << -1 << '\n';
    else cout << cnt << '\n';
    return 0;
}