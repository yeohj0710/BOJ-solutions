#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int a, b, c; cin >> a >> b >> c;

    for(int i=0; i<a+N-(a+b+c); i++) cout << char('A' + i % 26);
    for(int i=0; i<b; i++) cout << char('a' + i % 26);
    for(int i=0; i<c; i++) cout << char('0' + i % 10);
    cout << "\n";
}
