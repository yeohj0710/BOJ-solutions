#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    int v[2] = {}, i = 1;

    while(N > 0) {
        if(N % 2 == 0) v[i % 2] += N / 2;
        else v[i % 2] += N / 2 + 1;

        N /= 2;
        i++;    
    }

    cout << v[0] << " " << v[1] << "\n";
}
