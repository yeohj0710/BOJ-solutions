#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string v[10] = {"", "", "abc", "def", "ghi", "jkl",
                     "mno", "pqrs", "tuv", "wxyz"};

    int N; cin >> N;

    vector<string> u(N);
    for(int i=0; i<N; i++) cin >> u[i];

    string num; cin >> num;

    int ans = 0;
    for(int i=0; i<N; i++) {
        if(u[i].length() != num.length()) continue;

        bool b1 = true;

        for(int j=0; j<u[i].length(); j++) {
            bool b2 = false;

            for(int k=0; k<v[num[j] - '0'].length(); k++)
                if(u[i][j] == v[num[j] - '0'][k]) b2 = true;

            if(!b2) b1 = false;
        }

        if(b1) ans++;
    }

    cout << ans << "\n";
}
