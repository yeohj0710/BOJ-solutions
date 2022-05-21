#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<string> u(N), v(N);
    for(int i=0; i<N; i++) cin >> u[i];
    for(int i=0; i<N; i++) cin >> v[i];

    bool check = true;
    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++) {
            if(u[i] == u[j]) {
                if(v[i] != v[j]) check = false;
            }
            if(u[i] == v[j]) {
                if(v[i] != u[j]) check = false;
            }
        }

    for(int i=0; i<N; i++)
        if(u[i] == v[i]) check = false;

    if(check) cout << "good\n";
    else cout << "bad\n";
}
