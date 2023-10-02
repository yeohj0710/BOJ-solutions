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
            if(base[i] % n == 0) break;

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

    vector<pair<int, int>> factorization(int n) {
        vector<int> v;
        unordered_map<int, int> m;

        while(n > 1) {
            int div = find_factor(n);

            if(m[div] == 0) v.push_back(div);
            m[div]++;
            n /= div;
        }

        sort(v.begin(), v.end());

        vector<pair<int, int>> u;
        for(int i=0; i<v.size(); i++) u.push_back({v[i], m[v[i]]});

        return u;
    }

    vector<int> get_divisors(int n) {
        vector<pair<int, int>> v = factorization(n);
        vector<int> u;

        if(v.size() == 0) {
            u.push_back(1);
            return u;
        }

        function<void(int, int)> dfs = [&](int idx, int cur) {
            if(idx == v.size()) {
                u.push_back(cur);
                return;
            }

            int x = v[idx].first, y = v[idx].second;

            for(int i=0; i<=y; i++) {
                dfs(idx + 1, cur);
                cur *= x;
            }
        };

        dfs(0, 1);

        sort(u.begin(), u.end());

        return u;
    }
} po;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int T; cin >> T;

    while(T--) {
        int N_, M_; cin >> N_ >> M_;

        __int128 N = N_, M = M_;

        vector<pair<int, int>> v = po.factorization(M);

        __int128 ans = LLONG_MAX;

        for(int i=0; i<v.size(); i++) {
            __int128 cnt = 0, mul = v[i].first;

            while(mul <= N) {
                cnt += N / mul;
                mul *= v[i].first;
            }

            ans = min(ans, cnt / v[i].second);
        }

        int ans_ = ans;

        cout << ans_ << "\n";
    }
}
