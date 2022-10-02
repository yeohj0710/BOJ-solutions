#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;
    string a; cin >> a;

    int M; cin >> M;
    string b; cin >> b;

    string tmp = "";
    for(int i=0; i<1e3; i++) tmp += a;

    int i = 0, j = 0;

    while(i < tmp.length() && j < b.length()) {
        if(b[j] == tmp[i]) i++, j++;
        else i++;
    }

    if(i == tmp.length()) cout << -1 << "\n";
    else cout << i << "\n";
}
