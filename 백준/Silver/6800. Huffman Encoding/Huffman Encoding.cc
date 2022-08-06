#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<pair<char, string>> v(N);
    for(int i=0; i<N; i++)
        cin >> v[i].first >> v[i].second;

    string str; cin >> str;

    string ans = "";

    int i = 0;

    while(i < str.length()) {
        for(int j=0; j<N; j++)
            if(str.length() - i >= v[j].second.length()
               && str.substr(i, v[j].second.length()) == v[j].second) {
                ans += v[j].first;
                i += v[j].second.length();

                break;
            }
    }

    cout << ans << "\n";
}
