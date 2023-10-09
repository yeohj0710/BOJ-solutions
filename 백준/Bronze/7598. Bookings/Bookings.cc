#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    while(true) {
        string str; int cur; cin >> str >> cur;

        if(str == "#" && cur == 0) break;

        while(true) {
            char ch; int x; cin >> ch >> x;

            if(ch == 'X' && x == 0) break;

            if(ch == 'B' && cur + x <= 68) cur += x;
            else if(ch == 'C' && x <= cur) cur -= x;
        }

        cout << str << " " << cur << "\n";
    }
}
