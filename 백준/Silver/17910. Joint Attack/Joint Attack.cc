#include <bits/stdc++.h>
#define int long long
using namespace std;

main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    int a = v[N-1], b = 1;

    for(int i=N-2; i>=0; i--) {
        swap(a, b);

        a += v[i] * b;

        int gcd = __gcd(a, b);

        a /= gcd;
        b /= gcd;
    }

    cout << a << "/" << b << "\n";
}
