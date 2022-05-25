#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a, b, c, N; cin >> a >> b >> c >> N;

    bool check = false;

    for(int i=0; a*i<=N; i++)
        for(int j=0; a*i+b*j<=N; j++) {
            if((N - a*i - b*j) % c != 0) continue;

            check = true;

            int k = (N - a*i - b*j) / c;

            cout << i << " " << j << " " << k << "\n";
        }

    if(!check) cout << "impossible\n";
}

