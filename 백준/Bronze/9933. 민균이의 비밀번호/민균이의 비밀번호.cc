#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    map<string, bool> m;

    int len;
    char ch;

    while(N--) {
        string str; cin >> str;

        m[str] = true;

        reverse(str.begin(), str.end());

        if(m[str]) len = str.length(), ch = str[str.length()/2];
    }

    cout << len << " " << ch << "\n";
}
