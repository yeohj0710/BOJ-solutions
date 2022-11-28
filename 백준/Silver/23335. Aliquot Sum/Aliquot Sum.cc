#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    vector<int> asum(1e6 + 1);

    for(int i=1; i<=1e6; i++)
        for(int j=i*2; j<=1e6; j+=i) asum[j] += i;

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        if(asum[N] > N) cout << "abundant\n";
        else if(asum[N] == N) cout << "perfect\n";
        else if(asum[N] < N) cout << "deficient\n";
    }
}
