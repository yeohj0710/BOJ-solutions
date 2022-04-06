#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;
    while(N--) {
        string str; cin >> str;
        for(int i=0; i<str.length(); i++) {
            if(str[i] >= 'A' && str[i] <= 'Z') cout << (char)(str[i]+'a'-'A');
            else cout << str[i];
        }
        cout << "\n";
    }
}
