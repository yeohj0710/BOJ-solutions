#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    vector<int> sum(5);
    for(int i=1; i<5; i++) {
        int x; cin >> x;

        sum[i] = sum[i-1] + x;
    }

    for(int i=0; i<5; i++) {
        for(int j=0; j<5; j++) cout << abs(sum[i] - sum[j]) << " ";
        cout << "\n";
    }
}
