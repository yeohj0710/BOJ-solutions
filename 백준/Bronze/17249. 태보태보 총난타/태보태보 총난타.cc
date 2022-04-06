#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;
    int Left = 0, Right = 0, check = 0;
    for(int i=0; i<str.length(); i++) {
        if(str[i] == '(') check = 1;
        if(str[i] == '@') {
            if(!check) Left++;
            else Right++;
        }
    }
    cout << Left << " " << Right;
}
