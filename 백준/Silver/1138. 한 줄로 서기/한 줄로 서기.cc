#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(N), u(N);

    for(int i=0; i<N; i++) cin >> v[i];

    for(int i=N-1; i>=0; i--) {
        int cnt = 0, j = 0;

        while(cnt < v[i]) {
            if(u[j] > i+1) cnt++;
            j++;
        }

        for(int k=N-1-i; k>j; k--) u[k] = u[k-1];
        u[j] = i+1;
    }

    for(int i=0; i<N; i++) cout << u[i] << " ";
    cout << "\n";
}
