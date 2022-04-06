#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int N, idx;
    cin >> N;
    while(N--) {
        string str;
        cin >> idx >> str;
        for(int i=0; i<str.length(); i++)
            if(i+1 != idx) cout << str[i];
        cout << "\n";
    }
}
