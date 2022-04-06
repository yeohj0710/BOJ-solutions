#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int n; cin >> n;

    int ans = 1;
    for(int i=1; i<=n; i++) ans = (ans*i) % 10;

    cout << ans;
}
