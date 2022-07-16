#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<string> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    for(int i=0; i<v[0].length(); i++) {
        vector<string> u(N);

        for(int j=0; j<N; j++)
            u[j] = v[j].substr(v[j].length()-1-i, i+1);

        sort(u.begin(), u.end());

        bool check = true;
        for(int i=1; i<N; i++)
            if(u[i] == u[i-1]) check = false;

        if(check) {
            cout << i+1 << "\n";
            break;
        }
    }
}
