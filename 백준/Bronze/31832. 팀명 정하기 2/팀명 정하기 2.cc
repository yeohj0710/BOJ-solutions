#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    while(N--) {
        string s; cin >> s;

        if(s.length() > 10) continue;

        int a = 0, b = 0, c = 0;

        for(int i=0; i<s.length(); i++) {
            if(s[i] >= 'A' && s[i] <= 'Z') a++;
            else if(s[i] >= 'a' && s[i] <= 'z') b++;

            if(!(s[i] >= '0' && s[i] <= '9')) c++;
        }

        if(a <= b && c > 0) cout << s << "\n";
    }
}
