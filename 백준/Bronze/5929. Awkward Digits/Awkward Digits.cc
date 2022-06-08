#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string a, b; cin >> a >> b;

    for(int i=0; i<a.length(); i++)
        for(int j=0; j<b.length(); j++)
            for(int k=0; k<3; k++) {
                if(b[j] == k + '0') continue;

                string c = a, d = b;

                if(a[i] == '0') c[i] = '1';
                else c[i] = 0;

                d[j] = char(k + '0');

                int x = 0, y = 0;
                for(int l=0; l<c.length(); l++)
                    if(c[l] == '1') x += pow(2, c.length()-1-l);
                for(int l=0; l<d.length(); l++) {
                    if(d[l] == '1') y += pow(3, d.length()-1-l);
                    else if(d[l] == '2') y += pow(3, d.length()-1-l) * 2;
                }

                if(x == y) {
                    cout << x << "\n";
                    return 0;
                }
            }
}
