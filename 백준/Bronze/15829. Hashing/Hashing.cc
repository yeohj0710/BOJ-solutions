#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    long long int temp, sum = 0;
    char c;
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> c;
        temp = c - 'a' + 1;
        for(int j=0; j<i; j++) temp = (temp*31)%1234567891;
        sum += temp;
    }
    cout << sum%1234567891;
}
