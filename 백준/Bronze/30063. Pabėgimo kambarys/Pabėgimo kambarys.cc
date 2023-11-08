#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; string str; cin >> N >> str;

    int r = 0, a = 0, k = 0, t = 0, s = 0;

    for(int i=0; i<str.length(); i++) {
        if(str[i] == 'R') r++;
        else if(str[i] == 'A') a++;
        else if(str[i] == 'K') k++;
        else if(str[i] == 'T') t++;
        else if(str[i] == 'S') s++;

        if(r >= 1 && a >= 2 && k >= 1 && t >= 1 && s >= 1) {
            cout << i + 1 << "\n";
            break;
        }
    }
}
