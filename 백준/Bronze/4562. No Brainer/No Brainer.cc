#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N;
    cin >> N;
    while(N--) {
        int a, b; cin >> a >> b;
        if(a < b) cout << "NO BRAINS\n";
        else cout << "MMM BRAINS\n";
    }
}
