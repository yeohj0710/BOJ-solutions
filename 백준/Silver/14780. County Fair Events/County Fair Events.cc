#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> &a, pair<int, int> &b) {
    if(a.second != b.second) return a.second < b.second;
    else return a.first < b.first;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<pair<int, int>> v(N); // <start time, end time>
    for(int i=0; i<N; i++) {
        int x, y; cin >> x >> y;
        v[i].first = x, v[i].second = x + y;
    }

    sort(v.begin(), v.end(), cmp);

    int ans = 0, time = 0;
    for(int i=0; i<N; i++)
        if(v[i].first >= time) {
            ans++;
            time = v[i].second;
        }

    cout << ans << "\n";
}
