#include <bits/stdc++.h>
#define int long long
using namespace std;

int N, ans = 0;
unordered_map<int, bool> m;
int val[] = {1, 5, 10, 50};

void f(int sum, int idx, int cur) {
    if(idx == N) {
        if(!m[sum]) ans++;

        m[sum] = true;

        return;
    }

    for(int i=cur; i<4; i++)
        f(sum + val[i], idx + 1, i);
}

signed main() {
    ios_base::sync_with_stdio(0), cin.tie(0);

    cin >> N;

    f(0, 0, 0);

    cout << ans << "\n";
}
