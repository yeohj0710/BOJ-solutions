#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    int ans = 0;

    while(true) {
        bool check = true;
        for(int i=0; i<N; i++)
            if(v[i] > 0) check = false;
        if(check) break;

        for(int i=0; i<N; i++)
            if(v[i] % 2 == 1) {
                v[i]--;
                ans++;
            }

        check = true;
        for(int i=0; i<N; i++)
            if(v[i] > 0) check = false;
        if(check) break;

        for(int i=0; i<N; i++) v[i] /= 2;
        ans++;
    }

    cout << ans << "\n";
}
