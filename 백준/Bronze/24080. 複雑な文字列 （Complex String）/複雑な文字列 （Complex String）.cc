#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int cnt[5] = {};

    string str; cin >> str;
    for(int i=0; i<N; i++) cnt[str[i] - 'A']++;

    int type = 0;
    for(int i=0; i<5; i++)
        if(cnt[i] > 0) type++;

    if(type >= 3) cout << "Yes\n";
    else cout << "No\n";
}
