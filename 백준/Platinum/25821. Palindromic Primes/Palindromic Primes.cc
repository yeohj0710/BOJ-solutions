#include <bits/stdc++.h>
#define int long long
using namespace std;

struct pollards_rho {
    __int128 power(__int128 x, __int128 y, __int128 mod) {
        x %= mod;

        __int128 ret = 1;

        while(y > 0) {
            if(y % 2 == 1) ret = (ret * x) % mod;

            x = (x * x) % mod;
            y /= 2;
        }

        return ret;
    }

    bool is_prime(__int128 n) {
        if(n == 2 || n == 3) return true;
        if(n % 2 == 0) return false;

        vector<__int128> base = {2, 325, 9375, 28178, 450775, 9780504, 1795265022};
        int sz = 4;

        bool chk = true;

        for(int i=0; i<sz; i++) {
            if(base[i] % n == 0) break;;

            __int128 k = n - 1;

            while(true) {
                __int128 tmp = power(base[i], k, n);

                if(tmp == n - 1) break;
                if(k % 2 == 1) {
                    if(tmp != 1 && tmp != n - 1) chk = false;

                    break;
                }

                k /= 2;
            }

            if(!chk) break;
        }

        if(chk) return true;
        else return false;
    }

    int find_factor(__int128 n) {
        if(n % 2 == 0) return 2;
        if(is_prime(n)) return n;

        __int128 x = rand() % (n - 2) + 2, y = x, c = rand() % 10 + 1, g = 1;

        while(g == 1) {
            x = ((x * x) % n + c) % n;
            y = ((y * y) % n + c) % n;
            y = ((y * y) % n + c) % n;
            g = __gcd(abs(x - y), n);

            if(g == n) return find_factor(n);
        }

        if(is_prime(g)) return g;
        else return find_factor(g);
    }

    vector<int> factorization(__int128 n) {
        vector<int> v;

        while(n > 1) {
            int div = find_factor(n);

            v.push_back(div);
            n /= div;
        }

        sort(v.begin(), v.end());

        return v;
    }
};

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int a, b; cin >> a >> b;

    pollards_rho f;
    int ans = 0;

    for(int i=1; i<=1e6; i++) {
        string s1 = to_string(i), s2 = s1;

        reverse(s2.begin(), s2.end());

        int x = stoll(s1 + s2);
        int y = stoll(s1.substr(0, s1.length()-1) + s2);

        if(a <= x && x <= b && f.is_prime(x)) ans++;
        if(a <= y && y <= b && f.is_prime(y)) ans++;
    }

    cout << ans << "\n";
}
