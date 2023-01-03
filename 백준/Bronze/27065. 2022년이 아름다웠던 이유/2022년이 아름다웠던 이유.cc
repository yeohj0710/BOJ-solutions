#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    cin.tie(0)->sync_with_stdio(0);

    vector<bool> v(5001);

    for(int i=1; i<=5000; i++) {
        int sum = 0;

        for(int j=1; j<i; j++)
            if(i % j == 0) sum += j;

        if(sum > i) v[i] = true;
    }

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        if(!v[N]) {
            cout << "BOJ 2022\n";
            continue;
        }

        bool check = true;

        for(int i=1; i<N; i++)
            if(N % i == 0 && v[i]) check = false;

        if(check) cout << "Good Bye\n";
        else cout << "BOJ 2022\n";
    }
}
