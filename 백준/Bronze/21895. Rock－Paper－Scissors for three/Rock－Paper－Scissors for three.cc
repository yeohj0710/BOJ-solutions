#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    string a, b; cin >> a >> b;
    string ans = "";

    for(int i=0; i<N; i++) {
        if(a[i] == 'R' && b[i] == 'R') ans += 'P';
        if(a[i] == 'R' && b[i] == 'P') ans += 'P';
        if(a[i] == 'R' && b[i] == 'S') ans += 'R';
        if(a[i] == 'P' && b[i] == 'R') ans += 'P';
        if(a[i] == 'P' && b[i] == 'P') ans += 'S';
        if(a[i] == 'P' && b[i] == 'S') ans += 'S';
        if(a[i] == 'S' && b[i] == 'R') ans += 'R';
        if(a[i] == 'S' && b[i] == 'P') ans += 'S';
        if(a[i] == 'S' && b[i] == 'S') ans += 'R';
    }

    cout << ans << "\n";
}
