#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string a, b; cin >> a >> b;

    int i = 0, j = 0;
    bool check = true;

    while(i < a.length() && j < b.length()) {
        if(a[i] == b[j]) i++, j++;
        else j += 2;
    }

    if(i < a.length() || (b.length() - j) % 2 == 1) check = false;

    if(check) cout << "YES\n";
    else cout << "NO\n";
}
