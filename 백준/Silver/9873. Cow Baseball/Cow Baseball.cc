#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    sort(v.begin(), v.end());

    int ans = 0;
    for(int i=0; i<N; i++)
        for(int j=i+1; j<N; j++)
            for(int k=j+1; k<N; k++)
                if(v[k] - v[j] >= v[j] - v[i]
                   && v[k] - v[j] <= (v[j] - v[i]) * 2) ans++;

    cout << ans << "\n";
}
