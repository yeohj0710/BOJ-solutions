#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str;

    vector<string> v;
    map<string, int> m;
    int tot = 0;

    while(getline(cin, str)) {
        if(m[str] == 0) v.push_back(str);

        m[str]++;
        tot++;
    }

    sort(v.begin(), v.end());

    cout << fixed;
    cout.precision(4);

    for(int i=0; i<v.size(); i++)
        cout << v[i] << " " << (double)m[v[i]] * 100 / tot << "\n";
}
