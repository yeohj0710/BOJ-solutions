#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;

    bool odd = true;
    for(int i=0; i<str.length(); i++)
        for(int j=i+1; j<str.length(); j++) {
            bool check = true;
            for(int k=0; k<=j-i; k++)
                if(str[i+k] != str[j-k]) check = false;

            if(check && (j-i+1) % 2 == 0) odd = false;
        }

    if(odd) cout << "Odd.\n";
    else cout << "Or not.\n";
}
