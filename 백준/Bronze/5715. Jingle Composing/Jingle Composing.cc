#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    vector<pair<char, int>> v = {{'W', 64}, {'H', 32}, {'Q', 16}, {'E', 8}, {'S', 4}, {'T', 2}, {'X', 1}};

    while(true) {
        string str; cin >> str;
        if(str == "*") break;

        int sum = 0, ans = 0;
        for(int i=1; i<str.length(); i++) {
            if(str[i] == '/') {
                if(sum == 64) ans++;
                sum = 0;
            }

            for(int j=0; j<v.size(); j++)
                if(str[i] == v[j].first) sum += v[j].second;
        }

        cout << ans << "\n";
    }
}
