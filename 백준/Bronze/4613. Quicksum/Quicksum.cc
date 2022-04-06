#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        string str; getline(cin, str);

        if(str == "#") break;

        int sum = 0;
        for(int i=0; i<str.length(); i++)
            if(str[i] >= 'A' && str[i] <= 'Z') sum += (i+1)*(str[i] - 'A' + 1);

        cout << sum << "\n";
    }
}
