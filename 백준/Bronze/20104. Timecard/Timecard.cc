#include "timecard.h"

static int N;

void init(int n) {
	N = n;
    
    return;
}

std::string convert(std::string s) {
	for(int i=0; i<s.length(); i++)
        if(s[i] >= 'A' && s[i] <= 'Z') s[i] += 'a' - 'A';
    
	return s;
}
