#include <bits/stdc++.h>
#define int long long
using namespace std;

int N, ans = 0;

void f(string str, int sum) {
    if(sum == 13) {
        bool check = false;
        for(int i=1; i<str.length(); i++)
            if(str[i-1] == '1' && str[i] == '3') check = true;

        if(check) ans++;
    }

    for(int i=0; i<10; i++) {
        if(str == "" && i == 0) continue;
        if(sum + i > 13) continue;

        string tmp = str + char('0' + i);

        if(stoll(tmp) > N) continue;

        f(tmp, sum + i);
    }
}

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    cin >> N;

    f("", 0);

    cout << ans << "\n";
}
