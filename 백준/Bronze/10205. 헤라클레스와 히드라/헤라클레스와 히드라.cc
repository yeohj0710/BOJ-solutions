#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        int N; cin >> N;

        string str; cin >> str;

        for(int i=0; i<str.length(); i++) {
            if(str[i] == 'c') N++;
            else N--;
        }

        cout << "Data Set " << t << ":\n";
        cout << N << "\n\n";
    }
}
