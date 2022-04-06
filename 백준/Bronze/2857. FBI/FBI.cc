#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    bool exist = false;

    for(int i=0; i<5; i++) {
        string str; cin >> str;

        if(str.length() < 3) continue;

        for(int j=2; j<str.length(); j++)
            if(str[j-2] == 'F' && str[j-1] == 'B' && str[j] == 'I') {
                cout << i+1 << " ";
                exist = true;
                break;
            }
    }

    if(!exist) cout << "HE GOT AWAY!";
}
