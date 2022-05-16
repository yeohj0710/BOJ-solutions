#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        string str; cin >> str;

        bool valid = true;

        if(str.length() < 12) valid = false;

        bool check = false;
        for(int i=0; i<N; i++)
            if(str[i] >='a' && str[i] <= 'z') check = true;
        if(!check) valid = false;

        check = false;
        for(int i=0; i<N; i++)
            if(str[i] >='A' && str[i] <= 'Z') check = true;
        if(!check) valid = false;

        check = false;
        for(int i=0; i<N; i++)
            if(str[i] >='0' && str[i] <= '9') check = true;
        if(!check) valid = false;

        string sym = "+_)(*&^%$#@!./,;{}";

        check = false;
        for(int i=0; i<N; i++)
            for(int j=0; j<sym.length(); j++)
                if(str[i] == sym[j]) check = true;
        if(!check) valid = false;

        if(valid) cout << "valid\n";
        else cout << "invalid\n";
    }
}

