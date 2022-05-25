#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int cnt[26] = {};

    while(N--) {
        string a, b; cin >> a >> b;

        int temp1[26] = {}, temp2[26] = {};

        for(int i=0; i<a.length(); i++) temp1[a[i] - 'a']++;
        for(int i=0; i<b.length(); i++) temp2[b[i] - 'a']++;

        for(int i=0; i<26; i++)
            cnt[i] += max(temp1[i], temp2[i]);
    }

    for(int i=0; i<26; i++) cout << cnt[i] << "\n";
}
