#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int a, b; cin >> a >> b;
        if(!a && !b) break;

        int diff = a - b;
        if(diff < 2) cout << "0 0\n";
        else if(diff == 2) cout << "1 0\n";
        else if(diff == 3) cout << "0 1\n";
        else {
            if(diff % 2 == 0) cout << diff/2 << " 0\n";
            else cout << (diff-3)/2 << " 1\n";
        }
    }
}
