#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;

    int N; cin >> N;

    vector<string> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    for(int i=0; i<26; i++) {
        string temp = str;

        for(int j=0; j<temp.length(); j++)
            temp[j] = char('a' + (temp[j] - 'a' + i) % 26);

        bool check = false;

        for(int j=0; j<N; j++) {
            if(v[j].length() > temp.length()) continue;

            for(int k=0; k<temp.length()-v[j].length()+1; k++)
                if(temp.substr(k, v[j].length()) == v[j]) check = true;
        }

        if(check) {
            cout << temp << "\n";
            break;
        }
    }
}
