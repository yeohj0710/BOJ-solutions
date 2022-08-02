#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int Max = 5e5 + 1;

    vector<bool> p(Max, true);
    p[1] = true;

    for(int i=2; i*i<Max; i++)
        for(int j=2; i*j<Max; j++) p[i*j] = false;

    vector<int> v;
    for(int i=2; i<Max; i++)
        if(p[i]) v.push_back(i);

    int N; cin >> N;

    int cnt = 0;

    vector<int> u(N+1);

    for(int i=1; i<=N; i++) {
        if(!p[i]) continue;

        cnt++;

        for(int j=i; j<=N; j+=i) u[j] = cnt;
    }

    cout << cnt << "\n";

    for(int i=1; i<=N; i++) cout << u[i] << " ";
    cout << "\n";
}
