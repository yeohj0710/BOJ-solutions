#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    for(int i=0; i<N; i++) {
        if(i % 2 == 0)
            for(int j=1; j<=N; j++) cout << i*N + j << " ";
        else
            for(int j=N; j>=1; j--) cout << i*N + j << " ";

        cout << "\n";
    }
}
