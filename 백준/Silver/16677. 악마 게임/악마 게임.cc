#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;

    int N; cin >> N;

    string ans;
    double Max = -1;

    while(N--) {
        string tmp; cin >> tmp;
        double x; cin >> x;

        int i = 0, j = 0;

        while(i < str.length() && j < tmp.length()) {
            if(str[i] == tmp[j]) i++, j++;
            else j++;
        }

        if(i != str.length()) continue;

        if(x / (tmp.length() - str.length()) > Max) {
            Max = x / (tmp.length() - str.length());
            ans = tmp;
        }
    }

    if(Max != -1) cout << ans << "\n";
    else cout << "No Jam\n";
}
