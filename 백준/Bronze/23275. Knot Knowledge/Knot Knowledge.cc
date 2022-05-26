#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<bool> v(1001);

    for(int i=0; i<N; i++) {
        int x; cin >> x;
        v[x] = true;
    }

    for(int i=0; i<N-1; i++) {
        int x; cin >> x;
        v[x] = false;
    }

    for(int i=0; i<=1000; i++)
        if(v[i]) {
            cout << i << "\n";
            break;
        }
}
