#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string le = "qwertyasdfgzxcvb";

    string str; getline(cin, str);

    int a = 0, b = 0, c = 0;

    for(int i=0; i<str.length(); i++) {
        if(str[i] == ' ') c++;
        else if(str[i] >= 'A' && str[i] <= 'Z') {
            c++;

            str[i] += 'a' - 'A';

            bool check = false;

            for(int j=0; j<le.length(); j++)
                if(str[i] == le[j]) check = true;

            if(check) a++;
            else b++;
        }
        else if(str[i] >= 'a' && str[i] <= 'z') {
            bool check = false;

            for(int j=0; j<le.length(); j++)
                if(str[i] == le[j]) check = true;

            if(check) a++;
            else b++;
        }
    }

    while(c > 0) {
        if(a <= b) a++;
        else b++;

        c--;
    }

    cout << a << " " << b << "\n";
}
