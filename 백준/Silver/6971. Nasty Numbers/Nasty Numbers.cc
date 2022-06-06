#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        vector<pair<int, int>> v;

        for(int i=1; i*i<=N; i++)
            if(N % i == 0) v.push_back({i, N/i});

        bool check = false;
        for(int i=0; i<v.size(); i++)
            for(int j=0; j<v.size(); j++) {
                if(i == j) continue;

                if(v[i].second - v[i].first == v[j].first + v[j].second) check = true;
            }

        if(check) cout << N << " is nasty\n";
        else cout << N << " is not nasty\n";
    }
}
