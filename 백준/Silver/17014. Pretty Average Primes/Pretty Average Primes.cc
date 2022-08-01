#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int Max = 2e6 + 1;

    vector<bool> p(Max, true);
    p[1] = false;

    for(int i=2; i*i<Max; i++)
        for(int j=2; i*j<Max; j++) p[i*j] = false;

    vector<int> v;
    for(int i=2; i<Max; i++)
        if(p[i]) v.push_back(i);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        for(int i=0; i<v.size() && v[i] <= N; i++) {
            if(p[N*2 - v[i]]) {
                cout << v[i] << " " << N*2 - v[i] << "\n";
                break;
            }
        }
    }
}
