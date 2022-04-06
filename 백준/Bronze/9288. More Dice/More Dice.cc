#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        cout << "Case " << t << ":\n";

        int n; cin >> n;
        for(int i=1; i<=6; i++)
            for(int j=i; j<=6; j++)
                if(i+j == n) cout << "(" << i << "," << j << ")\n";
    }
}
