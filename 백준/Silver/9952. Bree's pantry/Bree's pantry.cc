#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    while(true) {
        int N; cin >> N;

        if(N == 0) break;

        struct s { string a; int b; };
        vector<s> v(N);

        for(int i=0; i<N; i++)
            cin >> v[i].a >> v[i].b;

        sort(v.begin(), v.end(), [](s x, s y) {
            if(x.b != y.b) return x.b < y.b;

            string xx = "", yy = "";

            for(int i=0; i<x.a.length(); i++) {
                if(x.a[i] >= 'A' && x.a[i] <= 'Z') xx += x.a[i] + 'a' - 'A';
                else xx += x.a[i];
            }

            for(int i=0; i<y.a.length(); i++) {
                if(y.a[i] >= 'A' && y.a[i] <= 'Z') yy += y.a[i] + 'a' - 'A';
                else yy += y.a[i];
            }

            return xx > yy;
        });

        deque<s> d;

        for(int i=N-1; i>=0; i-=2) {
            d.push_back(v[i]);

            if(i-1 < 0) break;

            d.push_front(v[i-1]);
        }

        while(d.size() > 0) {
            cout << d.front().a << " ";
            d.pop_front();
        }
        cout << "\n";
    }
}
