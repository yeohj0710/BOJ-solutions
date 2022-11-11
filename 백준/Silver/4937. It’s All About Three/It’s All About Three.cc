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
        if(N == -1) break;

        if(N == 1) {
            cout << N << " NO\n";
            continue;
        }

        bool check = true;

        for(int i=0; i<v.size() && v[i]<=N; i++)
            if(N % v[i] == 0 && v[i] % 10 != 3) check = false;

        cout << N << " ";

        if(check) cout << "YES\n";
        else cout << "NO\n";
    }
}
