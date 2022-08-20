#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v, u;
    map<pair<int, int>, int> m;

    while(N--) {
        int a, b, c; cin >> a >> b >> c;

        v.push_back(a);
        u.push_back(b);

        m[{a, b}] += c;
    }

    sort(v.begin(), v.end());
    sort(u.begin(), u.end());

    v.erase(unique(v.begin(), v.end()), v.end());
    u.erase(unique(u.begin(), u.end()), u.end());

    cout << -1 << " ";

    for(int i=0; i<v.size(); i++) cout << v[i] << " ";
    cout << "\n";

    for(int i=0; i<u.size(); i++) {
        cout << u[i] << " ";

        for(int j=0; j<v.size(); j++) cout << m[{v[j], u[i]}] << " ";
        cout <<"\n";
    }
}
