#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<double, double> &a, pair<double, double> &b) {
    return a.first/a.second < b.first/b.second;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<pair<double, double>> v;
    for(int i=0; i<N; i++) {
        double x, y; cin >> x >> y;
        v.push_back({x, y});
    }

    sort(v.begin(), v.end());

    for(int i=0; i<N; i++) cout << v[i].first << " " << v[i].second << "\n";
}
