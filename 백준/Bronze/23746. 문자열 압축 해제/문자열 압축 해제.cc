#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<pair<string, char>> v(N);

    for(int i=0; i<N; i++) {
        string a; char b; cin >> a >> b;

        v[i] = {a, b};
    }

    string str; cin >> str;

    string temp = "";

    for(int i=0; i<str.length(); i++)
        for(int j=0; j<N; j++)
            if(v[j].second == str[i]) temp += v[j].first;

    int x, y; cin >> x >> y;

    cout << temp.substr(x-1, y-x+1) << "\n";
}
