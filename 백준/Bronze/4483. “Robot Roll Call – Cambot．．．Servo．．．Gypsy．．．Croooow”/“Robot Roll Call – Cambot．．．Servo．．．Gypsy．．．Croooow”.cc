#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        int N; cin >> N;

        vector<string> v(N);
        for(int i=0; i<N; i++) cin >> v[i];

        int M; cin >> M;
        cin.ignore();

        vector<string> word;
        for(int i=0; i<M; i++) {
            string str; getline(cin, str);

            int prev = 0;
            for(int j=0; j<str.length(); j++)
                if(str[j] == ' ') {
                    word.push_back(str.substr(prev, j-prev));
                    prev = j+1;
                }
            word.push_back(str.substr(prev, str.length()-prev));
        }

        cout << "Test set " << t << ":\n";

        for(int i=0; i<N; i++) {
            cout << v[i] << " is ";
            bool check = false;
            for(int j=0; j<word.size(); j++)
                if(v[i] == word[j]) check = true;

            if(check) cout << "present\n";
            else cout << "absent\n";
        }

        cout << "\n";
    }
}
