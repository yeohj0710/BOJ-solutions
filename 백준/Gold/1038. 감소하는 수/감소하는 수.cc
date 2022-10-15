#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<int> v;

void f(string str) {
    int x = 0;

    for(int i=0; i<str.length(); i++)
        x = x * 10 + (str[i] - '0');

    v.push_back(x);

    if(str.back() == '0') return;

    for(int i=str.back()-'0'-1; i>=0; i--) f(str + char('0' + i));
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    for(int i=0; i<=9; i++) {
        string str = "";

        str += char('0' + i);

        f(str);
    }

    sort(v.begin(), v.end());

    if(N < v.size()) cout << v[N] << "\n";
    else cout << -1 << "\n";
}
