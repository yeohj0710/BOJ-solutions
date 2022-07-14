#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    vector<bool> prime((int)(1e7 + 1), true);
    prime[1] = false;

    for(int i=2; i*i<=(int)(1e7); i++)
        for(int j=2; i*j<=(int)(1e7); j++) prime[i*j] = false;

    int a, b; cin >> a >> b;

    if(b > (int)(1e7)) b = (int)(1e7);

    for(int i=a; i<=b; i++) {
        if(!prime[i]) continue;

        string str = to_string(i);

        bool check = true;
        for(int j=0; j<str.length()/2; j++)
            if(str[j] != str[str.length()-1-j]) check = false;

        if(check) cout << i << "\n";
    }

    cout << -1 << "\n";
}
