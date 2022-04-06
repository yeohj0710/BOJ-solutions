#include <bits/stdc++.h>
using namespace std;

int main() {
    string Str;
    cin >> Str;
    int JOI = 0, IOI = 0;
    for(int i=0; i<Str.length()-2; i++) {
        if(Str[i] == 'J' && Str[i+1] == 'O' && Str[i+2] == 'I') JOI++;
        if(Str[i] == 'I' && Str[i+1] == 'O' && Str[i+2] == 'I') IOI++;
    }
    cout << JOI << "\n" << IOI;
}
