#include <bits/stdc++.h>
using namespace std;

int N, ans;
vector<int> v;
bool check;

void f(int idx, int a, int b, int x, int y) {
    if(idx == N) {
        if(a == b) {
            check = true;
            if(x != 0 && y != 0) ans = max(ans, max(x, y));
        }
        return;
    }

    f(idx + 1, a ^ v[idx], b, x + v[idx], y);
    f(idx + 1, a, b ^ v[idx], x, y + v[idx]);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        cin >> N;

        v.resize(N);
        for(int i=0; i<N; i++) cin >> v[i];

        check = false;
        ans = 0;

        f(0, 0, 0, 0, 0);

        cout << "Case #" << t << ": ";
        if(check) cout << ans << "\n";
        else cout << "NO\n";
    }
}
