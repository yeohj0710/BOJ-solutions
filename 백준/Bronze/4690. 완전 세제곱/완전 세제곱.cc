#include <bits/stdc++.h>
using namespace std;

int main() {
    for(int a=2; a<=100; a++)
        for(int b=2; b<a; b++)
            for(int c=b; c<a; c++)
                for(int d=c; d<a; d++)
                    if(a*a*a == b*b*b+c*c*c+d*d*d)
                        cout << "Cube = " << a << ", Triple = (" << b << "," << c << "," << d << ")\n";
}
