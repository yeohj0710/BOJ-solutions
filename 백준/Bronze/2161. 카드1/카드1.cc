#include <iostream>
#include <queue>
using namespace std;

int main() {
    int n, temp;
    queue<int> card;
    cin >> n;
    for(int i=1; i<=n; i++) card.push(i);
    while(1) {
        if(card.empty()) break;
        temp = card.front();
        card.pop();
        cout << temp << " ";
        if(card.empty()) break;
        temp = card.front();
        card.pop();
        card.push(temp);
    }
}
