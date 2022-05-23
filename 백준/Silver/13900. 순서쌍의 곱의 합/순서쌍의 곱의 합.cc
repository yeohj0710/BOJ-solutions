#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    int a = 0;
    for(int i=0; i<N; i++) a += v[i];

    int b = 0;
    for(int i=0; i<N; i++) b += v[i]*v[i];

    cout << (a*a - b)/2 << "\n";
}
