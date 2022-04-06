#include <iostream>
#include <string>
using namespace std;

int main() {
    string S; int Count = 0;
    cin >> S;
    for(int i=0; i<S.length(); i++)
        if(S[i] == ',') Count++;
    cout << Count+1;
}
