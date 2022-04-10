#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;

    int L = str.length();

    for(int i=0; i<L; i++) {
        if(str[i] == 'X') {
            if(i+3 < L && str[i+1] == 'X' && str[i+2] == 'X' && str[i+3] == 'X')
                str[i] = str[i+1] = str[i+2] = str[i+3] = 'A';
            else if(i+1 < L && str[i+1] == 'X')
                str[i] = str[i+1] = 'B';
        }
    }

    bool check = true;
    for(int i=0; i<L; i++)
        if(str[i] == 'X') check = false;

    if(!check) cout << "-1";
    else cout << str;
}
