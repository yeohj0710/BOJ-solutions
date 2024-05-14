#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    string s1 = "", s2 = "";

    for(int i=0; i<N; i++) {
        string s; cin >> s;

        s1 += s;
    }

    for(int i=0; i<N; i++) {
        string s; cin >> s;

        s2 += s;
    }

    if(s1.length() < s2.length()) {
        cout << s1 << "\n";

        return 0;
    }

    if(s1.length() > s2.length()) {
        cout << s2 << "\n";

        return 0;
    }

    for(int i=0; i<s1.length(); i++) {
        if(s1[i] < s2[i]) {
            cout << s1 << "\n";

            return 0;
        }
        if(s1[i] > s2[i]) {
            cout << s2 << "\n";

            return 0;
        }
    }

    cout << s1 << "\n";
}
