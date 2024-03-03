#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    vector<string> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    for(int i=0; i<N; i++) {
        cout << "? " << v[i] << endl;

        int x; cin >> x;

        cout << "? " << v[i] << endl;

        int y; cin >> y;

        if(x == 1 || y == 1) {
            cout << "! " << v[i] << endl;
            break;
        }
    }
}
