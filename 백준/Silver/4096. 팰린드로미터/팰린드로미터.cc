#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        string str; cin >> str;
        if(str == "0") break;

        int L = str.length();
        int N = stoi(str);

        for(int i=N; ; i++) {
            string temp = to_string(i);

            while(temp.length() < L) temp = "0" + temp;

            bool check = true;
            for(int j=0; j<temp.length(); j++)
                if(temp[j] != temp[temp.length()-1-j]) check = false;

            if(check) {
                cout << i - N << "\n";
                break;
            }
        }
    }
}
