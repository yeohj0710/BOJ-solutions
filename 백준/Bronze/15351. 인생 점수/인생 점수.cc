#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;
    cin.ignore();

    while(T--) {
        string str; getline(cin, str);

        int sum = 0;
        for(int i=0; i<str.length(); i++)
            if(str[i] >= 'A' && str[i] <= 'Z') sum += str[i] - 'A' + 1;

        if(sum == 100) cout << "PERFECT LIFE\n";
        else cout << sum << "\n";
    }
}
