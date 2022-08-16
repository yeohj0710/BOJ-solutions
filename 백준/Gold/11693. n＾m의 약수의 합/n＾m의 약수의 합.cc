#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<int> v;

    int tmp = N;

    for(int i=2; i*i<=tmp; i++) {
        while(tmp % i == 0) {
            v.push_back(i);
            tmp /= i;
        }
    }

    if(tmp > 1) v.push_back(tmp);

    int cnt = 1, ans = 1, mod = 1e9 + 7;

    for(int i=1; i<v.size(); i++) {
        if(v[i] == v[i-1]) cnt++;
        else {
            int mul = 1, ba = v[i-1], ex = cnt*M + 1;

            while(ex > 0) {
                if(ex % 2 == 1) mul = (mul * ba) % mod;

                ba = (ba * ba) % mod;
                ex /= 2;
            }

            mul--;

            ba = v[i-1] - 1, ex = mod - 2;

            while(ex > 0) {
                if(ex % 2 == 1) mul = (mul * ba) % mod;

                ba = (ba * ba) % mod;
                ex /= 2;
            }

            ans = (ans * mul) % mod;

            cnt = 1;
        }
    }

    if(v.size() > 0) {
        int mul = 1, ba = v[v.size()-1], ex = cnt*M + 1;

        while(ex > 0) {
            if(ex % 2 == 1) mul = (mul * ba) % mod;

            ba = (ba * ba) % mod;
            ex /= 2;
        }

        mul--;

        ba = v[v.size()-1] - 1, ex = mod - 2;

        while(ex > 0) {
            if(ex % 2 == 1) mul = (mul * ba) % mod;

            ba = (ba * ba) % mod;
            ex /= 2;
        }

        ans = (ans * mul) % mod;
    }

    cout << ans << "\n";
}
