#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, K; cin >> N >> K;

    string str; cin >> str;

    int cnt = 0;
    for(int i=0; i<str.length(); i++)
        if(str[i] == 'R') cnt++;

    if(cnt == K) cout << "W\n";
    else cout << "R\n";
}
