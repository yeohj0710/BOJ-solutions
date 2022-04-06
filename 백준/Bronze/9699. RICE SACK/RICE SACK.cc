#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        cout << "Case #" << t << ": ";

        int a[5];
        for(int i=0; i<5; i++) cin >> a[i];
        sort(a, a+5, greater<int>());

        cout << a[0] << "\n";
    }
}
