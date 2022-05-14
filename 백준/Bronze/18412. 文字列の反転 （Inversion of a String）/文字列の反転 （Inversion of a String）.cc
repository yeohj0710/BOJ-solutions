#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, a, b; cin >> N >> a >> b;

    string str; cin >> str;

    for(int i=0; i<a-1; i++) cout << str[i];
    for(int i=b-1; i>=a-1; i--) cout << str[i];
    for(int i=b; i<str.length(); i++) cout << str[i];
}
