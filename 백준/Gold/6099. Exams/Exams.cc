#include <bits/stdc++.h>
#define int long long
using namespace std;

int N, M;
vector<int> v, u, w;

void f(int idx, int sum) {
    if(idx == N/2) {
        u.push_back(sum);
        return;
    }

    f(idx + 1, sum);
    f(idx + 1, sum + v[idx]);
}

void g(int idx, int sum) {
    if(idx == N) {
        w.push_back(sum);
        return;
    }

    g(idx + 1, sum);
    g(idx + 1, sum + v[idx]);
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cin >> N >> M;

    v.resize(N);
    for(int i=0; i<N; i++) cin >> v[i];

    f(0, 0);
    g(N/2, 0);

    sort(u.begin(), u.end());
    sort(w.begin(), w.end());

    int ans = 0;

    for(int i=0; i<u.size(); i++)
        ans += w.end() - lower_bound(w.begin(), w.end(), M - u[i]);

    cout << ans << "\n";
}
