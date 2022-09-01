#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int Max = 0, ans;

    for(int i=1; i<=N; i++) {
        vector<int> v(5);
        for(int j=0; j<5; j++) cin >> v[j];

        int tmp = 0;

        for(int j=0; j<5; j++)
            for(int k=j+1; k<5; k++)
                for(int l=k+1; l<5; l++)
                    tmp = max(tmp, (v[j] + v[k] + v[l]) % 10);

        if(tmp >= Max) {
            Max = tmp;
            ans = i;
        }
    }

    cout << ans << "\n";
}
