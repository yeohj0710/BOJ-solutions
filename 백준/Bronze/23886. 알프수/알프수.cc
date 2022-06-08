#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;
    int N = str.length();

    bool check = true;

    if(str[0] >= str[1]) check = false;
    if(str[N-2] <= str[N-1]) check = false;

    for(int i=0; i<N-2; i++) {
        if(str[i] < str[i+1] && str[i+1] < str[i+2]) {
            if(str[i+1] - str[i] != str[i+2] - str[i+1]) check = false;
        }
        if(str[i] > str[i+1] && str[i+1] > str[i+2]) {
            if(str[i+1] - str[i] != str[i+2] - str[i+1]) check = false;
        }
    }

    for(int i=0; i<N-1; i++)
        if(str[i] == str[i+1]) check = false;

    if(check) cout << "ALPSOO\n";
    else cout << "NON ALPSOO\n";
}
