#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    string str; cin >> str;

    int a = 0, b = 0;

    string aa = "YONSEI", bb = "KOREA";

    for(int i=0; i<str.length(); i++) {
        if(str[i] == aa[a]) a++;
        if(str[i] == bb[b]) b++;

        if(a == aa.length()) {
            cout << aa << "\n";
            break;
        } else if(b == bb.length()) {
            cout << bb << "\n";
            break;
        }
    }
}
