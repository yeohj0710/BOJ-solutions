#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        cout << "Data Set " << t << ":\n";

        int N, M; cin >> N >> M;

        struct s { int a; double b; };
        unordered_map<string, s> m;

        while(N--) {
            int a; string b, c; cin >> a >> b >> c; cin.ignore();

            string d; getline(cin, d);

            for(int i=0; i<d.length(); i++)
                if(d[i] >= 'A' && d[i] <= 'Z') d[i] += 'a' - 'A';

            b = b.substr(1, b.length() - 1);
            c = c.substr(1, c.length() - 1);

            double x = stod(b) - stod(c);

            m[d] = {a, x};
        }

        double ans = 0;

        while(M--) {
            int K; cin >> K; cin.ignore();

            string str; getline(cin, str);

            for(int i=0; i<str.length(); i++)
                if(str[i] >= 'A' && str[i] <= 'Z') str[i] += 'a' - 'A';

            ans += min(K, m[str].a) * m[str].b;
        }

        cout << fixed << setprecision(2);
        cout << "$" << ans << "\n";
        cout << "\n";
    }
}
