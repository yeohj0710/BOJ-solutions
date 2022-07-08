#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    for(int i=2; ; i++)
        for(int j=0; j<i; j++) {
            int cnt = 0;
            for(int k=0; k<N; k++)
                if(v[k] % i == j) cnt++;

            if(cnt >= N - cnt) {
                cout << i << " " << j << "\n";
                return 0;
            }
        }
}
