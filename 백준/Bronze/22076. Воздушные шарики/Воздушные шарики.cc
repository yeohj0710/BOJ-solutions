#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<int> v;
    map<int, int> m;

    while(N--) {
        int x; cin >> x;

        if(m[x] == 0) v.push_back(x);

        m[x]++;
    }

    int cnt = 0;
    for(int i=0; ; i++) {
        if(m[v[i%v.size()]]) {
            cout << v[i%v.size()] << " ";
            m[v[i%v.size()]]--;
            cnt++;
        }
        if(cnt == M) break;
    }

    cout << "\n";
}
