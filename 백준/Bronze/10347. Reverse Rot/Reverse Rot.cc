#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string shift = "ABCDEFGHIJKLMNOPQRSTUVWXYZ_.";

    while(true) {
        int N; cin >> N;
        if(N == 0) break;

        string str; cin >> str;
        reverse(str.begin(), str.end());

        for(int i=0; i<str.length(); i++)
            for(int j=0; j<shift.length(); j++)
                if(str[i] == shift[j]) {
                    str[i] = shift[(j + N) % shift.length()];
                    break;
                }

        cout << str << "\n";
    }
}
