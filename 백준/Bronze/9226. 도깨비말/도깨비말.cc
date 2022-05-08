#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string arr = "aeiou";

    while(true) {
        string str; cin >> str;
        if(str == "#") break;

        bool check = false;
        for(int i=0; i<str.length(); i++)
            for(int j=0; j<arr.length(); j++)
                if(str[i] == arr[j]) check = true;

        if(!check) {
            cout << str << "ay\n";
            continue;
        }

        while(true) {
            bool check = false;
            for(int i=0; i<arr.length(); i++)
                if(str[0] == arr[i]) check = true;

            if(check) {
                cout << str << "ay\n";
                break;
            }

            str = str.substr(1, str.length()-1) + str[0];
        }
    }
}
