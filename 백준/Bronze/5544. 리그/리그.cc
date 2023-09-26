#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    vector<int> v(N+1);

    for(int i=0; i<N*(N-1)/2; i++) {
        int a, b, c, d; cin >> a >> b >> c >> d;

        if(c > d) v[a] += 3;
        else if(c < d) v[b] += 3;
        else v[a]++, v[b]++;
    }

    for(int i=1; i<=N; i++) {
        int rnk = 1;

        for(int j=1; j<=N; j++)
            if(v[j] > v[i]) rnk++;

        cout << rnk << "\n";
    }
}
