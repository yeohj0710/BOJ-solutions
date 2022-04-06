#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str[5];
    for(int i=0; i<5; i++)
        for(int j=0; j<15; j++) str[i][j] = ' ';

    for(int i=0; i<5; i++) {
        string temp; cin >> temp;
        for(int j=0; j<temp.length(); j++) str[i][j] = temp[j];
    }

    for(int j=0; j<15; j++)
        for(int i=0; i<5; i++)
            if(str[i][j] != ' ') cout << str[i][j];
}
