#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios_base::sync_with_stdio(0), cin.tie(0);

    int N, M; cin >> N >> M;

    int A, B, C; cin >> A >> B >> C;

    unordered_map<string, bool> m;

    while(M--) {
        string str; char ch; cin >> str >> ch;

        if(ch == 'W') m[str] = true;
    }

    int sum = 0;
    bool check = false;

    while(N--) {
        string str; cin >> str;

        if(m[str]) sum += A;
        else sum = max(sum - B, (int)0);

        if(sum >= C) check = true;
    }

    if(check) cout << "I AM NOT IRONMAN!!\n";
    else cout << "I AM IRONMAN!!\n";
}
