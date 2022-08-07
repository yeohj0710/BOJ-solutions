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

    for(int i=1; i<N; i++)
        for(int j=i+1; j<N; j++)
            for(int k=j+1; k<N; k++) {
                int a = 1, b = 1, c = 1, d = 1;

                for(int l=0; l<i; l++) a *= v[l];
                for(int l=i; l<j; l++) b *= v[l];
                for(int l=j; l<k; l++) c *= v[l];
                for(int l=k; l<N; l++) d *= v[l];

                ans = max(ans, a + b + c + d);
            }

    cout << ans << "\n";
}
