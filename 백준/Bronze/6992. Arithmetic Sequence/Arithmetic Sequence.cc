#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        vector<int> v(N);
        for(int i=0; i<N; i++) cin >> v[i];

        bool check = true;
        for(int i=1; i<N; i++)
            if(v[i] - v[i-1] != v[1] - v[0]) check = false;

        if(!check) {
            cout << "The sequence [";
            for(int i=0; i<N-1; i++) cout << v[i] << ", ";
            cout << v[N-1] << "] is not an arithmetic sequence.\n";

            continue;
        }

        cout << "The next 5 numbers after [";
        for(int i=0; i<N-1; i++) cout << v[i] << ", ";
        cout << v[N-1] << "] are: [";

        for(int i=0; i<4; i++) cout << v[N-1] + (i + 1) * (v[1] - v[0]) << ", ";
        cout << v[N-1] + 5 * (v[1] - v[0]) << "]\n";
    }
}
