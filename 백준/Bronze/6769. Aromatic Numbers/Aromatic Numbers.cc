#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    vector<char> v = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};
    vector<int> u = {1, 5, 10, 50, 100, 500, 1000};

    string str; cin >> str;

    int pre = 0, ans = 0;

    for(int i=str.length()-1; i>=0; i-=2) {
        int x;

        for(int j=0; j<v.size(); j++)
            if(v[j] == str[i]) x = u[j];

        if(x < pre) ans -= (str[i-1] - '0') * x;
        else ans += (str[i-1] - '0') * x;

        pre = x;
    }

    cout << ans << "\n";
}
