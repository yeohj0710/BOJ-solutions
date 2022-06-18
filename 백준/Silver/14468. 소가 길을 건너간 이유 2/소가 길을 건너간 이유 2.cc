#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;

    vector<pair<int, int>> v(26, {-1, -1});
    for(int i=0; i<str.length(); i++) {
        if(v[str[i] - 'A'].first == -1) v[str[i] - 'A'].first = i;
        else v[str[i] - 'A'].second = i;
    }

    int ans = 0;
    for(int i=0; i<26; i++)
        for(int j=i+1; j<26; j++)
            if((v[i].first < v[j].first && v[j].first < v[i].second && v[i].second < v[j].second)
                ||(v[j].first < v[i].first && v[i].first < v[j].second && v[j].second < v[i].second)) ans++;

    cout << ans << "\n";
}
