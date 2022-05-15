#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    int Max = 0;
    for(int i=0; i<N; i++) Max = max(Max, v[i]);

    int idx;
    for(int i=0; i<N; i++)
        if(v[i] == Max) idx = i;

    int a = 0, b = 0;
    for(int i=0; i<idx; i++) a += v[i];
    for(int i=idx+1; i<N; i++) b += v[i];

    cout << a << "\n" << b << "\n";
}
