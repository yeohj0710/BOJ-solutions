#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; getline(cin, str);

    vector<string> v;

    string word = "";
    for(int i=0; i<str.length(); i++) {
        if(str[i] >= 'a' && str[i] <= 'z') word += str[i];
        else {
            v.push_back(word);
            word = "";
        }
    }
    v.push_back(word);

    int cnt = 0;

    for(int i=0; i<v.size(); i++) {
        bool check = false;
        for(int j=0; j<v[i].length()-1; j++)
            if(v[i][j] == 'a' && v[i][j+1] == 'e') check = true;

        if(check) cnt++;
    }

    if((double)cnt/v.size() >= 0.4) cout << "dae ae ju traeligt va\n";
    else cout << "haer talar vi rikssvenska\n";
}
