#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        string str; getline(cin, str);

        if(str == "EOI") break;

        if(str.length() < 4) {
            cout << "Missing\n";
            continue;
        }

        for(int i=0; i<str.length(); i++)
            if(str[i] >= 'A' && str[i] <= 'Z') str[i] += 'a' - 'A';

        bool found = false;
        for(int i=3; i<str.length(); i++)
            if(str[i-3] == 'n' && str[i-2] == 'e' && str[i-1] == 'm' && str[i] == 'o') found = true;

        if(found) cout << "Found\n";
        else cout << "Missing\n";
    }
}
