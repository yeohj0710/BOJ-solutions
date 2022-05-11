#include <bits/stdc++.h>
using namespace std;

const int MAX = 5;

int arr[MAX][MAX];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        string str; cin >> str;

        int cnt[26] = {};
        for(int i=0; i<str.length(); i++) {
            if(str[i] >= 'A' && str[i] <= 'Z') cnt[str[i] - 'A']++;
            else if(str[i] >= 'a' && str[i] <= 'z') cnt[str[i] - 'a']++;
        }

        bool check = true;
        for(int i=0; i<13; i++)
            if(cnt[i] != cnt[25-i]) check = false;

        if(check) cout << "Yes\n";
        else cout << "No\n";
    }
}
