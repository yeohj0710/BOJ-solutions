#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int t; cin >> t;

    while(t--) {
        int n; cin >> n;

        int sum = 0;
        for(int i=1; i<=n; i++) sum += i*i;

        cout << sum << "\n";
    }
}
