#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    cin.tie(0)->sync_with_stdio(0);

    string str; cin >> str;

    int cnt = 0;
    for(int i=0; i<str.length(); i++)
        if(str[i] == 'A') cnt++;

    int ans = 0, sum = 0;

    for(int i=1; ; i++) {
        if(sum + i > cnt) {
            cout << i-1 << "\n";
            break;
        }

        sum += i;
    }
}
