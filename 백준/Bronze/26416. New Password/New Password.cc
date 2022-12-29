#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    cin.tie(0)->sync_with_stdio(0);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        int N; string str; cin >> N >> str;

        bool check = false;

        for(int i=0; i<str.length(); i++)
            if(str[i] >= 'A' && str[i] <= 'Z') check = true;

        if(!check) str += 'A';

        check = false;

        for(int i=0; i<str.length(); i++)
            if(str[i] >= 'a' && str[i] <= 'z') check = true;

        if(!check) str += 'a';

        check = false;

        for(int i=0; i<str.length(); i++)
            if(str[i] >= '0' && str[i] <= '9') check = true;

        if(!check) str += '0';

        check = false;

        for(int i=0; i<str.length(); i++)
            if(str[i] == '#' || str[i] == '@' || str[i] == '*' || str[i] == '&') check = true;

        if(!check) str += '#';

        while(str.length() < 7) str += 'a';

        cout << "Case #" << t << ": " << str << "\n";
    }
}
