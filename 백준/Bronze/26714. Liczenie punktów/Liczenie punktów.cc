#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    int N; cin >> N;

    string str; cin >> str;

    int ans = 0;

    for(int i=0; i<N; i+=N/10) {
        bool check = true;

        for(int j=i; j<i+N/10; j++)
            if(str[j] == 'N') check = false;

        if(check) ans++;
    }

    cout << ans << "\n";
}
