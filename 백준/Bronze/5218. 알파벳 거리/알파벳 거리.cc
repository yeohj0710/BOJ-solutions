#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;
    while(N--) {
        string str1, str2;
        cin >> str1 >> str2;
        cout << "Distances: ";
        for(int i=0; i<str1.length(); i++) {
            if(str2[i] >= str1[i]) cout << str2[i]-str1[i] << " ";
            else cout << str2[i]-str1[i]+26 << " ";
        }
        cout << "\n";
    }
}
