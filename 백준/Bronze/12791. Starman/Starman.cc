#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    vector<pair<int, string>> album;
    album.push_back({1967, "DavidBowie"});
    album.push_back({1969, "SpaceOddity"});
    album.push_back({1970, "TheManWhoSoldTheWorld"});
    album.push_back({1971, "HunkyDory"});
    album.push_back({1972, "TheRiseAndFallOfZiggyStardustAndTheSpidersFromMars"});
    album.push_back({1973, "AladdinSane"});
    album.push_back({1973, "PinUps"});
    album.push_back({1974, "DiamondDogs"});
    album.push_back({1975, "YoungAmericans"});
    album.push_back({1976, "StationToStation"});
    album.push_back({1977, "Low"});
    album.push_back({1977, "Heroes"});
    album.push_back({1979, "Lodger"});
    album.push_back({1980, "ScaryMonstersAndSuperCreeps"});
    album.push_back({1983, "LetsDance"});
    album.push_back({1984, "Tonight"});
    album.push_back({1987, "NeverLetMeDown"});
    album.push_back({1993, "BlackTieWhiteNoise"});
    album.push_back({1995, "1.Outside"});
    album.push_back({1997, "Earthling"});
    album.push_back({1999, "Hours"});
    album.push_back({2002, "Heathen"});
    album.push_back({2003, "Reality"});
    album.push_back({2013, "TheNextDay"});
    album.push_back({2016, "BlackStar"});

    int T; cin >> T;

    while(T--) {
        int a, b; cin >> a >> b;

        vector<pair<int, string>> ans;
        for(int i=0; i<album.size(); i++)
            if(album[i].first >= a && album[i].first <= b) ans.push_back(album[i]);

        cout << ans.size() << "\n";
        for(int i=0; i<ans.size(); i++) cout << ans[i].first << " " << ans[i].second << "\n";
    }
}
