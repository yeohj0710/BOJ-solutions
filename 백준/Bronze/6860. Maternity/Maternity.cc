#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    string a, b; cin >> a >> b;

    int n; cin >> n;

    while(n--) {
        bool chk = true;

        string s; cin >> s;

        for(int i=0; i<5; i++) {
            if(s[i] >= 'A' && s[i] <= 'Z' && a[i*2] >= 'a' && a[i*2] <= 'z' && b[i*2] >= 'a' && b[i*2] <= 'z')
                chk = false;
            else if(s[i] >= 'a' && s[i] <= 'z' && ((a[i*2+1] >= 'A' && a[i*2+1] <= 'Z') || (b[i*2+1] >= 'A' && b[i*2+1] <= 'Z')))
                chk = false;
        }

        if(chk) cout << "Possible baby.\n";
        else cout << "Not their baby!\n";
    }
}
