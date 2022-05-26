#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        string str; cin >> str;

        int cnt = 0;

        string vowel = "aeiou";

        for(int i=0; i<str.length(); i++)
            for(int j=0; j<vowel.length(); j++)
                if(str[i] == vowel[j]) cnt++;

        cout << "The number of vowels in " << str << " is " << cnt << ".\n";
    }
}
