#include <bits/stdc++.h>
#define int long long
using namespace std;

int arr[501][101];

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int x, y; cin >> x >> y;

        if(x == 0 && y == 0) break;

        for(int i=0; i<y; i++)
            for(int j=0; j<x; j++) cin >> arr[i][j];

        bool ans = false;
        for(int j=0; j<x; j++) {
            bool check = true;
            for(int i=0; i<y; i++)
                if(arr[i][j] == 0) check = false;

            if(check) ans = true;
        }

        if(ans) cout << "yes\n";
        else cout << "no\n";
    }
}
