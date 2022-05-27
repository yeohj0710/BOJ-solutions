#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> cnt(32);

    for(int i=0; i<N; i++) {
        int a, b; cin >> a >> b;
        for(int j=a; j<b; j++) cnt[j]++;
    }

    int K; cin >> K;

    bool check = true;

    for(int i=0; i<=31; i++)
        if(cnt[i] > K) check = false;

    if(check) cout << 1 << "\n";
    else cout << 0 << "\n";
}
