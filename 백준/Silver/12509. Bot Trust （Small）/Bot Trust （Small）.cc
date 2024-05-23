#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int tc; cin >> tc;

    for(int t=1; t<=tc; t++) {
        cout << "Case #" << t << ": ";

        int n; cin >> n;

        struct s { char a; int b; };
        vector<s> v(n);

        vector<int> u, w;

        for(int i=0; i<n; i++) {
            cin >> v[i].a >> v[i].b;

            if(v[i].a == 'O') u.push_back(v[i].b);
            else w.push_back(v[i].b);
        }

        int x = 1, y = 1, ans = 0, i = 0, j = 0, k = 0;

        while(true) {
            if(k >= v.size()) break;

            if(i >= u.size()) {
                ans += abs(y - w[j]) + 1;
                y = w[j];

                j++;
                k++;
            }
            else if(j >= w.size()) {
                ans += abs(x - u[i]) + 1;
                x = u[i];

                i++;
                k++;
            }
            else {
                if(v[k].a == 'O') {
                    int tm = abs(x - u[i]) + 1;

                    x = u[i];
                    ans += tm;

                    if(y < w[j]) y += min(w[j] - y, tm);
                    else if(y > w[j]) y -= min(y - w[j], tm);

                    i++;
                    k++;
                }
                else {
                    int tm = abs(y - w[j]) + 1;

                    y = w[j];
                    ans += tm;

                    if(x < u[i]) x += min(u[i] - x, tm);
                    else if(x > u[i]) x -= min(x - u[i], tm);

                    j++;
                    k++;
                }
            }
        }

        cout << ans << "\n";
    }
}
