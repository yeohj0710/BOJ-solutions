#include <bits/stdc++.h>
#define int long long
using namespace std;

int N, ans = INT_MAX;
vector<vector<int>> v;
vector<pair<int, int>> u;

void g() {
    int sum = 0;

    for(int i=0; i<u.size(); i++) {
        sum += v[u[i].first][u[i].second];
        sum += v[u[i].first + 1][u[i].second];
        sum += v[u[i].first - 1][u[i].second];
        sum += v[u[i].first][u[i].second + 1];
        sum += v[u[i].first][u[i].second - 1];
    }

    ans = min(ans, sum);
}

void f(int cnt) {
    if(cnt == 3) {
        g();
        return;
    }

    for(int i=1; i<N-1; i++)
        for(int j=1; j<N-1; j++) {
            bool check = true;
            for(int k=0; k<u.size(); k++) {
                if(i >= u[k].first - 1 && i <= u[k].first + 1
                   && j >= u[k].second - 1 && j <= u[k].second + 1) check = false;
                if(i == u[k].first - 2 && j == u[k].second) check = false;
                if(i == u[k].first + 2 && j == u[k].second) check = false;
                if(i == u[k].first && j == u[k].second - 2) check = false;
                if(i == u[k].first && j == u[k].second + 2) check = false;
            }
            if(!check) continue;

            u.push_back({i, j});
            f(cnt + 1);
            u.pop_back();
        }
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cin >> N;

    v.resize(N, vector<int>(N));
    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++) cin >> v[i][j];

    f(0);

    cout << ans << "\n";
}
