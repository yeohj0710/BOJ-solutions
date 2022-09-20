#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    for(int t=1; ; t++) {
        int N; cin >> N;
        if(N == 0) break;
        cin.ignore();

        vector<string> v(N);

        for(int i=0; i<N; i++) getline(cin, v[i]);

        vector<int> u(N);

        for(int i=0; i<N*2-1; i++) {
            int x; cin >> x;
            char c; cin >> c;

            u[x-1]++;
        }

        for(int i=0; i<N; i++)
            if(u[i] != 2) {
                cout << t << " " << v[i] << "\n";
                break;
            }
    }
}
