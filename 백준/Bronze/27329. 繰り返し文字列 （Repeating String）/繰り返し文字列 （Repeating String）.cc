#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; string str; cin >> N >> str;

    if(str.substr(0, N/2) == str.substr(N/2, N/2)) cout << "Yes\n";
    else cout << "No\n";
}
