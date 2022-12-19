#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    string str; cin >> str;

    vector<vector<string>> v = {{"0000", "   1", "2222", "3333", "4  4", "5555", "6666", "7777", "8888", "9999"},
                                  {"0  0", "   1", "   2", "   3", "4  4", "5"   , "6"   , "   7", "8  8", "9  9"},
                                  {"0  0", "   1", "2222", "3333", "4444", "5555", "6666", "   7", "8888", "9999"},
                                  {"0  0", "   1", "2"   , "   3", "   4", "   5", "6  6", "   7", "8  8", "   9"},
                                  {"0000", "   1", "2222", "3333", "   4", "5555", "6666", "   7", "8888", "   9"}};

    for(int i=0; i<str.length(); i++) {
        for(int j=0; j<5; j++) {
            for(int k=0; k<v[j][str[i] - '0'].length(); k++) cout << v[j][str[i] - '0'][k];
            cout << "\n";
        }
        cout << "\n";
    }
}
