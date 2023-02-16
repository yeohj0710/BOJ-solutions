#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    vector<bool> v(10);

    while(N--) {
        char ch; cin >> ch;

        if(ch == 'L') {
            for(int i=0; i<10; i++)
                if(!v[i]) {
                    v[i] = true;
                    break;
                }
        }
        else if(ch == 'R') {
            for(int i=9; i>=0; i--)
                if(!v[i]) {
                    v[i] = true;
                    break;
                }
        }
        else {
            v[ch - '0'] = false;
        }
    }

    for(int i=0; i<10; i++) {
        if(v[i]) cout << 1;
        else cout << 0;
    }
    cout << "\n";
}
