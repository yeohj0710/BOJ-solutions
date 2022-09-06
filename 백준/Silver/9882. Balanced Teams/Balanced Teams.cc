#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<int> v(12);
vector<vector<int>> u(4);
int ans = INT_MAX;

void f(int idx) {
    if(idx == 12) {
        vector<int> w(4);

        for(int i=0; i<4; i++)
            for(int j=0; j<u[i].size(); j++) w[i] += u[i][j];

        sort(w.begin(), w.end());

        ans = min(ans, w.back() - w.front());

        return;
    }

    for(int i=0; i<4; i++) {
        if(u[i].size() < 3) {
            u[i].push_back(v[idx]);

            f(idx + 1);

            u[i].pop_back();
        }
    }
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    for(int i=0; i<12; i++) cin >> v[i];

    f(0);

    cout << ans << "\n";
}
