#include <bits/stdc++.h>
#define int long long
using namespace std;

struct S { string a, b, c; };

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<S> v(N);
    for(int i=0; i<N; i++)
        cin >> v[i].a >> v[i].b >> v[i].c;

    while(M--) {
        string a, b, c; cin >> a >> b >> c;

        int ans = 0;
        for(int i=0; i<N; i++) {
            bool check = true;
            if(a != "-" && a != v[i].a) check = false;
            if(b != "-" && b != v[i].b) check = false;
            if(c != "-" && c != v[i].c) check = false;

            if(check) ans++;
        }

        cout << ans << "\n";
    }
}
