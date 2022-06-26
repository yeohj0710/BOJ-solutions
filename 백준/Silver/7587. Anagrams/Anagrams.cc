#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int N; cin >> N;
        if(N == 0) break;

        vector<string> v;
        map<string, int> m;

        while(N--) {
            string str; cin >> str;
            v.push_back(str);

            sort(str.begin(), str.end());
            m[str]++;
        }

        string ans;
        int Max = 0;

        for(int i=0; i<v.size(); i++) {
            string temp = v[i];
            sort(temp.begin(), temp.end());

            if(m[temp] > Max) {
                ans = v[i];
                Max = m[temp];
            }
        }

        cout << ans << " " << Max - 1 << "\n";
    }
}
