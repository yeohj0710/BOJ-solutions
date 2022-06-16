#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    vector<bool> prime(350, true);
    for(int i=2; i<=350; i++)
        for(int j=i; i*j<=350; j++) prime[i*j] = false;

    vector<int> v;
    for(int i=2; i<=350; i++)
        if(prime[i]) v.push_back(i);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        for(int i=0; i<v.size(); i++) {
            int cnt = 0;
            while(N % v[i] == 0) {
                N /= v[i];
                cnt++;
            }

            if(cnt > 0) cout << v[i] << " " << cnt << "\n";
        }

        if(N != 1) cout << N << " " << 1 << "\n";
    }
}
