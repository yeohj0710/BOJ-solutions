#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N;

    while(cin >> N) {
        int ans = 0;

        vector<string> v;

        while(N--) {
            string str; cin >> str;

            bool cnt[10] = {};
            for(int i=0; i<str.length(); i++) cnt[str[i] - '0'] = true;

            string temp = "";
            for(int i=0; i<10; i++)
                if(cnt[i]) temp += char('0' + i);

            v.push_back(temp);
        }

        sort(v.begin(), v.end());
        v.erase(unique(v.begin(), v.end()), v.end());

        cout << v.size() << "\n";
    }
}
