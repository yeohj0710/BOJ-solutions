#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int N; cin >> N;
        string str; cin >> str;
        if(N == 0 && str == "0") break;

        string temp = "";
        for(int i=0; i<str.length(); i++)
            if(str[i] != '0' + N) temp += str[i];

        int i = 0;
        while(temp[i] == '0') i++;
        temp = temp.substr(i, temp.length()-i);

        if(temp == "") temp += "0";

        cout << temp << "\n";
    }
}
