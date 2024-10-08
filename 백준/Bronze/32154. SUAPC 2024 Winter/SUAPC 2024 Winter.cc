#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    vector<string> v = {"ABCDEFGHJLM", "ACEFGHILM", "ACEFGHILM", "ABCEFGHLM", "ACEFGHLM", "ACEFGHLM", "ACEFGHLM", "ACEFGHLM", "ACEFGHLM", "ABCFGHLM"};

    int x; cin >> x;

    cout << v[x-1].size() << "\n";

    for(int i=0; i<v[x-1].size(); i++) cout << v[x-1][i] << " ";
    cout << "\n";
}
