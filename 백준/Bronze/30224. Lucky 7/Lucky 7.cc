#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    bool chk1 = false, chk2 = false;

    string str = to_string(N);

    for(int i=0; i<str.length(); i++)
        if(str[i] == '7') chk1 = true;

    if(N % 7 == 0) chk2 = true;

    if(!chk1 && !chk2) cout << 0 << "\n";
    else if(!chk1 && chk2) cout << 1 << "\n";
    else if(chk1 && !chk2) cout << 2 << "\n";
    else cout << 3 << "\n";
}
