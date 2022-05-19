#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str = "0";

    while(str.length() <= 100000) {
        string temp = str;
        reverse(temp.begin(), temp.end());
        for(int i=0; i<temp.length(); i++) {
            if(temp[i] == '0') temp[i] = '1';
            else temp[i] = '0';
        }
        str = str + "0" + temp;
    }

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        int N; cin >> N;

        cout << "Case #" << t << ": " << str[N-1] << "\n";
    }
}
