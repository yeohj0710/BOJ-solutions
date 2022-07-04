#include <bits/stdc++.h>
#define int long long
using namespace std;

int N, M;
vector<int> v, u;
vector<bool> vis;
vector<vector<int>> w;

void f(int cnt) {
    if(u.size() == M) {
        w.push_back(u);
        return;
    }

    for(int i=0; i<N; i++) {
        if(!vis[i]) {
            u.push_back(v[i]);
            vis[i] = true;
            f(cnt+1);
            u.pop_back();
            vis[i] = false;
        }
    }
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cin >> N >> M;

    v.resize(N);
    for(int i=0; i<N; i++) cin >> v[i];

    sort(v.begin(), v.end());

    vis.resize(N);
    f(1);

    sort(w.begin(), w.end());
    w.erase(unique(w.begin(), w.end()), w.end());

    for(int i=0; i<w.size(); i++) {
        for(int j=0; j<w[i].size(); j++) cout << w[i][j] << " ";
        cout << "\n";
    }
}
