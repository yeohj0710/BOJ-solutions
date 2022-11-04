#include <bits/stdc++.h>
#define int long long
using namespace std;

main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    string str; cin >> str;

    int M; cin >> M;

    bool check = false;

    for(int i=0; i<str.length(); i++)
        if(str[i] == '1') check = true;

    if(!check) {
        cout << "YES\n";
        return 0;
    }

    reverse(str.begin(), str.end());

    bool b1 = true, b2 = false;

    for(int i=0; i<str.length(); i++) {
        if(str[i] == '0') continue;

        if(i < M) b1 = false;
        else b2 = true;
    }

    if(b1 && b2) cout << "YES\n";
    else cout << "NO\n";
}
