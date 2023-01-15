#include <bits/stdc++.h>
#define int long long
using namespace std;

bool cmpf(pair<int, int> &a, pair<int, int> &b) {
    return a.first > b.first;
}

bool cmps(pair<int, int> &a, pair<int, int> &b) {
    return a.second < b.second;
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    vector<pair<int ,int>> v(N);
    vector<int> u(1e6 + 1);
    vector<bool> w(1e6 + 1);

    for(int i=0; i<N; i++) {
        cin >> v[i].first;

        v[i].second = i;
    }

    sort(v.begin(), v.end(), cmpf);

    for(int i=0; i<N; i++) {
        for(int j=v[i].first; j<=1e6; j+=v[i].first)
            if(w[j]) u[v[i].first]++, u[j]--;

        w[v[i].first] = true;
    }

    sort(v.begin(), v.end(), cmps);

    for(int i=0; i<N; i++) cout << u[v[i].first] << " ";
    cout << "\n";
}
