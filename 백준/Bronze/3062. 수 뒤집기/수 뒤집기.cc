#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;
    while(T--) {
        int n; cin >> n;
        string str = to_string(n);
        reverse(str.begin(), str.end());
        string temp = to_string(n + stoi(str));
        bool check = true;
        for(int i=0; i<temp.length()/2; i++)
            if(temp[i] != temp[temp.length()-1-i]) check = false;
        if(check) cout << "YES\n";
        else cout << "NO\n";
    }
}
