#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;

    vector<int> v(10);
    for(int i=0; i<str.length(); i++) v[str[i] - '0']++;

    int Min = INT_MAX, idx;

    for(int i=1; i<=9; i++)
        if(v[i] < Min) {
            Min = v[i];
            idx = i;
        }

    if(v[0] < v[idx]) idx = 0;

    if(idx != 0) {
        for(int i=0; i<v[idx] + 1; i++) cout << idx;
        cout << "\n";
    }
    else {
        cout << 1;
        for(int i=0; i<v[idx] + 1; i++) cout << idx;
        cout << "\n";
    }
}
