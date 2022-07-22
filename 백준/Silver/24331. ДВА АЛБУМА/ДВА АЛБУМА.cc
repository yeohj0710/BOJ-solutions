#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    map<int, bool> m;

    while(N--) {
        int x; cin >> x;

        m[x] = true;
    }

    vector<int> v;

    while(M--) {
        int x; cin >> x;

        if(m[x]) v.push_back(x);
    }

    sort(v.begin(), v.end());

    cout << v.size() << "\n";

    for(int i=0; i<v.size(); i++) cout << v[i] << " ";
    cout << "\n";
}
