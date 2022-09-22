#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;
    cin.ignore();

    for(int t=1; t<=T; t++) {
        string str; getline(cin, str);

        vector<int> v(26);

        for(int i=0; i<str.length(); i++) {
            if(str[i] >= 'a' && str[i] <= 'z') v[str[i] - 'a']++;
            else if(str[i] >= 'A' && str[i] <= 'Z') v[str[i] - 'A']++;
        }

        int Min = INT_MAX;
        for(int i=0; i<26; i++) Min = min(Min, v[i]);

        cout << "Case " << t << ": ";

        if(Min == 0) cout << "Not a pangram\n";
        else if(Min == 1) cout << "Pangram!\n";
        else if(Min == 2) cout << "Double pangram!!\n";
        else if(Min >= 3) cout << "Triple pangram!!!\n";
    }
}
