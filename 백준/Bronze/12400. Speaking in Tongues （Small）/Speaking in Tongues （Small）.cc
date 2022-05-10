#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string a = "ejp mysljylc kd kxveddknmc re jsicpdrysi rbcpc ypc rtcsra dkh wyfrepkym veddknkmkrkcd de kr kd eoya kw aej tysr re ujdr lkgc jv qz";
    string b = "our language is impossible to understand there are twenty six factorial possibilities so it is okay if you want to just give up zq";

    int T; cin >> T;
    cin.ignore();

    for(int t=1; t<=T; t++) {
        cout << "Case #" << t << ": ";

        string str; getline(cin, str);

        for(int i=0; i<str.length(); i++)
            for(int j=0; j<a.length(); j++)
                if(str[i] == a[j]) {
                    cout << b[j];
                    break;
                }

        cout << "\n";
    }
}
