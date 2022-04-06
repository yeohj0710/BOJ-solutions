#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        long long a, b; cin >> a >> b;

        cout << "Scenario #" << t << ":\n";
        cout << (a+b)*(b-a+1)/2 << "\n\n";
    }
}
