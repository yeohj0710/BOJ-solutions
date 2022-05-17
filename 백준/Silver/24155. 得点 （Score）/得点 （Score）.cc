#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, pair<int, int>> &a, pair<int, pair<int, int>> &b) {
    return a.second.first < b.second.first;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<pair<int, pair<int, int>>> v;
    for(int i=0; i<N; i++) {
        int x; cin >> x;

        v.push_back({x, {i, 0}});
    }

    sort(v.begin(), v.end(), greater<pair<int, pair<int, int>>>());

    for(int i=1; i<N; i++) {
        if(v[i].first != v[i-1].first) v[i].second.second = i;
        else v[i].second.second = v[i-1].second.second;
    }

    sort(v.begin(), v.end(), cmp);

    for(int i=0; i<N; i++) cout << v[i].second.second + 1 << "\n";
}
