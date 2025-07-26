#include<bits/stdc++.h>
using namespace std;

int isPrime(int n, int i) {
    if(n <= 1) return 0;
    if(i == 1) return 1;
    if(n % i == 0) return 0;
    return isPrime(n, i - 1);
}

int main() {
    int n;
    cin >> n;
    if(isPrime(n, n - 1)) 
        cout << "Prime" << endl;
    else 
        cout << "Not Prime" << endl;
    return 0;
}
