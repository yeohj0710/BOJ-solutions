#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    vector<string> v = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--..", ".----", "..---", "...--", "....-", ".....", "-....", "--...", "---..", "----.", "-----", "--..--", ".-.-.-", "..--..", "---...", "-....-", ".--.-."};
    string str = "ABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890,.?:-@";

    int N; cin >> N;

    string ans = "";

    while(N--) {
        string s; cin >> s;

        for(int i=0; i<v.size(); i++)
            if(s == v[i]) ans += str[i];
    }

    cout << ans << "\n";
}
