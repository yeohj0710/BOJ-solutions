#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;

    int ans = 0;

    for(int i=0; i<str.length(); i++)
        for(int j=1; j<=str.length()-i; j++) {
            string temp = str.substr(i, j);

            bool check = true;
            for(int k=0; k<temp.length(); k++)
                if(temp[k] != temp[temp.length()-1-k]) check = false;


            if(check) ans = max(ans, (int)temp.length());
        }

    cout << ans << "\n";
}
