#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int N; cin >> N;
        if(N == 0) break;

        vector<bool> v(24*60);
        bool check = true;

        while(N--) {
            string str; cin >> str;

            int a = stoi(str.substr(0, 2));
            int b = stoi(str.substr(3, 2));
            int c = stoi(str.substr(6, 2));
            int d = stoi(str.substr(9, 2));

            for(int i=a*60+b; i<c*60+d; i++) {
                if(v[i]) check = false;

                v[i] = true;
            }
        }

        if(check) cout << "no conflict\n";
        else cout << "conflict\n";
    }
}
