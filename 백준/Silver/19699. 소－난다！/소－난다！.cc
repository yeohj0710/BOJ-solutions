#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<bool> p;
vector<int> v, u, w;
int N, M;

void f(int idx, int cnt, int sum) {
    if(idx == N) {
        if(cnt == M && p[sum]) w.push_back(sum);
        return;
    }

    f(idx + 1, cnt, sum);
    f(idx + 1, cnt + 1, sum + u[idx]);
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int Max = 1e4 + 1;

    p.resize(Max, true);
    p[1] = false;

    for(int i=2; i*i<Max; i++)
        for(int j=2; i*j<Max; j++) p[i*j] = false;

    for(int i=2; i<Max; i++)
        if(p[i]) v.push_back(i);

    cin >> N >> M;

    u.resize(N);
    for(int i=0; i<N; i++) cin >> u[i];

    f(0, 0, 0);

    if(w.size() == 0) {
        cout << -1 << "\n";
        return 0;
    }

    sort(w.begin(), w.end());
    w.erase(unique(w.begin(), w.end()), w.end());

    for(int i=0; i<w.size(); i++) cout << w[i] << " ";
    cout << "\n";
}
