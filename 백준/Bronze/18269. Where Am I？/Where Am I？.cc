#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    string str; cin >> str;

    for(int i=1; i<=str.length(); i++) {
        vector<string> v;

        for(int j=0; j<str.length()-i+1; j++)
            v.push_back(str.substr(j, i));

        int x = v.size();

        sort(v.begin(), v.end());
        v.erase(unique(v.begin(), v.end()), v.end());

        if(x == v.size()) {
            cout << i << "\n";
            break;
        }
    }
}
