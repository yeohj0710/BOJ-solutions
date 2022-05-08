#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<string, int> &a, pair<string, int> &b) {
    if(a.second != b.second) return a.second > b.second;
    else return a.first < b.first;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<pair<string, int>> v;

    for(int i=0; i<N; i++) {
        string str; int x; cin >> str >> x;

        v.push_back({str, x});
    }

    sort(v.begin(), v.end(), cmp);

    cout << v[0].first << "\n";
}
