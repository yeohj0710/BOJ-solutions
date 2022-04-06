#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    for(int i=1; i<=N; i++) {
        string str; cin >> str;

        cout << "String #" << i << "\n";
        for(int j=0; j<str.length(); j++) cout << char((str[j]-'A'+1)%26 + 'A');
        cout << "\n\n";
    }
}
