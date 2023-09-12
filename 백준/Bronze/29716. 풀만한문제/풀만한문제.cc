#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> M >> N; cin.ignore();

    int ans = 0;

    while(N--) {
        string str; getline(cin, str);

        int sum = 0;

        for(int i=0; i<str.length(); i++) {
            char c = str[i];

            if(c >= 'A' && c <= 'Z') sum += 4;
            else if((c >= 'a' && c <= 'z') || (c >= '0' && c <= '9')) sum += 2;
            else if(c == ' ') sum++;
        }

        if(sum <= M) ans++;
    }

    cout << ans << "\n";
}
