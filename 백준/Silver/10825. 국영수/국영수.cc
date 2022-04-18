#include <bits/stdc++.h>
using namespace std;

struct Score {
    string name;
    int kor, eng, math;
};

bool cmp(Score &a, Score &b) {
    if(a.kor != b.kor) return a.kor > b.kor;
    else if(a.eng != b.eng) return a.eng < b.eng;
    else if(a.math != b.math) return a.math > b.math;
    else return a.name < b.name;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<Score> score(N);

    for(int i=0; i<N; i++)
        cin >> score[i].name >> score[i].kor >> score[i].eng >> score[i].math;

    sort(score.begin(), score.end(), cmp);

    for(int i=0; i<N; i++) cout << score[i].name << "\n";
}
