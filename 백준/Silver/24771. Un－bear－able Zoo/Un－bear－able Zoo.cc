#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    for(int t=1; ; t++) {
        int N; cin >> N;
        if(N == 0) break;

        cin.ignore();

        map<string, int> m;
        vector<string> v;

        while(N--) {
            string str; getline(cin, str);

            string name = "";

            for(int i=str.length()-1; i>=0; i--) {
                if(str[i] == ' ') break;

                name = str[i] + name;
            }

            for(int j=0; j<name.length(); j++)
                if(name[j] >= 'A' && name[j] <= 'Z') name[j] += 'a' - 'A';

            m[name]++;
            v.push_back(name);
        }

        sort(v.begin(), v.end());
        v.erase(unique(v.begin(), v.end()), v.end());

        cout << "List " << t << ":\n";

        for(int i=0; i<v.size(); i++)
            cout << v[i] << " | " << m[v[i]] << "\n";
    }
}
