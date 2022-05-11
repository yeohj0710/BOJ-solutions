#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    string str; cin >> str;

    for(int i=0; i<N; i++) cout << "***";
    cout << "\n";

    for(int i=0; i<N; i++) {
        if(str[i] == 'A' || str[i] == 'B' || str[i] == 'D') cout << "*.*";
        else cout << "*..";
    }
    cout << "\n";

    for(int i=0; i<N; i++) {
        if(str[i] == 'A' || str[i] == 'B' || str[i] == 'E') cout << "***";
        else if(str[i] == 'C') cout << "*..";
        else cout << "*.*";
    }
    cout << "\n";

    for(int i=0; i<N; i++) {
        if(str[i] == 'A' || str[i] == 'B' || str[i] == 'D') cout << "*.*";
        else cout << "*..";
    }
    cout << "\n";

    for(int i=0; i<N; i++) {
        if(str[i] == 'A') cout << "*.*";
        else cout << "***";
    }
    cout << "\n";
}
