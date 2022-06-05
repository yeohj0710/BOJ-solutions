#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    string str; cin >> str;

    if(M % 3 == 0) cout << str << "\n";
    else if(M % 3 == 1)
        cout << str.substr(0, str.length()/4)
              << str.substr(str.length()/4 * 3, str.length()/4)
              << str.substr(str.length()/4, str.length()/2) << "\n";
    else cout << str.substr(0, str.length()/4)
               << str.substr(str.length()/2, str.length()/2)
               << str.substr(str.length()/4, str.length()/4) << "\n";
}
