#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    int a = 0, b = 0;
    for(int i=1; i<N; i++) {
        if(v[i] < v[i-1]) a += v[i-1] - v[i];
        else if(v[i] > v[i-1]) b += v[i] - v[i-1];
    }

    cout << a << " " << b << "\n";
}
