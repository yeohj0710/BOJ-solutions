#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        int N; cin >> N;
        cin.ignore();

        vector<string> v(N);
        for(int i=0; i<N; i++) getline(cin, v[i]);

        string str; cin >> str;

        for(int i=0; i<str.length(); i++)
            if(str[i] >= 'a' && str[i] <= 'z') str[i] += 'A' - 'a';

        cout << "Data Set " << t << ":\n";

        for(int i=0; i<N; i++) {
            string tmp = v[i];

            for(int j=0; j<tmp.length(); j++)
                if(tmp[j] >= 'a' && tmp[j] <= 'z') tmp[j] += 'A' - 'a';

            int j = 0, k = 0;

            while(j < tmp.length() && k < str.length()) {
                if(tmp[j] == str[k]) j++, k++;
                else j++;
            }

            if(k == str.length()) cout << v[i] << "\n";
        }

        cout << "\n";
    }
}
