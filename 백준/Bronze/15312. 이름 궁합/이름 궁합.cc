#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a[] = {3, 2, 1, 2, 3, 3, 2, 3, 3, 2, 2, 1, 2, 2, 1, 2, 2, 2, 1, 2, 1, 1, 1, 2, 2, 1};

    string x, y; cin >> x >> y;

    string str = "";
    for(int i=0; i<x.length(); i++) {
        str += char(a[x[i] - 'A'] + '0');
        str += char(a[y[i] - 'A'] + '0');
    }

    for(int i=str.length(); i>2; i--) {
        string temp = "";

        for(int j=0; j<i-1; j++)
            temp += char(((str[j] - '0') + (str[j+1] - '0')) % 10 + '0');

        str = temp;
    }

    cout << str << "\n";
}
