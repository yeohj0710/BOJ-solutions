#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    set<string> s;

    while(N--) {
        string str; cin >> str;

        if(str.length() >= 6 && str.substr(str.length()-6, 6) == "Cheese") s.insert(str);
    }

    if(s.size() >= 4) cout << "yummy\n";
    else cout << "sad\n";
}
