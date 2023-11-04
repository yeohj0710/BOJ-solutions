#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    string str; getline(cin, str);

    string s1 = "HAPY", s2 = "SAD";

    int a = 0, b = 0;

    for(int i=0; i<str.length(); i++) {
        for(int j=0; j<s1.length(); j++)
            if(str[i] == s1[j]) a++;

        for(int j=0; j<s2.length(); j++)
            if(str[i] == s2[j]) b++;
    }

    cout << fixed << setprecision(2);

    if(a == 0 && b == 0) cout << 50.00 << "\n";
    else cout << (double)a * 100 / (a + b) + 1e-9 << "\n";
}
