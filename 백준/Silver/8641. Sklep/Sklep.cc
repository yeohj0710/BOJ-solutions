#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v;
    unordered_map<int, int> m;

    while(N--) {
        int a, b; cin >> a >> b;

        if(m[a] == 0) v.push_back(a);

        m[a] += b;
    }

    cout << v.size() << "\n";

    for(int i=0; i<v.size(); i++)
        cout << v[i] << " " << m[v[i]] << "\n";
}
