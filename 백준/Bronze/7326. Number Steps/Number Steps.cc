#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int x, y; cin >> x >> y;

        if(!((x == y) || (x == y + 2))) {
            cout << "No Number\n";
            continue;
        }

        int i = 0, j = 0, ans = 0;
        bool dir = true;

        while(true) {
            if(i == x && j == y) {
                cout << ans << "\n";
                break;
            }

            if(i == j && dir) i++, j++;
            else if(i == j && !dir) i++, j--;
            else if(i == j + 2 && dir) i++, j++;
            else if(i == j + 2 && !dir) i--, j++;

            dir = !dir;
            ans++;
        }
    }
}
