#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    vector<char> v(N);
    int cur = 0;
    bool check = true;

    while(M--) {
        int x; char ch; cin >> x >> ch;

        cur += x;

        if(v[cur % N] != NULL && v[cur % N] != ch) check = false;

        v[cur % N] = ch;
    }

    for(int i=0; i<N; i++)
        for(int j=i+1; j<N; j++)
            if(v[i] != NULL && v[i] == v[j]) check = false;

    if(!check) {
        cout << "!\n";
        return 0;
    }

    for(int i=cur%N; i>=0; i--) {
        if(v[i] != NULL) cout << v[i];
        else cout << "?";
    }

    for(int i=N-1; i>cur%N; i--) {
        if(v[i] != NULL) cout << v[i];
        else cout << "?";
    }

    cout << "\n";
}
