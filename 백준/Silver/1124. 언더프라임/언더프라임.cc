#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int Max = 1e5;

    vector<bool> p(Max, true);
    p[1] = false;

    for(int i=2; i*i<Max; i++)
        for(int j=2; i*j<Max; j++) p[i*j] = false;

    vector<int> v;
    for(int i=2; i<Max; i++)
        if(p[i]) v.push_back(i);

    int a, b; cin >> a >> b;

    int ans = 0;

    for(int i=a; i<=b; i++) {
        if(p[i]) continue;

        int temp = i, cnt = 0;

        for(int j=0; j<v.size() && v[j]*v[j] <= i; j++) {
            while(temp % v[j] == 0) {
                temp /= v[j];
                cnt++;
            }
        }
        if(temp != 1) cnt++;

        if(p[cnt]) ans++;
    }

    cout << ans << "\n";
}
