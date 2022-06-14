#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    string a = to_string(N);
    int cnt[10] = {};
    for(int i=0; i<a.length(); i++) cnt[a[i]-'0']++;

    for(int i=N+1; ; i++) {
        string b = to_string(i);
        if(b.length() > a.length()) break;

        int cnt2[10] = {};
        for(int j=0; j<b.length(); j++) cnt2[b[j]-'0']++;

        bool check = true;
        for(int j=0; j<10; j++)
            if(cnt[j] != cnt2[j]) check = false;

        if(check) {
            cout << i << "\n";
            return 0;
        }
    }

    cout << 0 << "\n";
}
