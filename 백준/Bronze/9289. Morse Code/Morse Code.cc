#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string a[26] = {".-", "-...", "-.-.", "-..", ".",
                     "..-.", "--.", "....", "..", ".---",
                     "-.-", ".-..", "--", "-.", "---",
                     ".--.", "--.-", ".-.", "...", "-",
                     "..-", "...-", ".--", "-..-", "-.--",
                     "--.."};

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        cout << "Case " << t << ": ";

        for(int i=0; i<5; i++) {
            string ch; cin >> ch;

            for(int j=0; j<26; j++)
                if(ch == a[j]) cout << char('A' + j);
        }

        cout << "\n";
    }
}
