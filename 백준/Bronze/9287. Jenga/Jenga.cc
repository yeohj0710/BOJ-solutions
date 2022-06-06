#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        int N; cin >> N;

        bool check = true;

        while(N--) {
            string str; cin >> str;

            if(str == "000" || str == "001" || str == "100") check = false;
        }

        cout << "Case " << t << ": ";
        if(check) cout << "Standing\n";
        else cout << "Fallen\n";
    }
}
