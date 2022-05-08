#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<pair<int, int>> v;
    vector<int> u;

    for(int i=0; i<N; i++) {
        int x, y, z; cin >> x >> y >> z;

        v.push_back({x, y});
        u.push_back(z);
    }

    int ans = 0;
    for(int i=1; i<=1000; i++) {
        int temp = 0;

        for(int j=0; j<N; j++)
            if(i >= v[j].first && i <= v[j].second) temp += u[j];

        ans = max(ans, temp);
    }

    cout << ans << "\n";
}
