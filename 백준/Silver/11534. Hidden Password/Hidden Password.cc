#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string a, b; cin >> a >> b;

    int i = 0, j = 0;

    while(j < b.length()) {
        if(a[i] == b[j]) i++, j++;
        else {
            for(int k=i+1; k<a.length(); k++)
                if(a[k] == b[j]) {
                    cout << "FAIL\n";
                    return 0;
                }

            j++;
        }
    }

    if(i == a.length()) cout << "PASS\n";
    else cout << "FAIL\n";
}
