#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;

    int L;

    for(int i=1; i*i<=str.length(); i++)
        if(str.length() % i == 0) L = i;

    for(int i=0; i<L; i++)
        for(int j=0; j<str.length(); j+=L) cout << str[i+j];
    cout << "\n";
}
