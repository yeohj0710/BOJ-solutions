#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;

    for(int i=0; i<str.length(); i++) {
        int temp = int(str[i]);

        int sum = 0;
        while(temp > 0) {
            sum += temp % 10;
            temp /= 10;
        }

        for(int j=0; j<sum; j++) cout << str[i];
        cout << "\n";
    }
}
