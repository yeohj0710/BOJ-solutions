#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<string> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    for(int i=N-2; i>=0; i--) {
        if(v[i+1] == "LIE") {
            if(v[i] == "TRUTH") v[i] = "LIE";
            else v[i] = "TRUTH";
        }
    }

    cout << v[0] << "\n";
}
