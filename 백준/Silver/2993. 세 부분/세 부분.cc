#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;

    vector<string> v;

    for(int i=0; i<str.length()-1; i++)
        for(int j=i+1; j<str.length()-1; j++) {
            string a = str.substr(0, i+1);
            string b = str.substr(i+1, j-i);
            string c = str.substr(j+1, str.length()-j);

            reverse(a.begin(), a.end());
            reverse(b.begin(), b.end());
            reverse(c.begin(), c.end());

            string temp = a + b + c;

            v.push_back(temp);
        }

    sort(v.begin(), v.end());

    cout << v[0] << "\n";
}
