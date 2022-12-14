#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios_base::sync_with_stdio(0), cin.tie(0);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        vector<int> v(N);
        for(int i=0; i<N; i++) cin >> v[i];

        bool check = true;
        for(int i=1; i<N; i++)
            if(v[i] < v[i-1] * 2) check = false;

        cout << "Denominations: ";
        for(int i=0; i<N; i++) cout << v[i] << " ";
        cout << "\n";

        if(check) cout << "Good";
        else cout << "Bad";
        cout << " coin denominations!\n";
        cout << "\n";
    }
}
