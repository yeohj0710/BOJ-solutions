#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    vector<bool> prime(1000001, true); prime[1] = false;
    for(int i=2; i*i<=1000000; i++)
        for(int j=2; i*j<=1000000; j++) prime[i*j] = false;

    int N, M; cin >> N >> M;
    for(int i=N; i<=M; i++)
        if(prime[i]) cout << i << "\n";
}
