#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;

    int cnt = 0, Max = 0;
    for(int i=0; i<str.length(); i++) {
        if(str[i] == 'a') cnt++;
        else {
            Max = max(Max, cnt);
            cnt = 0;
        }
    }
    Max = max(Max, cnt);

    for(int i=0; i<Max+1; i++) cout << "a";
}

