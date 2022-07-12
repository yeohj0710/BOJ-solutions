#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str;

    vector<int> v;

    while(getline(cin, str)) {
        string num = "";

        for(int i=11; i<str.length(); i++) {
            if(str[i] != ' ') num += str[i];
            else {
                if(num != "") v.push_back(stoll(num));
                num = "";
            }
        }
        if(num != "") v.push_back(stoll(num));
    }

    sort(v.begin(), v.end());

    cout << v.front() << " " << v.back() << "\n";
}
