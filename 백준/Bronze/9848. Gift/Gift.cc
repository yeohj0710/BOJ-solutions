#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int n, k; cin >> n >> k;
    int prev = 0;

    int cnt = 0;
    while(n--) {
        int value; cin >> value;
        if(prev - value >= k) cnt++;
        prev = value;
    }

    cout << cnt;
}
