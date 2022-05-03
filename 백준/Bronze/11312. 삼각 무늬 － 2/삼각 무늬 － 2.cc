#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int a, b; cin >> a >> b;

        long long sum = 0;
        for(int i=0; i<a/b; i++) {
            sum += 2*i + 1;
        }

        cout << sum << "\n";
    }
}
