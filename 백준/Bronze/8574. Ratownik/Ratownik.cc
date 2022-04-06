#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int n, k, a, b;
    cin >> n >> k >> a >> b;

    int cnt = 0;
    while(n--) {
        int x, y; cin >> x >> y;
        if(sqrt((a-x)*(a-x) + (b-y)*(b-y)) > k) cnt++;
    }

    cout << cnt;
}
