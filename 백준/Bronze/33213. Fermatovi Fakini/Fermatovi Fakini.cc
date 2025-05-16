#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;

    int e = 0, o = 0;
    unordered_map<int, bool> mp1, mp2;

    while(n--) {
        int x; cin >> x;

        if(x % 2 == 0) {
            e++;
            mp1[x] = true;
        }
        else {
            o++;
            mp2[x] = true;
        }
    }

    if(e > o) {
        for(int i=2; ; i+=2) {
            if(!mp1[i]) {
                cout << i << "\n";
                return 0;
            }
        }
    }
    else {
        for(int i=1; ; i+=2) {
            if(!mp2[i]) {
                cout << i << "\n";
                return 0;
            }
        }
    }
}
