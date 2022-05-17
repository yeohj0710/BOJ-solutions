#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<pair<string, string>> v;
    for(int i=0; i<N; i++) {
        string a, b; cin >> a >> b;
        v.push_back({b, a});
    }

    sort(v.begin(), v.end());

    for(int i=0; i<N; i++) cout << v[i].second << " " << v[i].first << "\n";
}
