#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    string str1, str2; cin >> str1 >> str2;

    for(int i=0; i<N; i++)
        for(int j=0; j<str1.length(); j++) {
            if(str1[j] == '0') str1[j] = '1';
            else if(str1[j] == '1') str1[j] = '0';
        }

    if(str1 == str2) cout << "Deletion succeeded\n";
    else cout << "Deletion failed\n";
}
