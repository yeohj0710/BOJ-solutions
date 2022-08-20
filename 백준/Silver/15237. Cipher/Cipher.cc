#include <bits/stdc++.h>
#define int long long
using namespace std;

map<int, int> m, idx;

bool cmp(int a, int b) {
    if(m[a] != m[b]) return m[a] > m[b];
    else return idx[a] < idx[b];
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<int> v;

    for(int i=0; i<N; i++) {
        int x; cin >> x;

        if(m[x] == 0) {
            v.push_back(x);

            idx[x] = i;
        }

        m[x]++;
    }

    sort(v.begin(), v.end(), cmp);

    for(int i=0; i<v.size(); i++)
        for(int j=0; j<m[v[i]]; j++) cout << v[i] << " ";

    cout << "\n";
}
