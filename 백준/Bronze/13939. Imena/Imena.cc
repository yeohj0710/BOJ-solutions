#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;
    cin.ignore();

    string str; getline(cin, str);

    vector<vector<string>> word(N);

    int cur = 0;
    string temp = "";

    for(int i=0; i<str.length(); i++) {
        if(str[i] == '.' || str[i] == '?' || str[i] == '!') {
            word[cur].push_back(temp);
            temp = "";

            cur++;
        }

        if(str[i] == ' ') {
            word[cur].push_back(temp);
            temp = "";
        }
        else temp += str[i];
    }

    for(int i=0; i<N; i++) {
        int cnt = 0;
        for(int j=0; j<word[i].size(); j++) {
            string temp = word[i][j];

            bool check = true;
            for(int k=1; k<temp.length(); k++)
                if(!(temp[k] >= 'a' && temp[k] <= 'z')) check = false;

            if(temp[0] >= 'A' && temp[0] <= 'Z' && check) cnt++;
        }

        cout << cnt << "\n";
    }
}
