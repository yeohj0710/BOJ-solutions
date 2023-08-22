#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    sort(v.begin(), v.end());

    int i = 0, j = N-1, a = 0, b = 0, cnt = 0;

    while(i <= j) {
        if(cnt % 2 == 0) b += v[j--];
        else a += v[i++];

        cnt++;
    }

    cout << a << " " << b << "\n";
}
