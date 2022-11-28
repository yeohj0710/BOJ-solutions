#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    vector<int> v(2e6 + 1);

    for(int i=1; i<=2e6; i++)
        for(int j=i; j<=2e6; j+=i) v[j]++;

    int a, b; cin >> a >> b;

    int Max = 0;

    for(int i=a; i<=b; i++) Max = max(Max, v[i]);

    int cnt = 0;

    for(int i=a; i<=b; i++)
        if(v[i] == Max) cnt++;

    cout << Max << " " << cnt << "\n";

    for(int i=a; i<=b; i++)
        if(v[i] == Max) cout << i << "\n";
}
