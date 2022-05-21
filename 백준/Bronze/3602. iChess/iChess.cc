#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a, b; cin >> a >> b;
    if(a > b) swap(a, b);

    if(a == 0 && b == 0) {
        cout << "Impossible\n";
        return 0;
    }

    for(int i=1; ; i++) {
        int x = i*i/2;
        int y = i*i - x;

        if(x > a || y > b) {
            cout << i-1 << "\n";
            break;
        }
    }
}
