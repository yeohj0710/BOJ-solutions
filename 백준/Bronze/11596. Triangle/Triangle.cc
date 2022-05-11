#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    vector<int> a(3), b(3);

    for(int i=0; i<3; i++) cin >> a[i];
    for(int i=0; i<3; i++) cin >> b[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    if(a[0]*a[0] + a[1]*a[1] == a[2]*a[2] && a[0] == b[0] && a[1] == b[1] && a[2] == b[2]) cout << "YES\n";
    else cout << "NO\n";
}
