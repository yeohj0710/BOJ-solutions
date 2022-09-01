#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    string str; cin >> str;

    int ans = 0;

    while(N--) {
        string a; cin >> a;

        bool check = false;

        for(int i=0; i<a.length(); i++) {
            for(int j=1; j<=a.length(); j++) {
                string b = "";

                for(int k=i; k<a.length(); k+=j) {
                    b += a[k];

                    if(b.length() == str.length()) break;
                }

                if(b == str) check = true;
            }
        }

        if(check) ans++;
    }

    cout << ans << "\n";
}
