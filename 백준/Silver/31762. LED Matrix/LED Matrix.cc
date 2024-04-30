#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M, K; cin >> N >> M >> K;

    bool chk = true;

    for(int i=0; i<N; i++) {
        string s1, s2; cin >> s1 >> s2;

        bool b1 = false, b2 = false;

        for(int j=0; j<s1.length(); j++)
            if(s1[j] == '-') b1 = true;

        for(int j=0; j<s2.length(); j++)
            if(s2[j] == '*') b2 = true;

        if(b1 && b2) chk = false;
    }

    if(chk) cout << "Y\n";
    else cout << "N\n";
}
