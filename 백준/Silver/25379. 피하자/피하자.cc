#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(N);
    int cnt = 0;
    for(int i=0; i<N; i++) {
        cin >> v[i];
        if(v[i] % 2 == 0) cnt++;
    }

    int a = 0;
    for(int i=0; i<N; i++)
        if(v[i] % 2 == 0) a += i;
    a -= cnt * (cnt - 1) / 2;

    int b = 0;
    for(int i=0; i<N; i++)
        if(v[i] % 2 == 1) b += i;
    b -= (N - cnt) * (N - cnt - 1) / 2;

    cout << min(a, b) << "\n";
}
