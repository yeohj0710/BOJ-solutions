#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a, b; cin >> a >> b;

    for(int i=a; i<=b; i++) {
        string str = to_string(i);

        bool check = true;
        for(int i=0; i<str.length(); i++)
            if(str[i] != str[str.length()-1-i]) check = false;

        if(check) cout << "Palindrome!\n";
        else cout << i << "\n";
    }
}

