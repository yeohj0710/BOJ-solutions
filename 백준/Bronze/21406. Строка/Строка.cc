#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    string str = "";

    for(int i=1; i<=N; i++) {
        bool chk = false;

        string num = to_string(i);

        for(int j=0; j<str.length()-num.length()+1; j++)
            if(str.substr(j, num.length()) == num) chk = true;

        if(!chk) str += num;
    }

    cout << str << "\n";
}
