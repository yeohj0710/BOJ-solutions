#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    int a, b, c, d;

    for(int i=0; i<N; i++)
        if(v[i] == 0) {
            a = i;
            break;
        }

    for(int i=N-1; i>=0; i--)
        if(v[i] == 1) {
            b = i;
            break;
        }

    for(int i=0; i<N; i++)
        if(v[i] == 1) {
            c = i;
            break;
        }

    for(int i=N-1; i>=0; i--)
        if(v[i] == 0) {
            d = i;
            break;
        }

    cout << max(b - a, d - c) << "\n";
}
