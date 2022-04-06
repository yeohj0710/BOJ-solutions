#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;
    string str; cin >> str;

    for(int i=0; i<N; i++) {
        if(str[i] != '?') cout << str[i];
        else if(str[str.length()-i-1] != '?') cout << str[str.length()-i-1];
        else cout << "a";
    }
}
