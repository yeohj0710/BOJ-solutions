#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    map<string, bool> m;

    while(N--) {
        string str; cin >> str;

        string temp = str;

        sort(temp.begin(), temp.end());

        if(!m[temp]) cout << str << "\n";

        m[temp] = true;
    }
}
