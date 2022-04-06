#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int key[10];
    for(int i=1; i<=9; i++) cin >> key[i];

    string str; cin >> str;
    int prev = 0;
    for(int i=0; i<str.length(); i++) {
        char c = str[i];
        int num, cnt;

        if(c >= 'a' && c <= 'c') num = 2, cnt = c - 'a' + 1;
        else if(c >= 'd' && c <= 'f') num = 3, cnt = c - 'd' + 1;
        else if(c >= 'g' && c <= 'i') num = 4, cnt = c - 'g' + 1;
        else if(c >= 'j' && c <= 'l') num = 5, cnt = c - 'j' + 1;
        else if(c >= 'm' && c <= 'o') num = 6, cnt = c - 'm' + 1;
        else if(c >= 'p' && c <= 's') num = 7, cnt = c - 'p' + 1;
        else if(c >= 't' && c <= 'v') num = 8, cnt = c - 't' + 1;
        else if(c >= 'w' && c <= 'z') num = 9, cnt = c - 'w' + 1;

        int output;
        for(int j=1; j<=9; j++)
            if(key[j] == num) output = j;

        if(output == prev) cout << "#";

        for(int j=0; j<cnt; j++) cout << output;
        prev = output;
    }
}
