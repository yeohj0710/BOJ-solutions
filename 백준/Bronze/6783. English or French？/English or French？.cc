#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;
    cin.ignore();

    int s = 0, t = 0;

    while(N--) {
        string str; getline(cin, str);

        for(int i=0; i<str.length(); i++) {
            if(str[i] == 's' || str[i] == 'S') s++;
            else if(str[i] == 't' || str[i] == 'T') t++;
        }
    }

    if(t > s) cout << "English\n";
    else cout << "French\n";
}
