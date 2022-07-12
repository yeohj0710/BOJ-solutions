#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int a, b; cin >> a >> b;

    if(a < b) swap(a, b);

    cout << b << " ";

    for(int i=0; i<N-2; i++) {
        int x; cin >> x;

        if(x > b) swap(b, x);
        if(b > a) swap(a, b);

        cout << b << " ";
    }
    cout << "\n";
}
