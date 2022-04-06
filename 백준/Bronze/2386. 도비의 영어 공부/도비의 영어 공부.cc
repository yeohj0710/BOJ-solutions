#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        char c; cin >> c;
        if(c == '#') break;
        char line[255]; cin.getline(line, sizeof(line));
        int cnt = 0;
        for(int i=0; i<strlen(line); i++)
            if(line[i] == c || line[i] == c-'a'+'A') cnt++;
        cout << c << " " << cnt << "\n";
    }
}
