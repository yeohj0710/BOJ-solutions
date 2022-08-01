#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int Max = 1e7;

    vector<bool> p(Max, true);
    p[1] = false;

    for(int i=2; i*i<Max; i++)
        for(int j=2; i*j<Max; j++) p[i*j] = false;

    vector<int> v;
    for(int i=2; i<Max; i++)
        if(p[i]) v.push_back(i);

    int a, b; cin >> a >> b;

    int ans = 0;

    for(int i=0; i<v.size() && v[i]*v[i] <= b; i++) {
        __int128 temp = v[i] * v[i];

        while(temp < a) temp *= v[i];

        while(temp <= b) {
            ans++;
            temp *= v[i];
        }
    }

    cout << ans << "\n";
}
