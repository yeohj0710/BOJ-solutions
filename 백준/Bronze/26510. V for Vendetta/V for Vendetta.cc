#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    int N;

    while(cin >> N) {
        for(int i=1; i<=N; i++) {
            for(int j=1; j<i; j++) cout << " ";
            if(i < N) cout << "*";
            for(int j=1; j<=(N-i)*2-1; j++) cout << " ";
            cout << "*\n";
        }
    }
}
