#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    string a, b; cin >> a >> b;

    int cnt = 0;

    for(int i=0; i<a.length(); i++)
        if(a[i] == b[i]) cnt++;

    cout << min(N, cnt) + min(a.length() - N, a.length() - cnt) << "\n";
}
