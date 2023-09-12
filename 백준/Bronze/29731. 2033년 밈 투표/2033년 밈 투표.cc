#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    vector<string> v = {"Never gonna give you up", "Never gonna let you down", "Never gonna run around and desert you", "Never gonna make you cry", "Never gonna say goodbye", "Never gonna tell a lie and hurt you", "Never gonna stop"};

    int N; cin >> N;
    cin.ignore();

    bool chk = true;

    while(N--) {
        string line; getline(cin, line);

        bool flag = false;

        for(int i=0; i<v.size(); i++)
            if(line == v[i]) flag = true;

        if(!flag) chk = false;
    }

    if(chk) cout << "No\n";
    else cout << "Yes\n";
}
