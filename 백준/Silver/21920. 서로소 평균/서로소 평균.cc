#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    int x; cin >> x;

    int sum = 0, cnt = 0;
    for(int i=0; i<N; i++)
        if(__gcd(x, v[i]) == 1) {
            sum += v[i];
            cnt++;
        }
        
    cout << fixed;
    cout.precision(6);

    cout << (double)sum / cnt << "\n";
}
