#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int curr = 0;
    bool check = true;

    while(N--) {
        string str; cin >> str;

        if(str == "A") curr++;
        else curr--;

        if(curr < 0) check = false;
    }

    if(curr != 0) check = false;

    if(check) cout << "YES\n";
    else cout << "NO\n";
}
