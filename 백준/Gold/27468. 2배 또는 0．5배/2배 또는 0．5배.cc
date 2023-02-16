#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    cout << "YES\n";

    int x = 0, cnt = 0;

    if(N % 2 == 1) {
        x++, N--;

        cout << x << " ";
    }

    while(true) {
        if(cnt % 4 == 0) x += 2;
        else if(cnt % 4 == 1) x--;
        else if(cnt % 4 == 2) x += 2;
        else if(cnt % 4 == 3) x++;

        cout << x << " ";
        cnt++;

        if(cnt == N) break;
    }
    cout << "\n";
}
