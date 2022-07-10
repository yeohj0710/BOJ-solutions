#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string a; cin >> a;

    int N; cin >> N;

    while(N--) {
        string b; cin >> b;

        if(b.length() < 4) continue;

        bool check = false;
        for(int i=0; i<b.length(); i++)
            if(b[i] == a[0]) check = true;
        if(!check) continue;

        bool b1 = true;
        for(int i=0; i<b.length(); i++) {
            check = false;
            for(int j=0; j<a.length(); j++)
                if(b[i] == a[j]) check = true;
            if(!check) b1 = false;
        }
        if(!b1) continue;

        cout << b << "\n";
    }
}
