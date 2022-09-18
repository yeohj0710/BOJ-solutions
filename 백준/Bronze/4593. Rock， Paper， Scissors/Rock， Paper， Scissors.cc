#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        string a, b; cin >> a >> b;
        if(a == "E" && b == "E") break;

        int x = 0, y = 0;

        for(int i=0; i<a.length(); i++) {
            if(a[i] == 'R' && b[i] == 'S') x++;
            else if(a[i] == 'S' && b[i] == 'P') x++;
            else if(a[i] == 'P' && b[i] == 'R') x++;
            else if(a[i] == 'S' && b[i] == 'R') y++;
            else if(a[i] == 'P' && b[i] == 'S') y++;
            else if(a[i] == 'R' && b[i] == 'P') y++;
        }

        cout << "P1: " << x << "\n";
        cout << "P2: " << y << "\n";
    }
}
