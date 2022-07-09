#include <bits/stdc++.h>
#define int long long
using namespace std;

bool cmp(string a, string b) {
    bool cnt[26] = {};
    for(int i=0; i<a.length(); i++)
        if(a[i] >= 'A' && a[i] <= 'Z') cnt[a[i] - 'A'] = true;
    int x = 0;
    for(int i=0; i<26; i++)
        if(cnt[i]) x++;

    for(int i=0; i<26; i++) cnt[i] = false;
    for(int i=0; i<b.length(); i++)
        if(b[i] >= 'A' && b[i] <= 'Z') cnt[b[i] - 'A'] = true;
    int y = 0;
    for(int i=0; i<26; i++)
        if(cnt[i]) y++;

    if(x != y) return x > y;
    else return a < b;
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        int N; cin >> N;
        cin.ignore();

        vector<string> v(N);
        for(int i=0; i<N; i++) getline(cin, v[i]);

        sort(v.begin(), v.end(), cmp);

        cout << "Case #" << t << ": " << v[0] << "\n";
    }
}
