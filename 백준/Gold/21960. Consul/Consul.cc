#include <bits/stdc++.h>
#include "grader.h"
using namespace std;

int kth(int k);
void say_answer(int k);
int cnt(int k);

void solve(int n)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    mt19937 mt((unsigned int)time(NULL));
    uniform_int_distribution<int> uid(0, 1e5);
    auto rd = bind(uid, mt);
    
    bool check = false;

    for(int i=0; i<24; i++) {
        int x = rd() % n + 1;
        
        if(cnt(kth(x)) > n/3) {
            say_answer(kth(x));
            
            check = true;
            break;
        }
    }
    
    if(!check) say_answer(-1);
}
