#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        bool b1 = false, b2 = false;

        vector<int> v(10);
        for(int i=0; i<10; i++) {
            cin >> v[i];

            if(v[i] == 17) b1 = true;
            else if(v[i] == 18) b2 = true;
        }

        for(int i=0; i<10; i++) cout << v[i] << " ";
        cout << "\n";

        if(b1 && b2) cout << "both\n";
        else if(b1) cout << "zack\n";
        else if(b2) cout << "mack\n";
        else cout << "none\n";

        cout << "\n";
    }
}
