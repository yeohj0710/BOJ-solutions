#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    string str; cin >> str;

    while(N--) {
        string s = "";

        for(int i=1; i<str.length(); i+=2)
            for(int j=0; j<(str[i-1] - '0'); j++) s += str[i];

        str = s;
    }

    cout << str[M] << "\n";
}
