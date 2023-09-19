#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    string str = "AKQJT987";

    vector<int> v = {11, 4, 3, 20, 10, 14, 0, 0};
    vector<int> u = {11, 4, 3, 2, 10, 0, 0, 0};

    int N; char ch; cin >> N >> ch;

    int ans = 0;

    N *= 4;

    while(N--) {
        char a, b; cin >> a >> b;

        for(int i=0; i<str.length(); i++) {
            if(str[i] == a) {
                if(b == ch) ans += v[i];
                else ans += u[i];
            }
        }
    }

    cout << ans << "\n";
}
