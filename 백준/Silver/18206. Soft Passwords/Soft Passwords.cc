#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string a, b; cin >> a >> b;

    bool check = false;

    if(a == b) check = true;

    if(a.front() >= '0' && a.front() <= '9' && a.substr(1, a.length()-1) == b) check = true;

    if(a.back() >= '0' && a.back() <= '9' && a.substr(0, a.length()-1) == b) check = true;

    for(int i=0; i<a.length(); i++) {
        if(a[i] >= 'A' && a[i] <= 'Z') a[i] += 'a' - 'A';
        else if(a[i] >= 'a' && a[i] <= 'z') a[i] += 'A' - 'a';
    }

    if(a == b) check = true;

    if(check) cout << "Yes\n";
    else cout << "No\n";
}
