#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a, b, c; cin >> a >> b >> c;

    string str = to_string(a * b * c);

    int cnt[10] = {};
    for(int i=0; i<str.length(); i++) cnt[str[i] - '0']++;

    for(int i=0; i<10; i++) cout << cnt[i] << "\n";
}
