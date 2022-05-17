#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<pair<int, string>> v;
    for(int i=0; i<N; i++) {
        string a, b; cin >> a >> b;

        if(a[0] >= '0' && a[0] <= '9') v.push_back({stoi(a)/2, b});
        else v.push_back({stoi(b), a});
    }

    sort(v.begin(), v.end());

    for(int i=0; i<N; i++) cout << v[i].second << "\n";
}
