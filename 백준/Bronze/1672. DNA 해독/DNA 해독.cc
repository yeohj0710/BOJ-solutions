#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;
    string str; cin >> str;

    for(int i=N-1; i>0; i--)
        if(str[i-1] == 'A' && str[i] == 'A') str[i-1] = 'A';
        else if(str[i-1] == 'A' && str[i] == 'G') str[i-1] = 'C';
        else if(str[i-1] == 'A' && str[i] == 'C') str[i-1] = 'A';
        else if(str[i-1] == 'A' && str[i] == 'T') str[i-1] = 'G';
        else if(str[i-1] == 'G' && str[i] == 'A') str[i-1] = 'C';
        else if(str[i-1] == 'G' && str[i] == 'G') str[i-1] = 'G';
        else if(str[i-1] == 'G' && str[i] == 'C') str[i-1] = 'T';
        else if(str[i-1] == 'G' && str[i] == 'T') str[i-1] = 'A';
        else if(str[i-1] == 'C' && str[i] == 'A') str[i-1] = 'A';
        else if(str[i-1] == 'C' && str[i] == 'G') str[i-1] = 'T';
        else if(str[i-1] == 'C' && str[i] == 'C') str[i-1] = 'C';
        else if(str[i-1] == 'C' && str[i] == 'T') str[i-1] = 'G';
        else if(str[i-1] == 'T' && str[i] == 'A') str[i-1] = 'G';
        else if(str[i-1] == 'T' && str[i] == 'G') str[i-1] = 'A';
        else if(str[i-1] == 'T' && str[i] == 'C') str[i-1] = 'G';
        else if(str[i-1] == 'T' && str[i] == 'T') str[i-1] = 'T';

    cout << str[0];
}
