#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    string str; cin >> str;

    for(int i=0; i<26; i++) {
        for(int j=0; j<str.length(); j++)
            str[j] = 'a' + (str[j] - 'a' + 1) % 26;

        if(str == "northlondo") {
            cout << "NLCS\n";
            break;
        }
        else if(str == "branksomeh") {
            cout << "BHA\n";
            break;
        }
        else if(str == "koreainter") {
            cout << "KIS\n";
            break;
        }
        else if(str == "stjohnsbur") {
            cout << "SJA\n";
            break;
        }
    }
}
