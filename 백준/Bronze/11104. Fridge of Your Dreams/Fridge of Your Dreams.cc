#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        string str; cin >> str;

        int sum = 0;
        for(int i=0; i<24; i++)
            if(str[24-i-1] == '1') sum += pow(2, i);

        cout << sum << "\n";
    }
}
