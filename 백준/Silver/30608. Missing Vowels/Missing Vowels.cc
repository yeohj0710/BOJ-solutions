#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    string a, b; cin >> a >> b;

    for(int i=0; i<a.length(); i++)
        if(a[i] >= 'A' && a[i] <= 'Z') a[i] += 'a' - 'A';

    for(int i=0; i<b.length(); i++)
        if(b[i] >= 'A' && b[i] <= 'Z') b[i] += 'a' - 'A';

    int i = 0, j = 0;

    while(i < a.length() && j < b.length()) {
        if(a[i] == b[j]) {
            i++, j++;
            continue;
        }

        string vow = "aeiouy";
        bool chk = false;

        for(int k=0; k<vow.length(); k++)
            if(b[j] == vow[k]) chk = true;

        if(!chk) {
            cout << "Different\n";
            return 0;
        }

        j++;
    }

    bool flag = true;
    string vow = "aeiouy";

    while(j < b.length()) {
        bool chk = false;

        for(int k=0; k<vow.length(); k++)
            if(b[j] == vow[k]) chk = true;

        if(!chk) {
            flag = false;
            break;
        }

        j++;
    }

    if(i == a.length() && flag) cout << "Same\n";
    else cout << "Different\n";
}
