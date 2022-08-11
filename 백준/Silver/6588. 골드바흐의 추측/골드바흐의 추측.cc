#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int Max = 1e6 + 1;

    vector<bool> p(Max, true);
    p[1] = false;

    for(int i=2; i*i<Max; i++)
        for(int j=2; i*j<Max; j++) p[i*j] = false;

    vector<int> v;
    for(int i=2; i<Max; i++)
        if(p[i]) v.push_back(i);

    while(true) {
        int N; cin >> N;
        if(N == 0) break;

        for(int i=0; i<v.size() && v[i] < N; i++) {
            if(p[N - v[i]]) {
                cout << N  << " = " << v[i] << " + " << N - v[i] << "\n";
                break;
            }
        }
    }
}
