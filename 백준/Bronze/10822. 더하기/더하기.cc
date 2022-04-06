#include <bits/stdc++.h>
using namespace std;

int main() {
    string line;
    cin >> line;
    vector<string> words;
    stringstream sstream(line);
    string word;

    while(getline(sstream, word, ',')) words.push_back(word);
    int sum = 0;
    for(int i=0; i<words.size(); i++) sum += stoi(words[i]);
    cout << sum;
}
