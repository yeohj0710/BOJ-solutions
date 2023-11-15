#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    for(int i=1; i<=N; i++)
        if(i % 2 == 1) cout << i << " ";

    for(int i=N; i>=1; i--)
        if(i % 2 == 0) cout << i << " ";

    cout << "\n";
}
