#include <bits/stdc++.h>
#define int long long
using namespace std;

int f(char ch) {
    if(ch >= 'a' && ch <= 'z') return 0;
    else if(ch >= 'A' && ch <= 'Z') return 1;
    else return 2;
}

bool cmp(char a, char b) {
    int x = f(a), y = f(b);

    if(x != y) return x < y;
    else return a < b;
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    while(true) {
        string str; cin >> str;

        if(str == "#") break;

        sort(str.begin(), str.end(), cmp);

        cout << str << "\n";
    }
}
