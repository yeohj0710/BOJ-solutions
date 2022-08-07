#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string s[7] = {"Bessie", "Elsie", "Daisy", "Gertie", "Annabelle", "Maggie", "Henrietta"};

    map<string, int> m;

    int N; cin >> N;

    while(N--) {
        string str; cin >> str;
        int x; cin >> x;

        m[str] += x;
    }

    int Min = INT_MAX;

    for(int i=0; i<7; i++) Min = min(Min, m[s[i]]);

    int Min2 = INT_MAX;
    string ans;

    for(int i=0; i<7; i++)
        if(m[s[i]] > Min) Min2 = min(Min2, m[s[i]]);

    int cnt = 0;

    for(int i=0; i<7; i++)
        if(m[s[i]] == Min2) cnt++;

    if(cnt >= 2 || Min2 == INT_MAX) {
        cout << "Tie\n";
        return 0;
    }

    for(int i=0; i<7; i++)
        if(m[s[i]] == Min2) cout << s[i] << "\n";
}
