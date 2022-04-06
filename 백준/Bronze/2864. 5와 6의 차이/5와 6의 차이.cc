#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string num1, num2; cin >> num1 >> num2;

    for(int i=0; i<num1.length(); i++)
        if(num1[i] == '6') num1[i] = '5';
    for(int i=0; i<num2.length(); i++)
        if(num2[i] == '6') num2[i] = '5';

    cout << stoi(num1) + stoi(num2) << " ";

    for(int i=0; i<num1.length(); i++)
        if(num1[i] == '5') num1[i] = '6';
    for(int i=0; i<num2.length(); i++)
        if(num2[i] == '5') num2[i] = '6';

    cout << stoi(num1) + stoi(num2);
}
