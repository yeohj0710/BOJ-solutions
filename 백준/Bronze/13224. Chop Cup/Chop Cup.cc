#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int curr = 1;

    string str; cin >> str;
    for(int i=0; i<str.length(); i++) {
        if(str[i] == 'A') {
            if(curr == 1) curr = 2;
            else if(curr == 2) curr = 1;
        }
        else if(str[i] == 'B') {
            if(curr == 2) curr = 3;
            else if(curr == 3) curr = 2;
        }
        else {
            if(curr == 1) curr = 3;
            else if(curr == 3) curr = 1;
        }
    }

    cout << curr;
}
