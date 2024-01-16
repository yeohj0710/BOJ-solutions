#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int Max = 1e5 + 1;

    vector<bool> isp(Max, true);
    isp[0] = isp[1] = false;

    for(int i=2; i*i<Max; i++)
        for(int j=2; i*j<Max; j++) isp[i*j] = false;

    vector<int> p;
    for(int i=3; i<Max; i++)
        if(isp[i]) p.push_back(i);

    int N; cin >> N;

    for(int i=0; i<N; i++) cout << p[i] << " ";
    cout << "\n";
}
