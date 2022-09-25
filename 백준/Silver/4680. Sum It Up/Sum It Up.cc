#include <bits/stdc++.h>
#define int long long
using namespace std;

int N, M;
vector<int> v;
vector<vector<int>> w;

void f(int idx, vector<int> u, int sum) {
    if(idx == v.size()) {
        if(sum == M) w.push_back(u);

        return;
    }

    f(idx + 1, u, sum);

    u.push_back(v[idx]);

    f(idx + 1, u, sum + v[idx]);
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        cin >> M >> N;
        if(N == 0 && M == 0) break;

        v.clear();
        v.resize(N);

        for(int i=0; i<N; i++) cin >> v[i];

        vector<int> u;
        w.clear();

        f(0, u, 0);

        sort(w.begin(), w.end());
        w.erase(unique(w.begin(), w.end()), w.end());

        sort(w.begin(), w.end(), greater<vector<int>>());

        cout << "Sums of " << M << ":\n";

        if(w.size() == 0) {
            cout << "NONE\n";
            continue;
        }

        for(int i=0; i<w.size(); i++) {
            for(int j=0; j<w[i].size(); j++) {
                cout << w[i][j];

                if(j != w[i].size()-1) cout << "+";
            }
            cout << "\n";
        }
    }
}
