#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int B; cin >> B;

        string N; cin >> N;

        int sum = 0;
        for(int i=0; i<N.length(); i++) sum += N[i] - '0';

        cout << sum % (B-1) << "\n";
    }
}
