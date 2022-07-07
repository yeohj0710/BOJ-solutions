#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    string a, b; cin >> a >> b;

    reverse(a.begin(), a.end());

    int x; cin >> x;

    for(int i=0; i<M; i++) a = '0' + a;
    for(int i=0; i<N+M-1-x; i++) b = '0' + b;

    while(a.length() < b.length()) a += '0';
    while(a.length() > b.length()) b += '0';

    for(int i=0; i<a.length(); i++) {
        if(a[i] != '0') cout << a[i];
        if(b[i] != '0') cout << b[i];
    }
    cout << "\n";
}
