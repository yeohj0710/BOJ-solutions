#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N;

    while(cin >> N) {
        vector<int> v(N);
        for(int i=0; i<N; i++) cin >> v[i];

        vector<bool> u(N);
        for(int i=1; i<N; i++) u[abs(v[i] - v[i-1])] = true;

        bool check = true;
        for(int i=1; i<=N-1; i++)
            if(!u[i]) check = false;

        if(check) cout << "Jolly\n";
        else cout << "Not jolly\n";
    }
}
