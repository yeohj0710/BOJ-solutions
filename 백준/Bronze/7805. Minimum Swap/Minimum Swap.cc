#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str;

    while(cin >> str) {
        string temp = str;

        sort(temp.begin(), temp.end());

        int cnt = 0;
        for(int i=0; i<str.length(); i++)
            if(str[i] != temp[i])
                for(int j=i+1; j<str.length(); j++)
                    if(str[j] == temp[i]) {
                        swap(str[i], str[j]);
                        cnt++;
                        break;
                    }

        cout << cnt << "\n";
    }
}
