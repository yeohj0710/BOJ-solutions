#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    for(int t=1; ; t++) {
        int N; cin >> N;
        if(N == 0) break;

        set<string> s;
        s.insert("a");

        while(N--) {
            string a, op, b; cin >> a >> op >> b;

            if(s.count(a) == 0 && s.count(b) > 0) s.insert(a);
            else if(s.count(a) > 0 && s.count(b) == 0) s.erase(a);
        }

        cout << "Program #" << t << "\n";

        if(s.size() > 0) {
            for(auto i : s) cout << i << " ";
        }
        else cout << "none";

        cout << "\n\n";
    }
}
