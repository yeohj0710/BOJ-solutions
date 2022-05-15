#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(N+1);
    for(int i=1; i<=N; i++) cin >> v[i];

    int Q; cin >> Q;

    while(Q--) {
        int x; cin >> x;

        bool check = true;
        for(int i=1; i<=N; i++)
            if(v[x] + 1 == v[i]) check = false;

        if(!check) continue;

        if(v[x] + 1 == 2020) continue;

        v[x]++;
    }

    for(int i=1; i<=N; i++) cout << v[i] << "\n";
}
