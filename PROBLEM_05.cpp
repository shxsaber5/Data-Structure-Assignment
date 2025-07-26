#include<bits/stdc++.h>
using namespace std;

int powr(int a, int b) {
    if(b == 0) 
        return 1;
    return a * powr(a, b - 1);
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << powr(a, b) << endl;
    return 0;
}
