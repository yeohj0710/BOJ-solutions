#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int Max = 1e6;

    vector<bool> p(Max, true);
    p[1] = false;

    for(int i=2; i*i<Max; i++)
        for(int j=2; i*j<Max; j++) p[i*j] = false;

    vector<int> v;
    for(int i=2; i<Max; i++)
        if(p[i]) v.push_back(i);

    while(true) {
        int N, M; cin >> N >> M;
        if(N == -1 && M == -1) break;

        vector<int> u;
        int cnt = 0;

        for(int i=0; i<v.size(); i++) {
            if(v[i] > N) {
                u.push_back(v[i]);
                cnt++;

                if(cnt == 100) break;
            }
        }

        vector<int> w;

        for(int i=0; i<u.size(); i++)
            for(int j=i; j<u.size(); j++) w.push_back(u[i] + u[j]);

        sort(w.begin(), w.end());

        cout << w[M-1] << "\n";
    }
}
